#include "frame_encoder.hpp"

#include <QDebug>

extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
}

FrameEncoder::FrameEncoder(QObject* parent) : QObject{parent}
{
    AVFormatContext* oc;
    /* allocate the output media context */
    avformat_alloc_output_context2(&oc, NULL, NULL, "filename.mpeg");
    /* free the stream */
    avformat_free_context(oc);
}
