#include "GUI.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    GUI window;
    window.show();
    return app.exec();
}
