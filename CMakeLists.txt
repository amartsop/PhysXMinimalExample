cmake_minimum_required( VERSION 3.10 )

project( simulation_setup )

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Optimization parameters
set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-Os")

# Add third party directory
add_subdirectory(libs)


# Include directories
include_directories(
  ./include  
)


set(ALL_LIBS
  third_party
)
  
# target
add_executable(main main.cpp ${SOURCES})


target_include_directories(main PRIVATE )
target_link_libraries(main ${ALL_LIBS})
