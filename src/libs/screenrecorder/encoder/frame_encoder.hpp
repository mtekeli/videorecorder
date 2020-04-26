#pragma once

#include <QObject>

class FrameEncoder : public QObject
{
    Q_OBJECT

public:
    FrameEncoder(QObject* parent = nullptr);
};
