#include "demoapp.h"
#include "ui_demoapp.h"
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>

demoapp::demoapp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::demoapp)
{
    ui->setupUi(this);
}

demoapp::~demoapp()
{
    delete ui;
}

void demoapp::on_pushButton_2_clicked()
{
    QFile usbfile(".//logs//usblogs.txt");    /*write your file's path*/
    if(!usbfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",usbfile.errorString());
    QTextStream usbobj(&usbfile);
    ui->textBrowser->setText(usbobj.readAll());
}

void demoapp::on_pushButton_3_clicked()
{
    QFile wififile(".//logs//wifinetworklogs.txt");   /*write your file's path*/
    if(!wififile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",wififile.errorString());
    QTextStream wifiobj(&wififile);
    ui->textBrowser->setText(wifiobj.readAll());
}

void demoapp::on_pushButton_4_clicked()
{
    QFile lidfile(".//logs//lid.txt");   /*write your file's path*/
    if(!lidfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",lidfile.errorString());
    QTextStream lidobj(&lidfile);
    ui->textBrowser->setText(lidobj.readAll());
}

void demoapp::on_pushButton_clicked()
{
    QFile sudofile(".//logs//sudo_demo.txt");   /*write your file's path*/
    if(!sudofile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",sudofile.errorString());
    QTextStream sudoobj(&sudofile);
    ui->textBrowser->setText(sudoobj.readAll());
}

void demoapp::on_pushButton_5_clicked()
{
    QFile blfile(".//logs//bluetoothlogs.txt");   /*write your file's path*/
    if(!blfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",blfile.errorString());
    QTextStream blobj(&blfile);
    ui->textBrowser->setText(blobj.readAll());
}

void demoapp::on_pushButton_6_clicked()
{
    QFile syspfile(".//logs//syspower.txt");   /*write your file's path*/
    if(!syspfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",syspfile.errorString());
    QTextStream syspobj(&syspfile);
    ui->textBrowser->setText(syspobj.readAll());
}

void demoapp::on_pushButton_7_clicked()
{
    QFile sysupfile(".//logs//new_user_id.txt");   /*write your file's path*/
    if(!sysupfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",sysupfile.errorString());
    QTextStream sysupobj(&sysupfile);
    ui->textBrowser->setText(sysupobj.readAll());

}

void demoapp::on_pushButton_8_clicked()
{
    QFile eathfile(".//logs//eathernetactivationlogs.txt");   /*write your file's path*/
    if(!eathfile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",eathfile.errorString());
    QTextStream eathobj(&eathfile);
    ui->textBrowser->setText(eathobj.readAll());

}

void demoapp::on_pushButton_9_clicked()
{
    QFile apafile(".//logs//apache2serverlogs.txt");   /*write your file's path*/
    if(!apafile.open(QIODevice::ReadOnly))
            QMessageBox::information(0,"info",apafile.errorString());
    QTextStream apaobj(&apafile);
    ui->textBrowser->setText(apaobj.readAll());
}


