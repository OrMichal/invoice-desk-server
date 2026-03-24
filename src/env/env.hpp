#pragma once
#include <map>
#include <string>

class Env {
        public:
                static Env& getInstance(const std::string filename);
                std::string get(const std::string key);
                ~Env() {}

        private:
                Env() {}
                std::map<std::string, std::string> _data;
                void loadData(const std::string filename);
};
