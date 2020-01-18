#include "myvideowidget.h"

MyVideoWidget::MyVideoWidget(QWidget* parent):QVideoWidget(parent)
{

}

void MyVideoWidget::setMediaPlayer(QMediaPlayer *player)
{
    m_Player =  player;
}

void MyVideoWidget::keyPressEvent(QKeyEvent *event)
{
    //按键事件，ESC退出全屏
    if((event->key()== Qt::Key_Escape)&&(isFullScreen())){
        setFullScreen(false);
        event->accept();
        QVideoWidget::keyPressEvent(event);
    }
}

void MyVideoWidget::mousePressEvent(QMouseEvent *event)
{
    //鼠标事件，单击控制暂停和播放
    if(event->button()==Qt::LeftButton){
        if(m_Player->state() == QMediaPlayer::PlayingState){
            m_Player->pause();
        }else{
            m_Player->play();
        }
    }
    QVideoWidget::mousePressEvent(event);
}
