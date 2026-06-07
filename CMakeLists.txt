cmake_minimum_required(VERSION 3.13)

project(AutoBuilder)

find_package(Geode REQUIRED)

add_geode_mod(
    wyattgamertv.autobuilder
    VERSION 1.0.0
    GD_VERSION 2.208
    SOURCES src/main.cpp
)
