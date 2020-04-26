#include <QGuiApplication>

#include "app.hpp"

int main(int argc, char* args[])
{
    App app{argc, args};
    return app.exec();
}
