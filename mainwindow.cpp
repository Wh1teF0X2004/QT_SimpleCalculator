#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Decalre Variables
int firstNum, secondNum, finalNum;

void MainWindow::on_BtnAdd_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();
    finalNum = firstNum + secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
}


void MainWindow::on_BtnMinus_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();
    finalNum = firstNum - secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
}


void MainWindow::on_BtnMultiply_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();
    finalNum = firstNum * secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
}


void MainWindow::on_BtnDivide_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();
    finalNum = firstNum / secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
}


void MainWindow::on_BtnDivide_2_clicked()
{
    // Check if finalNum has a valid number (not zero or empty)
    if (!finalNum) {
        // If finalNum is 0 or invalid, initialize it to 0
        finalNum = 0;
    }
    finalNum = -finalNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
}

