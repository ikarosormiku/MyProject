#ifndef VIDEVPLAYER_H
#define VIDEVPLAYER_H

#include <QWidget>

namespace Ui {
class VidevPlayer;
}

class VidevPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit VidevPlayer(QWidget *parent = 0);
    ~VidevPlayer();

private:
    Ui::VidevPlayer *ui;
};

#endif // VIDEVPLAYER_H
