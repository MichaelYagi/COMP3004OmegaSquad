#ifndef CETSERVER_H
#define CETSERVER_H

#include <QMainWindow>
#include "DatabaseHandler.h"

namespace Ui {
    class CETServer;
}

class CETServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CETServer(QWidget *parent = 0);
    ~CETServer();

/*UI Handlers*/
public slots:
    //Start server button
    void startServerButtonHandler();
    //Stop server button
    void stopServerButtonHandler();

private:
    Ui::CETServer *ui;

private slots:
    void on_actionExit_triggered();
};

#endif // CETSERVER_H