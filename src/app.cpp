#include "app.hpp"
#include "libs/screenrecorder/screen_recorder.hpp"

App::App(int argc, char* args[]) : QGuiApplication(argc, args) { new ScreenRecorder{*primaryScreen(), this}; }
