#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define VERSION "0.0.1-alpha"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_cmdCarte_clicked();

    void on_cmdGPS_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
