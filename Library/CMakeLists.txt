# Minimum version of CMake
cmake_minimum_required(VERSION 3.0)

# Project Simple HTN Planner Library
project (SimpleHTNPlannerLib)

if(MSVC)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
    set(BUILD_SHARED_LIBS TRUE)
endif()

set	(INCLUDE_FILES
		Include/EnumAgent.h
		Include/EnumBlock.h
		Include/EnumBlockStatus.h
		Include/EnumLocation.h
		Include/EnumReturnedValue.h
		Include/EnumToString.h
		
		Include/SimpleHTN/State.h
	)
set	(SOURCE_FILES
		Source/EnumToString.cpp	
		
		Source/SimpleHTN/State.cpp
	)

add_library	(${PROJECT_NAME} SHARED
				${SOURCE_FILES}
				${INCLUDE_FILES}
			)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/Include)