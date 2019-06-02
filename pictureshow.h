#ifndef PICTURESHOW_H
#define PICTURESHOW_H

class QLineEdit;
class QLabel;

#include <QWidget>

class PictureShow : public QWidget
{
    Q_OBJECT
public:
    explicit PictureShow(QWidget *parent = nullptr);

signals:

public slots:

private slots:
    void imageDownload();

private:
    QLineEdit *mPicturePath;
    QLabel *mPictureView;
};

#endif // PICTURESHOW_H
