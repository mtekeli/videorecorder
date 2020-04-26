#pragma once

#include <QObject>

class QScreen;

class GrabberBase : public QObject
{
    Q_OBJECT

public:
    GrabberBase(QObject* parent = nullptr);
};
