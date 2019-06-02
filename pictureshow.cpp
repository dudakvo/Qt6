#include "pictureshow.h"
#include "QLabel"
#include "QLineEdit"
#include "QPushButton"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include "QPixmap"
#include "QString"

PictureShow::PictureShow(QWidget *parent) : QWidget(parent)
{
    mPictureView = new QLabel;
    QLabel *lLineLable = new QLabel("Enter path to image:");
    mPicturePath = new QLineEdit;
    QPushButton *lDownloadButton = new QPushButton("Download");

    QHBoxLayout *lHBoxPath =new QHBoxLayout;
    QHBoxLayout *QHBoxImage = new QHBoxLayout;
    QVBoxLayout *lVBoxImage = new QVBoxLayout;

    lHBoxPath->addWidget(lLineLable);
    lHBoxPath->addWidget(mPicturePath);
    lHBoxPath->addWidget(lDownloadButton);
    QHBoxImage->addWidget(mPictureView);

    lVBoxImage->addLayout(lHBoxPath);
    lVBoxImage->addLayout(QHBoxImage);

    setLayout(lVBoxImage);
    setWindowTitle("Image view");

    connect(lDownloadButton, SIGNAL(clicked()),this, SLOT(imageDownload()));
}

void PictureShow::imageDownload()
{
    QString path;
    QPixmap lImage;
    path = mPicturePath->text();
    if (lImage.load(path))
    {
        mPictureView->setPixmap(lImage)    ;
    }
    else
    {
        mPictureView->setText("Unable open image");
    }
}
