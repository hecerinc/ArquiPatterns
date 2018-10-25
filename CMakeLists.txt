cmake_minimum_required(VERSION 3.12)
project(pattern1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(pattern1
        CentralCityArtichokePizza.h
        CentralCityStore.h
        GothamStore.h
        main.cpp
        MetropolisStore.h
        Pizza.h
        PizzaStore.h
        StarCityStore.h)
