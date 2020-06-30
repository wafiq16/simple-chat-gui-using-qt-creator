/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QRadioButton *Tcp;
    QRadioButton *Udp;
    QTextEdit *Pesan_terkirim;
    QTextEdit *textEdit;
    QPlainTextEdit *plainTextEdit_2;
    QPushButton *Kirim;
    QPlainTextEdit *plainTextEdit_3;
    QPlainTextEdit *plainTextEdit_5;
    QTextEdit *IP_tujuan;
    QPushButton *Connect;
    QPlainTextEdit *plainTextEdit_4;
    QTextEdit *Status_koneksi;
    QRadioButton *Server;
    QRadioButton *Client;
    QPlainTextEdit *plainTextEdit_6;
    QTextEdit *Waktu_pengiriman;
    QTextEdit *Status_pengiriman;
    QTextEdit *textEdit_2;
    QTextEdit *Pesan_diterima;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(394, 509);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Tcp = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(Tcp);
        Tcp->setObjectName(QString::fromUtf8("Tcp"));
        Tcp->setGeometry(QRect(20, 210, 71, 22));
        Udp = new QRadioButton(centralWidget);
        buttonGroup->addButton(Udp);
        Udp->setObjectName(QString::fromUtf8("Udp"));
        Udp->setGeometry(QRect(90, 210, 71, 22));
        Pesan_terkirim = new QTextEdit(centralWidget);
        Pesan_terkirim->setObjectName(QString::fromUtf8("Pesan_terkirim"));
        Pesan_terkirim->setGeometry(QRect(20, 44, 161, 101));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 0, 161, 31));
        plainTextEdit_2 = new QPlainTextEdit(centralWidget);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(20, 170, 161, 31));
        plainTextEdit_2->setReadOnly(true);
        Kirim = new QPushButton(centralWidget);
        Kirim->setObjectName(QString::fromUtf8("Kirim"));
        Kirim->setGeometry(QRect(140, 420, 99, 27));
        plainTextEdit_3 = new QPlainTextEdit(centralWidget);
        plainTextEdit_3->setObjectName(QString::fromUtf8("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(20, 240, 151, 31));
        plainTextEdit_3->setReadOnly(true);
        plainTextEdit_5 = new QPlainTextEdit(centralWidget);
        plainTextEdit_5->setObjectName(QString::fromUtf8("plainTextEdit_5"));
        plainTextEdit_5->setGeometry(QRect(20, 320, 81, 31));
        plainTextEdit_5->setReadOnly(true);
        IP_tujuan = new QTextEdit(centralWidget);
        IP_tujuan->setObjectName(QString::fromUtf8("IP_tujuan"));
        IP_tujuan->setGeometry(QRect(120, 320, 261, 31));
        Connect = new QPushButton(centralWidget);
        Connect->setObjectName(QString::fromUtf8("Connect"));
        Connect->setGeometry(QRect(20, 420, 99, 27));
        plainTextEdit_4 = new QPlainTextEdit(centralWidget);
        plainTextEdit_4->setObjectName(QString::fromUtf8("plainTextEdit_4"));
        plainTextEdit_4->setGeometry(QRect(20, 360, 131, 31));
        plainTextEdit_4->setReadOnly(true);
        Status_koneksi = new QTextEdit(centralWidget);
        Status_koneksi->setObjectName(QString::fromUtf8("Status_koneksi"));
        Status_koneksi->setGeometry(QRect(160, 360, 221, 51));
        Server = new QRadioButton(centralWidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(Server);
        Server->setObjectName(QString::fromUtf8("Server"));
        Server->setGeometry(QRect(200, 210, 81, 22));
        Client = new QRadioButton(centralWidget);
        buttonGroup_2->addButton(Client);
        Client->setObjectName(QString::fromUtf8("Client"));
        Client->setGeometry(QRect(290, 210, 91, 22));
        plainTextEdit_6 = new QPlainTextEdit(centralWidget);
        plainTextEdit_6->setObjectName(QString::fromUtf8("plainTextEdit_6"));
        plainTextEdit_6->setGeometry(QRect(200, 170, 171, 31));
        plainTextEdit_6->setReadOnly(true);
        Waktu_pengiriman = new QTextEdit(centralWidget);
        Waktu_pengiriman->setObjectName(QString::fromUtf8("Waktu_pengiriman"));
        Waktu_pengiriman->setGeometry(QRect(20, 280, 361, 31));
        Status_pengiriman = new QTextEdit(centralWidget);
        Status_pengiriman->setObjectName(QString::fromUtf8("Status_pengiriman"));
        Status_pengiriman->setGeometry(QRect(250, 420, 131, 31));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(220, 0, 161, 31));
        Pesan_diterima = new QTextEdit(centralWidget);
        Pesan_diterima->setObjectName(QString::fromUtf8("Pesan_diterima"));
        Pesan_diterima->setGeometry(QRect(220, 40, 161, 101));
        MainWindow->setCentralWidget(centralWidget);
        Tcp->raise();
        Udp->raise();
        textEdit->raise();
        plainTextEdit_2->raise();
        Kirim->raise();
        plainTextEdit_3->raise();
        plainTextEdit_5->raise();
        IP_tujuan->raise();
        Connect->raise();
        plainTextEdit_4->raise();
        Status_koneksi->raise();
        Server->raise();
        Client->raise();
        plainTextEdit_6->raise();
        Waktu_pengiriman->raise();
        Status_pengiriman->raise();
        Pesan_terkirim->raise();
        textEdit_2->raise();
        Pesan_diterima->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 394, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        Tcp->setText(QApplication::translate("MainWindow", "TCP", 0, QApplication::UnicodeUTF8));
        Udp->setText(QApplication::translate("MainWindow", "UDP", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Masukkan pesan :</p></body></html>", 0, QApplication::UnicodeUTF8));
        plainTextEdit_2->setPlainText(QApplication::translate("MainWindow", "Pilih protokol :", 0, QApplication::UnicodeUTF8));
        Kirim->setText(QApplication::translate("MainWindow", "Kirim", 0, QApplication::UnicodeUTF8));
        plainTextEdit_3->setPlainText(QApplication::translate("MainWindow", "Waktu pengiriman", 0, QApplication::UnicodeUTF8));
        plainTextEdit_5->setPlainText(QApplication::translate("MainWindow", "IP tujuan :", 0, QApplication::UnicodeUTF8));
        Connect->setText(QApplication::translate("MainWindow", "connect", 0, QApplication::UnicodeUTF8));
        plainTextEdit_4->setPlainText(QApplication::translate("MainWindow", "Status koneksi :", 0, QApplication::UnicodeUTF8));
        Server->setText(QApplication::translate("MainWindow", "Server", 0, QApplication::UnicodeUTF8));
        Client->setText(QApplication::translate("MainWindow", "Client", 0, QApplication::UnicodeUTF8));
        plainTextEdit_6->setPlainText(QApplication::translate("MainWindow", "Pilih mode :", 0, QApplication::UnicodeUTF8));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Pesan diterima :</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
