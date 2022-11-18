cmake_minimum_required(VERSION 3.12 FATAL_ERROR)


set(PROJECT_NAME lernGLFW)
project(${PROJECT_NAME})


add_executable(${PROJECT_NAME}
	src/main.cpp
)


target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_17)


add_subdirectory(include/glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE glfw)

add_subdirectory(include/glad)
target_link_libraries(${PROJECT_NAME} PRIVATE glad)