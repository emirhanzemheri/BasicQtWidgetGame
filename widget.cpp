#include "widget.h"
#include "./ui_widget.h"
#include <QRandomGenerator>
#include <QDateTime>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_OkayButton_clicked()
{
    // start game when pushed ok
    checkGuess((ui->InputNumber->value()));
}


int resultnum = QRandomGenerator::global()->bounded(0,11); // Generates random number between 1-10

void Widget::checkGuess(int num){ // this func takes input and compare from result

    if(num == resultnum){

        ui->ResultLabel->setText(" Bravo!! Correct Guess!!");

    }
    else{
        ui->ResultLabel->setText(" OOPS!! Try Again!!");

    }

}


