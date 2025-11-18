cmake_minimum_required(VERSION 3.14)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

if(MINGW)
    set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")
endif()

include(FetchContent)

FetchContent_Declare(
    json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG        v3.11.3
)

FetchContent_MakeAvailable(json)

add_executable(DS_PROJECT src/main.cpp)

target_link_libraries(DS_PROJECT PRIVATE nlohmann_json::nlohmann_json)
