cmake_minimum_required( VERSION 3.10) 

project(ProbableTools)

set(SOURCES 
    src/event.cpp
    src/main.cpp)

add_executable(ProbableTools ${SOURCES})

add_subdirectory(include)
add_subdirectory(src)

target_include_directories(ProbableTools
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)