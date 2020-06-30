#ifndef MAIN_H
#define MAIN_H

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
#include "mainwindow.h"
#include <unistd.h>

using namespace std;

class Pesanku{
    public:
    //definisi fungsi.
    Pesanku(){}
    ~Pesanku(){}
    void set_UDP_Server(int port, string address, string host,string pesan);
    void set_UDP_Client(int port, string address, string host,string pesan);
    void set_TCP_Server(Pesanku mypesan,int socket_sever);
    void set_TCP_Client(Pesanku mypesan,int socket_client,string Ip_tujuan);
    void kirim_server(int socket_server,char buffer[],Pesanku mypesan,string pesan);
    void kirim_client(int socket_server,char buffer[],Pesanku mypesan,string pesan);

//definisi varialel.
    struct mode{
        bool server,client;//kalau 1 berarti true
    };

    struct protokol{
        bool TCP,UDP;//kalau 1 berarti true
    };

    struct status_pilihan{
        bool connect,kirim;
    };

    string Ip_tujuan;
    string Status_koneksi;
    string pesan;
    string Status_pengiriman;
    int socket_client = 0, valread_client = 0,socket_server = 0,valread_server = 0;
    char buffer[1024] = {0};
};


#endif // MAIN_H
