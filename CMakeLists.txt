cmake_minimum_required(VERSION 3.23)
project(mathlib)

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.16.0
)
FetchContent_MakeAvailable(Catch2)

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)