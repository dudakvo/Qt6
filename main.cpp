#include "pictureshow.h"
#include <QApplication>

int main(int lArgc, char *lArgv[])
{
    QApplication lApplication(lArgc, lArgv);

    PictureShow picture;

    picture.show();

    return lApplication.exec();
}
