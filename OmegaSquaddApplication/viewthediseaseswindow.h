#ifndef VIEWTHEDISEASESWINDOW_H
#define VIEWTHEDISEASESWINDOW_H

#include <QDialog>
#include "../CETClientApplication/DataHandler.h"
#include "../CETClientApplication/DiseaseType.h"
#include "../CETClientApplication/Region1.h"

namespace Ui {
    class ViewTheDiseasesWindow;
}

class ViewTheDiseasesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ViewTheDiseasesWindow(QWidget *parent = 0);
    ~ViewTheDiseasesWindow();

private:
    Ui::ViewTheDiseasesWindow *ui;
private slots:
    void editCase(int);
    void viewTheDiseasesWindowCancelButtonHandler();
    void viewTheDiseasesWindowNewButtonHandler();
};

#endif // VIEWTHEDISEASESWINDOW_H
