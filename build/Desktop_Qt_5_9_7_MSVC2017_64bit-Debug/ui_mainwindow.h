/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *LblFirst;
    QLabel *LblSecond;
    QLineEdit *InputFirst;
    QLineEdit *InputSecond;
    QPushButton *BtnAdd;
    QPushButton *BtnMinus;
    QPushButton *BtnDivide;
    QPushButton *BtnMultiply;
    QLineEdit *InputFinal;
    QLabel *LblFinal;
    QPushButton *BtnDivide_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(268, 226);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        LblFirst = new QLabel(centralwidget);
        LblFirst->setObjectName(QStringLiteral("LblFirst"));
        LblFirst->setGeometry(QRect(30, 30, 91, 16));
        LblSecond = new QLabel(centralwidget);
        LblSecond->setObjectName(QStringLiteral("LblSecond"));
        LblSecond->setGeometry(QRect(30, 60, 91, 16));
        InputFirst = new QLineEdit(centralwidget);
        InputFirst->setObjectName(QStringLiteral("InputFirst"));
        InputFirst->setGeometry(QRect(130, 30, 101, 24));
        InputSecond = new QLineEdit(centralwidget);
        InputSecond->setObjectName(QStringLiteral("InputSecond"));
        InputSecond->setGeometry(QRect(130, 60, 101, 24));
        BtnAdd = new QPushButton(centralwidget);
        BtnAdd->setObjectName(QStringLiteral("BtnAdd"));
        BtnAdd->setGeometry(QRect(40, 100, 31, 24));
        BtnAdd->setMinimumSize(QSize(31, 24));
        BtnMinus = new QPushButton(centralwidget);
        BtnMinus->setObjectName(QStringLiteral("BtnMinus"));
        BtnMinus->setGeometry(QRect(80, 100, 31, 24));
        BtnMinus->setMinimumSize(QSize(31, 24));
        BtnDivide = new QPushButton(centralwidget);
        BtnDivide->setObjectName(QStringLiteral("BtnDivide"));
        BtnDivide->setGeometry(QRect(160, 100, 31, 24));
        BtnDivide->setMinimumSize(QSize(31, 24));
        BtnMultiply = new QPushButton(centralwidget);
        BtnMultiply->setObjectName(QStringLiteral("BtnMultiply"));
        BtnMultiply->setGeometry(QRect(120, 100, 31, 24));
        BtnMultiply->setMinimumSize(QSize(31, 24));
        InputFinal = new QLineEdit(centralwidget);
        InputFinal->setObjectName(QStringLiteral("InputFinal"));
        InputFinal->setGeometry(QRect(130, 150, 101, 24));
        InputFinal->setReadOnly(true);
        LblFinal = new QLabel(centralwidget);
        LblFinal->setObjectName(QStringLiteral("LblFinal"));
        LblFinal->setGeometry(QRect(30, 150, 91, 16));
        BtnDivide_2 = new QPushButton(centralwidget);
        BtnDivide_2->setObjectName(QStringLiteral("BtnDivide_2"));
        BtnDivide_2->setGeometry(QRect(200, 100, 31, 24));
        BtnDivide_2->setMinimumSize(QSize(31, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        LblFirst->setText(QApplication::translate("MainWindow", "First Number:", Q_NULLPTR));
        LblSecond->setText(QApplication::translate("MainWindow", "Second Number:", Q_NULLPTR));
        BtnAdd->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        BtnMinus->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        BtnDivide->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        BtnMultiply->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        LblFinal->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        BtnDivide_2->setText(QApplication::translate("MainWindow", "-/+", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
