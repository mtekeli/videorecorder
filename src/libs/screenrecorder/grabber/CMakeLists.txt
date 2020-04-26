set(SOURCE_LIST
    "grabber_base.hpp"
    "grabber_base.cpp"
    "screen_grabber.hpp"
    "screen_grabber.cpp"
)
add_library(libgrabber ${SOURCE_LIST})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_LIST})

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

target_link_libraries(libgrabber PUBLIC Qt5::Core Qt5::Quick)
