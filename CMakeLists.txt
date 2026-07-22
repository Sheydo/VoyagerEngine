cmake_minimum_required(VERSION 3.20)

project(VoyagerEngine)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    glfw
    GIT_REPOSITORY https://github.com/glfw/glfw
    GIT_TAG 3.4
)
FetchContent_MakeAvailable(glfw)

add_executable(
    VoyagerEngine
    src/main.cpp
    src/Application.cpp
    src/Window.cpp
)
target_link_libraries(VoyagerEngine
    PRIVATE
    glfw
)