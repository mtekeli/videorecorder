#pragma once

#include "grabber_base.hpp"

class QScreen;

class ScreenGrabber : public GrabberBase
{
    Q_OBJECT

public:
    ScreenGrabber(const QScreen& screen, QObject* parent = nullptr);
};
