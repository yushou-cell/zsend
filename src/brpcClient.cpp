#include "head.hpp"

namespace BrpcExtension
{
    brpcClient Send::_brpc;
    brpcClient::brpcClient()
    {
        _options.protocol = "baidu_std";
        _options.connection_type = "single";
        _options.timeout_ms = 100 /*milliseconds*/;
        _options.max_retry = 3;
        if (_channel.Init("10.0.20.11:10086", "", &_options) != 0)
        {
            LOG(FATAL) << "Fail to initialize channel";
            // return -1;
        }
        google::SetCommandLineOption("bthread_concurrency", "32");
        google::SetCommandLineOption("socket_max_unwritten_bytes", "1048576000");
    }
    brpcClient::~brpcClient()
    {
    }

    void brpcClient::getResponse(brpc::Controller *cntl, SQL::SelectResponse *response, std::coroutine_handle<> h)
    {
        // static std::atomic_uint32_t ncount(0);
        // std::unique_ptr<brpc::Controller> cntlUniq(cntl);
        // std::unique_ptr<SQL::SelectResponse> responseUniq(response);
        // std::cout << arg << std::endl;
        if (!cntl->Failed())
        {
            LOG(INFO) << "Received response: " << response->result();
            // ncount.fetch_add(1);
        }
        else
        {
            LOG(ERROR) << "RPC failed: " << cntl->ErrorText();
        }
        h.resume();
        // if (ncount >= 6000000)
        // {
        //     auto now = std::chrono::steady_clock::now();
        //     auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count();
        //     std::cout << ms << std::endl;
        // }
    }
}