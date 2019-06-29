#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>
#include <QTimer>

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
    void on_pushButton_clear_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_minis_clicked();

    void on_pushButton_star_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_del_clicked();

    void on_pushButton_get_clicked();

private:
    Ui::MainWindow *ui;
    QString operand1;
    QString operand2;
    QString Sresult;
    float result;
    float sum;
    int oper;
    int state;
    int point;
};

#endif // MAINWINDOW_H
