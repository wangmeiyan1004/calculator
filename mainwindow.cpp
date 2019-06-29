#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(530,599);
    ui->textEdit_show->setText("|");
    operand2 = "";
    result = 0;
    operand1 = "";
    state = 0;
    oper = 0;
    sum = 0;
    point = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}



//退回初始状态，清除操作
void MainWindow::on_pushButton_clear_clicked()
{
    result=0;
    operand1 = "";
    operand2 = "";
    state = 0;
    oper = 0;
    ui->textEdit_show->setText("|");
    point = 0;
}

void MainWindow::on_pushButton_equal_clicked()
{
    switch (oper)
    {
    case 1:  //加法

        result+=operand1.toFloat()+operand2.toFloat();
        sum=result;

        Sresult=QString("%1").arg(result);
        ui->textEdit_show->setText(Sresult);
        break;
    case 2:   //减法

        result+=operand1.toFloat()-operand2.toFloat();
        sum=result;
        Sresult=QString("%1").arg(result);
        ui->textEdit_show->setText(Sresult);
        break;
    case 3:     //乘法

        if(sum==0)
        {
            result=1;
        }
        else
        {
            result=sum;
        }
        if(operand1.toFloat()*operand2.toFloat()!=0)
        {
            result*=operand1.toFloat()*operand2.toFloat();
            qDebug()<<result<<""<<sum;
        }
        else
        {
            result*=(operand1.toFloat()+operand2.toFloat());
            qDebug()<<result<<""<<sum;
        }
        sum=result;
        Sresult=QString("%1").arg(result);
        ui->textEdit_show->setText(Sresult);
        break;
    case 4:    //除法

        if(operand2.toFloat()==0)
        {
            ui->textEdit_show->setText("system error!");
            QTimer::singleShot(1000,this,SLOT(on_pushButton_clear_clicked()));

            break;
        }
        if(sum==0)
        {
            result = 0;
        }
        else
        {
            result=sum;
        }
        if(operand1.toFloat()/operand2.toFloat()!=0)
        {
            result=operand1.toFloat()/operand2.toFloat();
            qDebug()<<result<<""<<sum;
        }
        else
        {
            result/=(operand1.toFloat()+operand2.toFloat());
            qDebug()<<result<<""<<sum;
        }
        sum=result;
        Sresult=QString("%1").arg(result);
        ui->textEdit_show->setText(Sresult);
        break;
    case 5:   //求百分数

        if(sum==0)
        {
            result = 0;
        }
        else
        {
            result=sum;
            result /= 100;
            qDebug()<<result<<""<<sum;
        }
        if(operand1.toFloat() != 0)
        {
            result=operand1.toFloat()/100;
            qDebug()<<result<<""<<sum;
        }
        else
        {
            result=0;
            qDebug()<<result<<""<<sum;
        }
        sum=result;
        Sresult=QString("%1").arg(result);
        ui->textEdit_show->setText(Sresult);
        break;

    }
    sum=result;
    state = -1;
    oper = 0;
    operand1 = "";
    operand2 = "";
}

void MainWindow::on_pushButton_1_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }

    if(oper == 0)
    {
        operand1+="1";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "1";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "2";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper!=0)
    {
        operand2 += "2";
        ui->textEdit_show->setText(operand2);
    }

}

void MainWindow::on_pushButton_3_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "3";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "3";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "4";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "4";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_5_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "5";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "5";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "6";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "6";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "7";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "7";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "8";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "8";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "9";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2+="9";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_0_clicked()
{
    if(state == -1)
    {
        result=sum;
        on_pushButton_clear_clicked();
    }
    if(oper == 0)
    {
        operand1 += "0";
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2 += "0";
        ui->textEdit_show->setText(operand2);
    }
}

void MainWindow::on_pushButton_plus_clicked()
{
    if(state == 0||state == -1)
    {
        ui->textEdit_show->append("+");
    }
    state = 1;
    oper = 1;
    point = 0;
}

void MainWindow::on_pushButton_minis_clicked()
{
    if(state == 0||state == -1)
    {
        ui->textEdit_show->append("-");
    }
    state = 1;
    oper = 2;
    point = 0;
}

void MainWindow::on_pushButton_star_clicked()
{
    if(state == 0||state == -1)
    {
        ui->textEdit_show->append("*");

    }
    sum=result;
    state = 1;
    oper = 3;
    point = 0;
}
void MainWindow::on_pushButton_div_clicked()
{
    if(state == 0||state == -1)
    {
        ui->textEdit_show->append("/");

    }
    sum=result;
    state = 1;
    oper = 4;
    point = 0;
}
void MainWindow::on_pushButton_get_clicked()
{
    if(state == 0||state == -1)
    {
        ui->textEdit_show->append("%");

    }
    sum=result;
    state = 1;
    oper = 5;
    point = 0;
}

void MainWindow::on_pushButton_point_clicked()
{
    if(point == 0)
    {
        if(oper == 0)
        {
            operand1 += ".";
            ui->textEdit_show->setText(operand1);
        }
        else if(oper != 0)
        {
            operand2 += ".";
            ui->textEdit_show->setText(operand2);
        }
    }
    state = 1;
    point = 1;
}

void MainWindow::on_pushButton_del_clicked()
{

    if(oper == 0)
    {
        operand1.chop(1);//退一格
        ui->textEdit_show->setText(operand1);
    }
    else if(oper != 0)
    {
        operand2.chop(1);
        ui->textEdit_show->setText(operand2);
    }

}
