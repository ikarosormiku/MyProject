#include "videvplayer.h"
#include "ui_videvplayer.h"

VidevPlayer::VidevPlayer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VidevPlayer)
{
    ui->setupUi(this);
}

VidevPlayer::~VidevPlayer()
{
    delete ui;
}
