#include "head.hpp"

drogon::Task<void> CheckController::handleCheckConnect(const drogon::HttpRequestPtr req, std::function<void(const drogon::HttpResponsePtr &)> callback)
{
    std::string reqBody(req->getBody());
    drogon::HttpResponsePtr resp;
    Json::Value jsonRes;

    Json::Value value;
    Json::Reader reader;
    auto jsonParseFlag = reader.parse(reqBody, value);

    jsonRes["Connect"] = true;
    resp = drogon::HttpResponse::newHttpJsonResponse(jsonRes);
    // std::this_thread::sleep_for(std::chrono::seconds(3));
    callback(resp);
    co_return;
}

drogon::Task<void> CheckController::Test(std::string &res)
{
    co_await drogon::sleepCoro(drogon::app().getLoop(), 10);
    res = "123";
}

drogon::Task<void> CheckController::handleTest(const drogon::HttpRequestPtr req, std::function<void(const drogon::HttpResponsePtr &)> callback)
{
    Json::Value value;
    std::string res;
    Json::Reader reader;

    std::string reqBody(req->getBody());
    reader.parse(reqBody, value);
    std::string SQL = value["SQL"].asString();
    auto value2 = value["tableName"];
    auto value3 = value["fieldName"];

    std::vector<std::string> tableNameArr, fieldNameArr;
    for (auto &ele : value2)
    {
        tableNameArr.push_back(ele.asString());
    }

    for (auto &ele : value3)
    {
        fieldNameArr.push_back(ele.asString());
    }

    auto responBody = co_await BrpcExtension::Send(SQL, tableNameArr, fieldNameArr);
    value["result"] = responBody;
    auto resp = drogon::HttpResponse::newHttpJsonResponse(value);
    callback(resp);
    co_return;
}
