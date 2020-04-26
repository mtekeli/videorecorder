#pragma once

#include <QObject>

class QScreen;

class ScreenRecorder : public QObject
{
    Q_OBJECT

public:
    ScreenRecorder(const QScreen& screen, QObject* parent = nullptr);
};
