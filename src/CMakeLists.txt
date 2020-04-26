set(SOURCE_LIST
    "main.cpp"
    "app.hpp"
    "app.cpp"
)

add_executable(${PROJECT_NAME} ${SOURCE_LIST})

#target_sources(${PROJECT_NAME}
#    PRIVATE
#        "main.cpp"
#        "app.hpp"
#        "app.cpp"
#)

add_subdirectory(libs)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_LIST})

set(EXTRA_LIBS ${EXTRA_LIBS} Qt5::Core Qt5::Quick Qt5::Gui)
set(EXTRA_LIBS ${EXTRA_LIBS} libscreenrecorder)

target_link_libraries(${PROJECT_NAME} ${EXTRA_LIBS})

