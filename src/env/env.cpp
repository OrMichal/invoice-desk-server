#include "./env.hpp"
#include <fstream>
#include <sstream>
#include <string>

void Env::loadData(const std::string filename) {
        std::ifstream file(filename);
        std::map<std::string, std::string> env;
        std::string line;

        while(std::getline(file, line)) {
                if(line.empty() || line[0] == '#')
                        continue;

                std::istringstream is(line);
                std::string key, value;

                if(std::getline(is, key, '=') && std::getline(is, value)) {
                        env[key] = value;
                }
        }

        Env::_data = env;
}

Env& Env::getInstance(const std::string filename) {
        static Env instance;
        instance.loadData(filename);

        return instance;
}

std::string Env::get(const std::string key) {
        return Env::_data[key];
}
