cmake_minimum_required(VERSION 3.13)

include(FetchContent)
FetchContent_Declare(
    GeodeModCMake
    GIT_REPOSITORY https://github.com/geode-sdk/gmod-cmake.git
    GIT_TAG main
)
FetchContent_MakeAvailable(GeodeModCMake)

project(auto_builder)

find_package(Geode REQUIRED)

add_geode_mod(
    wyattgamertv.auto_builder
    VERSION 1.0.0
    CONTAINS_RESOURCES
)

target_sources(wyattgamertv.auto_builder PUBLIC src/main.cpp)
