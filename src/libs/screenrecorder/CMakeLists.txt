set(SOURCE_LIST
    screen_recorder.hpp
    screen_recorder.cpp
)

add_library(libscreenrecorder ${SOURCE_LIST})
add_subdirectory(grabber)
add_subdirectory(encoder)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_LIST})

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

target_link_libraries(libscreenrecorder libgrabber libencoder)

