cmake_minimum_required(VERSION 3.20)

project(kiosk_lvgl LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories("libraries/lvgl/include")
add_subdirectory(libraries/lvgl)
include_directories("libraries/lv")
add_subdirectory(libraries/lv)

include_directories(src)
add_subdirectory(src)