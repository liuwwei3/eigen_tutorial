cmake_minimum_required(VERSION 2.8)

project(eigen_toturial)

find_package( Eigen3 REQUIRED NO_MODULE)
if ( NOT TARGET Eigen3::Eigen)
  message("not find eigen3::eigen")
  include_directories(${EIGEN3_INCLUDE_DIRS})
  set (EIGEN_LINK_LIBRARIES )
else ()
  message("find eigen3 success.")
  set (EIGEN_LINK_LIBRARIES Eigen3::Eigen)
endif ()

add_executable(hello src/eigen_hello.cpp)

target_link_libraries(hello ${EIGEN_LINK_LIBRARIES})
