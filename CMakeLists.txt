cmake_minimum_required(VERSION 3.13)

project(auto_builder)

list(APPEND CMAKE_PREFIX_PATH "/home/runner/cli")

find_package(Geode REQUIRED)

add_geode_mod(
    wyattgamertv.auto_builder
    VERSION 1.0.0
    CONTAINS_RESOURCES
)

target_sources(wyattgamertv.auto_builder PUBLIC src/main.cpp)
