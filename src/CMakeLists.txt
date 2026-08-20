cmake_minimum_required(VERSION 3.20)

add_executable(kiosk-app
        main.cpp
)

target_link_libraries(kiosk-app
        PRIVATE
 #       SDL2::SDL2 SDL2_image::SDL2_image SDL2_ttf::SDL2_ttf
)

# Liaison statique de libstdc++ et ajout de libatomic pour la compatibilité avec RPI1
target_link_options(kiosk-app PRIVATE
        #      -march=armv6
        #       -mfpu=vfp
        #       -mfloat-abi=hard
        -static-libstdc++
)



#target_link_libraries(kiosk-app PRIVATE atomic pitools ${GPIOD_LIBRARY})

target_link_libraries(kiosk-app PUBLIC lv::lv)