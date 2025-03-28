cmake_minimum_required(VERSION 3.5)

project(my_str 
	VERSION 1.0.0
	DESCRIPTION "C++ library with class MyStr for work with strings"
	LANGUAGES CXX)

file(GLOB
	public_headers "*.h"
	sources "*.cpp")

add_library(${PROJECT_NAME}_lib
			${sources} 
			${public_headers})
