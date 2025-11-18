#include <nlohmann/json.hpp>
#include <iostream>
using json = nlohmann::json;

int main() {
    json j;
    j["name"] = "Ali";
    j["age"] = 19;

    std::cout << j.dump(4);
}
