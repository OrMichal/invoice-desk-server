#pragma once
#include <drogon/HttpController.h>
#include <drogon/HttpRequest.h>
#include <drogon/HttpResponse.h>
#include <drogon/HttpTypes.h>
using namespace drogon;

class InvoiceController : public drogon::HttpController<InvoiceController>
{
        public:
                METHOD_LIST_BEGIN
                        ADD_METHOD_TO(InvoiceController::getAll, "/invoices", Get);
                METHOD_LIST_END

                void getAll(const HttpRequestPtr &req, std::function<void(const HttpResponsePtr &)> &&callback) const;
};
