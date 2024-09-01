/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_pic_9;
    QFrame *line_4;
    QLabel *label_pic_7;
    QFrame *line_6;
    QLabel *label_pic_6;
    QFrame *line_3;
    QFrame *line_9;
    QLabel *label_pic_3;
    QFrame *line_2;
    QFrame *line_10;
    QLabel *label_pic_4;
    QFrame *line_5;
    QFrame *line_12;
    QFrame *line;
    QLabel *label_pic_5;
    QLabel *label_pic_1;
    QLabel *label_pic_8;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_11;
    QLabel *label_pic_2;
    QPushButton *pushButton_newGame;
    QPushButton *pushButton_newRound;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_playerA;
    QLabel *label;
    QLineEdit *lineEdit_playerB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pointA;
    QLabel *label_pointB;
    QLabel *label_pic_x;
    QLabel *label_pic_o;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_turn;
    QLabel *label_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QMenuBar *menubar;
    QMenu *menuAbout;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rec/img/about.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbout->setIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(340, 40, 441, 372));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_pic_9 = new QLabel(layoutWidget);
        label_pic_9->setObjectName("label_pic_9");
        label_pic_9->setMaximumSize(QSize(100, 100));
        label_pic_9->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_9, 4, 4, 1, 1);

        line_4 = new QFrame(layoutWidget);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_4, 0, 1, 1, 1);

        label_pic_7 = new QLabel(layoutWidget);
        label_pic_7->setObjectName("label_pic_7");
        label_pic_7->setMaximumSize(QSize(100, 100));
        label_pic_7->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_7, 4, 0, 1, 1);

        line_6 = new QFrame(layoutWidget);
        line_6->setObjectName("line_6");
        line_6->setSizeIncrement(QSize(0, 0));
        line_6->setFrameShape(QFrame::Shape::HLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_6, 3, 4, 1, 1);

        label_pic_6 = new QLabel(layoutWidget);
        label_pic_6->setObjectName("label_pic_6");
        label_pic_6->setMaximumSize(QSize(100, 100));
        label_pic_6->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_6, 2, 4, 1, 1);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_3, 1, 4, 1, 1);

        line_9 = new QFrame(layoutWidget);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_9, 2, 3, 1, 1);

        label_pic_3 = new QLabel(layoutWidget);
        label_pic_3->setObjectName("label_pic_3");
        label_pic_3->setMaximumSize(QSize(100, 100));
        label_pic_3->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_3, 0, 4, 1, 1);

        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_2, 1, 0, 1, 1);

        line_10 = new QFrame(layoutWidget);
        line_10->setObjectName("line_10");
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_10, 4, 3, 1, 1);

        label_pic_4 = new QLabel(layoutWidget);
        label_pic_4->setObjectName("label_pic_4");
        label_pic_4->setMaximumSize(QSize(100, 100));
        label_pic_4->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_4, 2, 0, 1, 1);

        line_5 = new QFrame(layoutWidget);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_5, 4, 1, 1, 1);

        line_12 = new QFrame(layoutWidget);
        line_12->setObjectName("line_12");
        line_12->setFrameShape(QFrame::Shape::HLine);
        line_12->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_12, 3, 2, 1, 1);

        line = new QFrame(layoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 2, 1, 1);

        label_pic_5 = new QLabel(layoutWidget);
        label_pic_5->setObjectName("label_pic_5");
        label_pic_5->setMaximumSize(QSize(100, 100));
        label_pic_5->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_5, 2, 2, 1, 1);

        label_pic_1 = new QLabel(layoutWidget);
        label_pic_1->setObjectName("label_pic_1");
        label_pic_1->setMaximumSize(QSize(100, 100));
        label_pic_1->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_1, 0, 0, 1, 1);

        label_pic_8 = new QLabel(layoutWidget);
        label_pic_8->setObjectName("label_pic_8");
        label_pic_8->setMaximumSize(QSize(100, 100));
        label_pic_8->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_pic_8, 4, 2, 1, 1);

        line_7 = new QFrame(layoutWidget);
        line_7->setObjectName("line_7");
        line_7->setFrameShape(QFrame::Shape::VLine);
        line_7->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_7, 2, 1, 1, 1);

        line_8 = new QFrame(layoutWidget);
        line_8->setObjectName("line_8");
        line_8->setFrameShape(QFrame::Shape::VLine);
        line_8->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_8, 0, 3, 1, 1);

        line_11 = new QFrame(layoutWidget);
        line_11->setObjectName("line_11");
        line_11->setFrameShape(QFrame::Shape::HLine);
        line_11->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line_11, 3, 0, 1, 1);

        label_pic_2 = new QLabel(layoutWidget);
        label_pic_2->setObjectName("label_pic_2");
        label_pic_2->setMaximumSize(QSize(100, 100));
        label_pic_2->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_2->setAlignment(Qt::AlignCenter);
        label_pic_2->setWordWrap(false);

        gridLayout->addWidget(label_pic_2, 0, 2, 1, 1);

        pushButton_newGame = new QPushButton(centralwidget);
        pushButton_newGame->setObjectName("pushButton_newGame");
        pushButton_newGame->setGeometry(QRect(410, 430, 83, 29));
        pushButton_newRound = new QPushButton(centralwidget);
        pushButton_newRound->setObjectName("pushButton_newRound");
        pushButton_newRound->setGeometry(QRect(580, 430, 83, 29));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(179, 559, 111, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(340, 460, 111, 81));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(51, 52, 247, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit_playerA = new QLineEdit(widget);
        lineEdit_playerA->setObjectName("lineEdit_playerA");

        horizontalLayout_2->addWidget(lineEdit_playerA);

        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit_playerB = new QLineEdit(widget);
        lineEdit_playerB->setObjectName("lineEdit_playerB");

        horizontalLayout_2->addWidget(lineEdit_playerB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_pointA = new QLabel(widget);
        label_pointA->setObjectName("label_pointA");
        label_pointA->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_pointA);

        label_pointB = new QLabel(widget);
        label_pointB->setObjectName("label_pointB");
        label_pointB->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_pointB);


        verticalLayout->addLayout(horizontalLayout_3);

        label_pic_x = new QLabel(centralwidget);
        label_pic_x->setObjectName("label_pic_x");
        label_pic_x->setGeometry(QRect(73, 120, 100, 100));
        label_pic_x->setMaximumSize(QSize(100, 100));
        label_pic_x->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/images.png")));
        label_pic_o = new QLabel(centralwidget);
        label_pic_o->setObjectName("label_pic_o");
        label_pic_o->setGeometry(QRect(180, 120, 100, 100));
        label_pic_o->setMaximumSize(QSize(100, 100));
        label_pic_o->setLineWidth(5);
        label_pic_o->setPixmap(QPixmap(QString::fromUtf8(":/rec/img/download.png")));
        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 250, 281, 241));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_turn = new QLabel(widget1);
        label_turn->setObjectName("label_turn");
        label_turn->setLayoutDirection(Qt::LeftToRight);
        label_turn->setTextFormat(Qt::AutoText);
        label_turn->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_turn);

        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 2);

        pushButton_1 = new QPushButton(widget1);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout_2->addWidget(pushButton_1, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout_2->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(widget1);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout_2->addWidget(pushButton_4, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(widget1);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout_2->addWidget(pushButton_5, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(widget1);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout_2->addWidget(pushButton_6, 3, 1, 1, 1);

        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout_2->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout_2->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(widget1);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(pushButton_9, 5, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        toolBar->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label_pic_9->setText(QString());
        label_pic_7->setText(QString());
        label_pic_6->setText(QString());
        label_pic_3->setText(QString());
        label_pic_4->setText(QString());
        label_pic_5->setText(QString());
        label_pic_1->setText(QString());
        label_pic_8->setText(QString());
        label_pic_2->setText(QString());
        pushButton_newGame->setText(QCoreApplication::translate("MainWindow", "New Game", nullptr));
        pushButton_newRound->setText(QCoreApplication::translate("MainWindow", "New Round", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
        lineEdit_playerA->setText(QCoreApplication::translate("MainWindow", "Player A", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "VS", nullptr));
        lineEdit_playerB->setText(QCoreApplication::translate("MainWindow", "Player B", nullptr));
        label_pointA->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_pointB->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_pic_x->setText(QString());
        label_pic_o->setText(QString());
        label_turn->setText(QCoreApplication::translate("MainWindow", "Turn: ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Choose a Number", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
