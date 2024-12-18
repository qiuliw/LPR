cmake_minimum_required(VERSION 3.29)
project(LPR)

set(CMAKE_CXX_STANDARD 20)

add_executable(LPR code/main.cpp
    code/LPR.cpp        
)


find_package(OpenCV REQUIRED)
message("===========${OpenCV_INCLUDE_DIRS}")
message("========${OpenCV_LIBS}")

target_include_directories(${PROJECT_NAME} PRIVATE ${OpenCV_INCLUDE_DIRS})

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})