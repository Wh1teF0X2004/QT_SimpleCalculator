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
int firstNum, secondNum, finalNum, previousNum = 0;

void MainWindow::on_BtnAdd_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();

    previousNum = finalNum;

    finalNum = firstNum + secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
    ui -> InputPrevious -> setText(QString::number(previousNum));
}


void MainWindow::on_BtnMinus_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();

    previousNum = finalNum;

    finalNum = firstNum - secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
    ui -> InputPrevious -> setText(QString::number(previousNum));
}


void MainWindow::on_BtnMultiply_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();

    previousNum = finalNum;

    finalNum = firstNum * secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
    ui -> InputPrevious -> setText(QString::number(previousNum));
}


void MainWindow::on_BtnDivide_clicked()
{
    firstNum = ui -> InputFirst -> text().toInt();
    secondNum = ui -> InputSecond -> text().toInt();

    previousNum = finalNum;

    finalNum = firstNum / secondNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
    ui -> InputPrevious -> setText(QString::number(previousNum));
}


void MainWindow::on_BtnDivide_2_clicked()
{
    // Check if finalNum has a valid number (not zero or empty)
    if (!finalNum) {
        // If finalNum is 0 or invalid, initialize it to 0
        finalNum = 0;
    }

    // Check if previousNum is zero or empty or not
    if (!previousNum) {
        // If previousNum is 0 or invalid, initialize it to 0
        previousNum = 0;
    } else {
        previousNum = finalNum;
    }

    finalNum = -finalNum;
    ui -> InputFinal -> setText(QString::number(finalNum));
    ui -> InputPrevious -> setText(QString::number(previousNum));
}


void MainWindow::on_BtnClear_clicked()
{
    firstNum = 0;
    secondNum = 0;
    finalNum = 0;
    previousNum = 0;

    // Clear the UI inputs and outputs
    ui->InputFirst->clear();
    ui->InputSecond->clear();
    ui->InputFinal->clear();
    ui->InputPrevious->clear();
}

