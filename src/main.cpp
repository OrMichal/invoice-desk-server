#include "env/env.hpp"
#include <drogon/drogon.h>
#include <string>
#include <iostream>
using namespace drogon;


int main() {
        Env &env = Env::getInstance("../.env");

        std::cout << env.get("haha") << "\n";

        app().setLogPath("./")
                .setLogLevel(trantor::Logger::kWarn)
                .addListener("0.0.0.0", 3000)
                .setThreadNum(16)
                .enableRunAsDaemon()
                .run();
}
