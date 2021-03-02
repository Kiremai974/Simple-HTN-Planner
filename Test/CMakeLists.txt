# Minimum version of CMake
cmake_minimum_required(VERSION 3.0)

# Test for Simple HTN Planner
project(SimpleHTNPlannerTest)

set	(INCLUDE_FILES 
		
	)

set	(SOURCE_FILES
		Source/main.cpp
	)

add_executable	(${PROJECT_NAME}
					${SOURCE_FILES}
					${INCLUDE_FILES}
				)
			
get_target_property(LIB_INCLUDE_DIR SimpleHTNPlannerLib INTERFACE_INCLUDE_DIRECTORIES)			
target_include_directories(${PROJECT_NAME} PRIVATE ${LIB_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} SimpleHTNPlannerLib)