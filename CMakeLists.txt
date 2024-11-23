cmake_minimum_required(VERSION 3.30)
project(SPTienda)

set(CMAKE_CXX_STANDARD 20)

add_executable(SPTienda main.cpp
        Producto.cpp
        Producto.h
        Cliente.cpp
        Cliente.h
        Tienda.cpp
        Tienda.h
)
