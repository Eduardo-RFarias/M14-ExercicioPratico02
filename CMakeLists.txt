cmake_minimum_required(VERSION 3.0.0)
project(exercicioPratico02 VERSION 0.1.0)

add_subdirectory(lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/out)

add_executable(exercicioPratico02 main.cpp)

target_link_libraries(exercicioPratico02 lib)
