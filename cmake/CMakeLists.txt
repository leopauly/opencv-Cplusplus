cmake_minimum_required(VERSION 2.8)
project( gcccv )
find_package( OpenCV REQUIRED )

add_executable( test testimage.cpp )
add_executable( test2 rgb2gray.cpp )

target_link_libraries( test ${OpenCV_LIBS} )
target_link_libraries( test2 ${OpenCV_LIBS} )
