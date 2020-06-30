#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <chrono>
#include <ctime>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>

#define PORT 8080
#define MAXLINE 1024

using namespace std;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    //function
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //definisi fungsi.
    void set_UDP_Server();
    void set_UDP_Client();
    void set_TCP_Server();
    void set_TCP_Client();
    void kirim_server();
    void kirim_client();

    //definisi variabel

    struct protokol{
        bool TCP,UDP;//kalau 1 berarti true
    }myProtokol;

    struct status_pilihan{
        bool client,server;
    }myPilihan;

    string Ip_tujuan;
    string Status_koneksi;
    string Pesan_terkirim,Pesan_diterima;
    string Status_pengiriman;

    int sockfd;
    int sock_client;
    struct sockaddr_in servaddr, cliaddr,address,serv_addr;

    int socket_client = 0, valread_client = 0,socket_server = 0,valread_server = 0;
    char buffer[1024] = {0};

    //variable

    struct flag{
        bool connect,kirim;
    }myflag;

    QString Qpesan_terkirim,Qip_tujuan,Qpesan_diterima;

    string wafiq,wafiq1;

    char* dt;

    int n;
    socklen_t len;

public slots:
    void on_Connect_clicked();

    void on_Kirim_clicked();

    void on_Isi_pesan_textChanged();

    void on_IP_tujuan_textChanged();

    void on_Tcp_clicked();

    void on_Udp_clicked();

    void on_Server_clicked();

    void on_Client_clicked();

    void on_Pesan_diterima_textChanged();

private :
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H


