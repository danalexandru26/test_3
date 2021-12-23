cmake_minimum_required (VERSION 3.8)

project(part1 VERSION 1.0)

add_executable(
	part1
	main.cpp
)

add_custom_command(
	TARGET part1 POST_BUILD
	COMMAND  ${CMAKE_COMMAND} -E copy_directory
	     ${CMAKE_SOURCE_DIR}/Resources $<TARGET_FILE_DIR:part1>/Resources
)