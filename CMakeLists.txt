cmake_minimum_required(VERSION 3.17)
project(Prethesis)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prethesis main.cpp Model/Earth.cpp Model/Earth.h Model/GridCell.cpp Model/GridCell.h Model/Component.cpp Model/Component.h Model/Components/Air.cpp Model/Components/Air.h Model/Components/Water.cpp Model/Components/Water.h Model/Components/Base/Fluid.cpp Model/Components/Base/Fluid.h)