/********************************************************************************
** Form generated from reading UI file 'Projekt3.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKT3_H
#define UI_PROJEKT3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Projekt3Class
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Projekt3Class)
    {
        if (Projekt3Class->objectName().isEmpty())
            Projekt3Class->setObjectName(QStringLiteral("Projekt3Class"));
        Projekt3Class->setEnabled(true);
        Projekt3Class->resize(954, 454);
        centralWidget = new QWidget(Projekt3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 111, 41));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(170, 60, 256, 311));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setEnabled(false);
        listWidget_2->setGeometry(QRect(440, 90, 231, 241));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(710, 240, 111, 41));
        pushButton_2->setCheckable(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(600, 30, 171, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 10, 241, 31));
        label_2->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 120, 111, 41));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 180, 111, 41));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(710, 290, 111, 41));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 330, 111, 41));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(false);
        graphicsView->setGeometry(QRect(690, 100, 151, 131));
        Projekt3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Projekt3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 954, 21));
        Projekt3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Projekt3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Projekt3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Projekt3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Projekt3Class->setStatusBar(statusBar);

        retranslateUi(Projekt3Class);
        QObject::connect(pushButton, SIGNAL(clicked()), Projekt3Class, SLOT(dodajOkno2()));
        QObject::connect(listWidget, SIGNAL(itemPressed(QListWidgetItem*)), Projekt3Class, SLOT(wyswietlInfo()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), Projekt3Class, SLOT(usun()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), Projekt3Class, SLOT(zapiszDoPliku()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), Projekt3Class, SLOT(wczytajPlik()));
        QObject::connect(listWidget, SIGNAL(itemPressed(QListWidgetItem*)), Projekt3Class, SLOT(wyswietlObrazek()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Projekt3Class, SLOT(close()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), Projekt3Class, SLOT(edytuj()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), Projekt3Class, SLOT(wyjscie()));

        QMetaObject::connectSlotsByName(Projekt3Class);
    } // setupUi

    void retranslateUi(QMainWindow *Projekt3Class)
    {
        Projekt3Class->setWindowTitle(QApplication::translate("Projekt3Class", "Projekt3", nullptr));
        pushButton->setText(QApplication::translate("Projekt3Class", "Dodaj obiekt", nullptr));
        pushButton_2->setText(QApplication::translate("Projekt3Class", "Usu\305\204", nullptr));
        label->setText(QApplication::translate("Projekt3Class", "Dane obiektu", nullptr));
        label_2->setText(QApplication::translate("Projekt3Class", "Lista obiekt\303\263w", nullptr));
        pushButton_3->setText(QApplication::translate("Projekt3Class", "Zapisz", nullptr));
        pushButton_4->setText(QApplication::translate("Projekt3Class", "Wczytaj", nullptr));
        pushButton_5->setText(QApplication::translate("Projekt3Class", "Edytuj", nullptr));
        pushButton_6->setText(QApplication::translate("Projekt3Class", "Wyjscie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Projekt3Class: public Ui_Projekt3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKT3_H
