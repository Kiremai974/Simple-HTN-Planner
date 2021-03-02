# Minimum version of CMake
cmake_minimum_required(VERSION 3.0)

# Project Simple HTN Planner Library
project (SimpleHTNPlannerLib)

set	(INCLUDE_FILES
		Include/EnumAgent.h
		Include/EnumBlock.h
		Include/EnumBlockStatus.h
		Include/EnumLocation.h
		Include/EnumReturnedValue.h
		Include/EnumToString.h
	)
set	(SOURCE_FILES
		Source/EnumToString.cpp	
	)

add_library	(${PROJECT_NAME} SHARED
				${SOURCE_FILES}
				${INCLUDE_FILES}
			)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/Include)