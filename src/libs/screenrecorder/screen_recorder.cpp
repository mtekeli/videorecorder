#include "screen_recorder.hpp"
#include "encoder/frame_encoder.hpp"

#include <QDebug>
#include <QScreen>

ScreenRecorder::ScreenRecorder(const QScreen& screen, QObject* parent) : QObject{parent}
{
    qDebug() << __FUNCTION__ << "received screen" << screen.name() << screen.size();

    FrameEncoder encoder;
}
