#ifndef MYVIDEOWIDGET_H
#define MYVIDEOWIDGET_H

#include <QVideoWidget>
#include <QMediaPlayer>
#include <QKeyEvent>
#include <QMouseEvent>

class MyVideoWidget: public QVideoWidget
{
public:
    MyVideoWidget(QWidget* parent = Q_NULLPTR);
    void setMediaPlayer(QMediaPlayer* media);
protected:
    void keyPressEvent(QKeyEvent* event);
    void mousePressEvent(QMouseEvent* event);
private:
    QMediaPlayer* m_Player;
};

#endif // MYVIDEOWIDGET_H
