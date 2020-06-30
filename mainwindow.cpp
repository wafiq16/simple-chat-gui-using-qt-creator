#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Connect_clicked()
{
    ::close(sock_client);
    ::close(socket_server);
    ::close(sockfd);
    ::close(socket_client);
    time_t now = time(0);
    dt = ctime(&now);
    ui->Waktu_pengiriman->setPlainText(QString::fromStdString(dt));

    Qpesan_terkirim = ui->Pesan_terkirim->toPlainText();
    Pesan_terkirim = Qpesan_terkirim.toUtf8().constData();

    myflag.connect = true;

    if(myProtokol.TCP){
        if(myPilihan.client){
            set_TCP_Client();
        }
        else if(myPilihan.server){
            set_TCP_Server();
        }
    }
    else if(myProtokol.UDP){
        if(myPilihan.client){
            set_UDP_Client();
        }
        else if(myPilihan.server){
            set_UDP_Server();
        }
    }

    ui->Status_koneksi->setPlainText(QString::fromStdString(Status_koneksi));
    ui->Pesan_diterima->setPlainText(QString::fromStdString(buffer));
}

void MainWindow::on_Kirim_clicked()
{
    time_t now = time(0);
    dt = ctime(&now);
    ui->Waktu_pengiriman->setPlainText(QString::fromStdString(dt));

    Qpesan_terkirim = ui->Pesan_terkirim->toPlainText();
    Pesan_terkirim = Qpesan_terkirim.toUtf8().constData();

    if(myPilihan.client){
        kirim_client();
        ui->Status_pengiriman->setPlainText(QString::fromStdString(Pesan_terkirim));
        ui->Pesan_diterima->setPlainText(QString::fromStdString(buffer));
    }
    else if(myPilihan.server){
        kirim_server();
        ui->Status_pengiriman->setPlainText(QString::fromStdString(Pesan_terkirim));
        ui->Pesan_diterima->setPlainText(QString::fromStdString(buffer));
    }
    myflag.kirim = true;

}

void MainWindow::on_Isi_pesan_textChanged()
{

}

void MainWindow::on_Pesan_diterima_textChanged()
{

}

void MainWindow::on_IP_tujuan_textChanged()
{
    Qip_tujuan = ui->IP_tujuan->toPlainText();
    Ip_tujuan = Qip_tujuan.toUtf8().constData();
}

void MainWindow::on_Tcp_clicked()
{
     myProtokol.TCP = true;
     myProtokol.UDP = false;
}

void MainWindow::on_Udp_clicked()
{
    myProtokol.TCP = false;
    myProtokol.UDP = true;
}

void MainWindow::on_Server_clicked()
{
    myPilihan.server = true;
    myPilihan.client = false;
}

void MainWindow::on_Client_clicked()
{
    myPilihan.server = false;
    myPilihan.client = true;

}

void MainWindow :: kirim_server(){
    if(myProtokol.TCP){
        try{
        const char *Koneksi = Pesan_terkirim.c_str();
    //    flush();
        send(socket_server , Koneksi , strlen(Koneksi) , 0 );
        valread_server = read( socket_server , buffer, 2048);
        Status_pengiriman = buffer;
//        ::close(socket_server);
        }
        catch(string Status_pengiriman){
            Status_pengiriman = "sending eror";// + string(valread_client);
        }
    }
    else if(myProtokol.UDP){
        const char *Koneksi = Pesan_terkirim.c_str();

        n = recvfrom(sockfd, (char *)buffer, MAXLINE,
            MSG_WAITALL, ( struct sockaddr *) &cliaddr,
            &len);

        buffer[n] = '\0';
        Status_pengiriman += "Client : " + string(buffer);
        sendto(sockfd, Koneksi, strlen(Koneksi),
            MSG_CONFIRM, (const struct sockaddr *) &cliaddr,
                len);
        Status_pengiriman += Pesan_terkirim;
        ::close(sockfd);
    }
}
void MainWindow ::kirim_client(){
    if(myProtokol.TCP){
        try{
            const char *Koneksi = Pesan_terkirim.c_str();
            send(socket_client , Koneksi , strlen(Koneksi) , 0 );
            valread_server = read( socket_server , buffer, 2048);
            Status_pengiriman = buffer;
//            ::close(socket_client);
        }
        catch(string Status_pengiriman){
            Status_pengiriman = "sending eror";// + string(valread_client);
        }
    }
    else if(myProtokol.UDP){
        const char *Koneksi = Pesan_terkirim.c_str();

        sendto(sock_client, Koneksi, strlen(Koneksi),
            MSG_CONFIRM, (const struct sockaddr *) &servaddr,
                sizeof(servaddr));
        Status_pengiriman += Pesan_terkirim;

        n = recvfrom(sock_client, (char *)buffer, MAXLINE,
                    MSG_WAITALL, (struct sockaddr *) &servaddr,
                    &len);

        buffer[n] = '\0';
        Status_pengiriman += "Server" + string(buffer);

        ::close(sockfd);
    }
}

void MainWindow :: set_TCP_Server(){
    int server_fd;
//    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    Status_koneksi = "TCP server started";
    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
//        perror("socket failed");
//        exit(EXIT_FAILURE);
        Status_koneksi += " socket failed";
    }
    else{
        Status_koneksi += " socket sukses";
    }

    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                                                  &opt, sizeof(opt)))
    {
//        perror("setsockopt");
//        exit(EXIT_FAILURE);
        Status_koneksi += " setsockopt eror";
    }
    else{
        Status_koneksi += " setsockopt sukses";
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );

    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address,
                                 sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
        Status_koneksi += " bind failed";
    }
    else{
        Status_koneksi += " bind sukses";
    }
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
        Status_koneksi += " listen error";
    }
    else{
        Status_koneksi += " listen sukses";
    }
    if ((socket_server = accept(server_fd, (struct sockaddr *)&address,
                       (socklen_t*)&addrlen))<0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
        Status_koneksi += " accept error";
    }
    else{
        Status_koneksi += " accept sukses";
    }
}

void MainWindow :: set_TCP_Client(){
//    struct sockaddr_in serv_addr;
    if ((socket_client = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        Status_koneksi += " socket error";
    }
    else{
        Status_koneksi += " socket sukses";
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    const char * tujuanku = Ip_tujuan.c_str();

    // Convert IPv4 and IPv6 addresses from text to binary form
    if(inet_pton(AF_INET, tujuanku, &serv_addr.sin_addr)<=0)
    {
        printf("\nInvalid address/ Address not supported \n");
        Status_koneksi += " address eror";

    }
    else{
        Status_koneksi += " address sukses";
    }

    if (::connect(socket_client, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        Status_koneksi += " koneksi TCP client gagal";
    }
    else{
        Status_koneksi += " koneksi TCP client sukses";
    }
}

void MainWindow :: set_UDP_Server(){

    // Creating socket file descriptor
    if ( (sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        Status_koneksi += "socket creation failed";
        exit(EXIT_FAILURE);
    }
    else{
        Status_koneksi += "socket berhasil dibuat";
    }

    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));

    // Filling server information
    servaddr.sin_family    = AF_INET; // IPv4
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);

    // Bind the socket with the server address
    if ( bind(sockfd, (const struct sockaddr *)&servaddr,
            sizeof(servaddr)) < 0 )
    {
        Status_koneksi += "bind failed";
        exit(EXIT_FAILURE);
    }
    else
    {
        Status_koneksi += "bind success";
    }


    len = sizeof(cliaddr);  //len is value/resuslt

}

void MainWindow :: set_UDP_Client(){

    // Creating socket file descriptor
    if ( (sock_client = socket(AF_INET, SOCK_DGRAM, 0)) < 0 ) {
        Status_koneksi += "socket creation failed";
        exit(EXIT_FAILURE);
    }
    else{
        Status_koneksi += "socket berhasil dibuat";
    }

    memset(&servaddr, 0, sizeof(servaddr));

    // Filling server information
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = INADDR_ANY;
}

