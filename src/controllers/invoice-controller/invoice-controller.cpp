#include "./invoice-controller.hpp"
#include <drogon/HttpRequest.h>
#include <drogon/HttpResponse.h>

void InvoiceController::getAll(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) const
{
        Json::Value json;

        json["id"] = 1;
        json["name"] = "ivan";

        auto resp = HttpResponse::newHttpJsonResponse(json);
        callback(resp);
}
