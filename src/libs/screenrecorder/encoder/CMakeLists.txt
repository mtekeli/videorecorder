set(SOURCE_LIST
    "frame_encoder.hpp"
    "frame_encoder.cpp"
)
add_library(libencoder ${SOURCE_LIST})

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_LIST})

include_directories("ffmpeg/include")

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

if (${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    file(GLOB FFMEG_LIBS "ffmpeg/lib/*.dylib")
endif()
if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(FFMEG_LIBS avcodec avdevice avfilter avformat avutil postproc swresample swscale)
endif()

target_link_libraries(libencoder Qt5::Core Qt5::Quick ${FFMEG_LIBS})
