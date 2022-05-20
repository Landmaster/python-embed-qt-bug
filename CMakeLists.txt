cmake_minimum_required(VERSION 3.14)

project(pythontest LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(pythontest
  main.cpp
)
target_link_libraries(pythontest PRIVATE Qt${QT_VERSION_MAJOR}::Core)

set(PYBIND11_FINDPYTHON ON)
add_subdirectory(pybind11)
target_link_libraries(pythontest PRIVATE pybind11::embed)
target_link_libraries(pythontest PRIVATE pybind11::windows_extras)
