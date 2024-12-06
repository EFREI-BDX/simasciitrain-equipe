cmake_minimum_required(VERSION 3.28.1)
project(simasciitrain)

set(CMAKE_CXX_STANDARD 20)

add_executable(simasciitrain main.cpp
        ITrain.h
        Train.cpp
        AbstractLocomotive.h
        TypeLocomotive.h
        TypeLocomotive.cpp
        TrainElement.h
        ElectricLocomotive.h
        ElectricLocomotive.cpp
        GasolineLocomotive.h
        GasolineLocomotive.cpp
        AbstractLocomotive.cpp
        AbstractWagon.cpp
        AbstractWagon.h
        TypeWagon.cpp
        TypeWagon.h
        UtilityWagon.cpp
        UtilityWagon.h
        TrainElement.h
        PassengerWagon.cpp
        PassengerWagon.h
        FreightWagon.cpp
        FreightWagon.h
        Wagons.cpp
        Wagons.h
)
