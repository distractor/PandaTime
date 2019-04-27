cmake_minimum_required(VERSION 3.10)
project(PandaTime)

set(CMAKE_CXX_STANDARD 14)

add_executable(PandaTime main.cpp source/PTData.cpp source/PTData.h source/PTTimer.cpp source/PTTimer.h source/PTAnalysis.cpp source/PTAnalysis.h source/PTMath.cpp source/PTOutput.cpp source/PTOutput.h)