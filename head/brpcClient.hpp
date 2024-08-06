#pragma once
#include "system.hpp"

namespace BrpcExtension
{
    inline void ConstructResponsGetArgs(std::vector<std::string> &temp)
    {
    }
    /**
     * @description: 提取可变参数值放入vector容器中
     * @param {vector<std::string>} &temp 传入传出vector
     * @param {string} &ele 元素
     * @param {Args...} args 可变参数
     * @return {*}
     */
    template <typename... Args>
    inline void ConstructResponsGetArgs(std::vector<std::string> &temp, const std::string &ele, Args... args)
    {
        temp.push_back(ele);
        ConstructResponsGetArgs(temp, args...);
    }
    class NonCopyable
    {
    protected:
        NonCopyable() = default;  // Allow default constructor
        ~NonCopyable() = default; // Allow default destructor

        NonCopyable(const NonCopyable &) = delete;            // Disable copy constructor
        NonCopyable &operator=(const NonCopyable &) = delete; // Disable assignment operator

        NonCopyable(NonCopyable &&) = delete;            // Disable move constructor
        NonCopyable &operator=(NonCopyable &&) = delete; // Disable move assignment operator
    };
    class brpcClient : public NonCopyable
    {
    private:
        brpc::Channel _channel;
        brpc::ChannelOptions _options;
        // SQL::SQLHandle_Stub _stub;

    public:
        brpcClient();
        static void getResponse(brpc::Controller *cntl, SQL::SelectResponse *response, std::coroutine_handle<> h);
        // void send(std::string sql, const std::vector<std::string> &tableName, const std::vector<std::string> &fieldName, std::coroutine_handle<> h, std::string &response);
        ~brpcClient();

    public:
        brpc::Channel &getChannel()
        {
            return _channel;
        }
    };

    class Send : public NonCopyable
    {
    private:
        std::string _msg;
        std::string result;
        std::unique_ptr<brpc::Controller> cntl;
        std::unique_ptr<SQL::SelectResponse> response;
        SQL::SelectRequest _req;

    public:
        // static tbb::task_group _tg;
        static brpcClient _brpc;

    public:
        inline Send(std::string msg, const std::vector<std::string> &tableName, const std::vector<std::string> &fieldName)
            : _msg(msg)
        {
            _req.set_sql(_msg);
            for (size_t i = 0; i < tableName.size(); i++)
            {
                _req.add_tablename(tableName[i]);
            }
            for (size_t i = 0; i < fieldName.size(); i++)
            {
                _req.add_fieldname(fieldName[i]);
            }
        }

        /**
         * @description: Used to determine whether a coroutine is suspended. Currently, all coroutines are always suspended.
         * @return {*}
         */
        inline bool await_ready() const noexcept { return false; }
        /**
         * @description: Called when a coroutine is suspended
         * @param {coroutine_handle<>} h Coroutine handle, automatically passed when the coroutine is suspended
         * @return {*}
         */
        inline void await_suspend(std::coroutine_handle<> h)
        {
            // trantor::EventLoop *loop = drogon::app().getLoop();
            // loop->queueInLoop([h, this]()
            //                   { this->result = parent->send(_msg);
            //     std::this_thread::sleep_for(std::chrono::seconds(10));
            //     h.resume(); });
            // tg.run([h, this]()
            //        {  this->result = parent->send(_msg);
            //           h.resume(); });
            // std::cout << "await_suspend" << std::endl;
            SQL::SQLHandle_Stub stub(&_brpc.getChannel());

            cntl.reset(new brpc::Controller());
            response.reset(new SQL::SelectResponse());
            stub.SelectHandle(cntl.get(), &_req, response.get(), brpc::NewCallback(&brpcClient::getResponse, cntl.get(), response.get(), h));
            // _tg.run([h, str]()
            //         {Send::_zmqEnc.push(std::move(str));
            //         h.resume(); });
        }
        /**
         * @description: The return value when suspension ends.
         * @return {*}
         */
        inline std::string await_resume() const noexcept
        {
            return response->result();
        }
    };
}
