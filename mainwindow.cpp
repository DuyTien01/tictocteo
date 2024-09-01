#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <cmath>
#include "secdialog.h"
#include <algorithm>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label_pic_1->setText("1");
    ui->label_pic_2->setText("2");
    ui->label_pic_3->setText("3");
    ui->label_pic_4->setText("4");
    ui->label_pic_5->setText("5");
    ui->label_pic_6->setText("6");
    ui->label_pic_7->setText("7");
    ui->label_pic_8->setText("8");
    ui->label_pic_9->setText("9");


    // ui->label_2->setText("Button 1");
    ui->label_turn->setText("Turn: X");

    // Căn lề Center cho Turn
    // Căn lề Center cho lineEdit_playA, lineEdit_playerB
    ui->label_turn->setAlignment(Qt::AlignHCenter);
    ui->lineEdit_playerA->setAlignment(Qt::AlignHCenter);
    ui->lineEdit_playerB->setAlignment(Qt::AlignHCenter);
    ui->label_pointA->setAlignment(Qt::AlignHCenter);
    ui->label_pointB->setAlignment(Qt::AlignHCenter);

    // Kiem tra anh da nap vao chua
    // Hiển thị 2 ảnh X O của 2 Player
    pix_x = QPixmap(":/rec/img/images.png");
    pix_o = QPixmap(":/rec/img/download.png");
    // int w = ui->label_pic_x->width();
    // int h = ui->label_pic_o->height();

    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        ui->label_pic_x->setPixmap(pix_x.scaled(ui->label_pic_x->size(), Qt::KeepAspectRatio));
        ui->label_pic_o->setPixmap(pix_o.scaled(ui->label_pic_o->size(), Qt::KeepAspectRatio));
    }

    // Khởi tạo các button và thêm vào buttonMap
    buttonMap[1] = ui->pushButton_1;
    buttonMap[2] = ui->pushButton_2;
    buttonMap[3] = ui->pushButton_3;
    buttonMap[4] = ui->pushButton_4;
    buttonMap[5] = ui->pushButton_5;
    buttonMap[6] = ui->pushButton_6;
    buttonMap[7] = ui->pushButton_7;
    buttonMap[8] = ui->pushButton_8;
    buttonMap[9] = ui->pushButton_9;
}

MainWindow::~MainWindow()
{
    delete ui;
}

int sumArrCount = 0;


int pointA = 0, pointB = 0;

// Tính lượt đánh
// "1" là lượt đánh X
// "0" là lượt đánh O
int count = 0;

// Khởi tạo ban đầu all value = 0
// value = 1 đại diện cho A
// value = 2 đại diện cho B
int arrCount[10] = {0};


void MainWindow::displayTurn(){

    // In ra lượt đánh hiện tại
    if(count == 1) {
        --count;
        ui->label_turn->setText("Turn: X");
    } else {
        ui->label_turn->setText("Turn: O");
        count = 1;
    }
    // Kiểm tra điều kiện A Win
    if(check() == 1) {
        ++pointA;
        QMessageBox::information(this, "Condition Met", "Player A Winner");
        on_pushButton_newGame_clicked();
    }
    // Kiểm tra Player B Win
    else if(check() == 2) {
        ++pointB;
        QMessageBox::information(this, "Condition Met", "Player B Winner");
        on_pushButton_newGame_clicked();
    }
    // Kiểm tra tỉ số hoà
    else if(check() == 3) {
        QMessageBox::information(this, "Condition Met", "Draw");
        on_pushButton_newGame_clicked();
    }

    // In ra tỉ số
    ui->label_pointA->setText(QString::number(pointA));
    ui->label_pointB->setText(QString::number(pointB));
}

void MainWindow::on_pushButton_1_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    // Set kich thuoc
    else {
        if(count == 0) {
            ui->label_pic_1->setPixmap(pix_x.scaled(ui->label_pic_1->size(), Qt::KeepAspectRatio));
            arrCount[1] = 1;
        } else {
            ui->label_pic_1->setPixmap(pix_o.scaled(ui->label_pic_1->size(), Qt::KeepAspectRatio));
            arrCount[1] = 2;
        }
        ++sumArrCount;
    }

    for(int i = 1 ; i < 10; i++){
        std :: cout << arrCount[i] << " ";
    }

    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_2_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    // Set kich thuoc
    else {
        if(count == 0) {
            ui->label_pic_2->setPixmap(pix_x.scaled(ui->label_pic_2->size(), Qt::KeepAspectRatio));
            arrCount[2] = 1;
        } else {
            ui->label_pic_2->setPixmap(pix_o.scaled(ui->label_pic_2->size(), Qt::KeepAspectRatio));
            arrCount[2] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_3_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    // Set kich thuoc
    else {
        if(count == 0) {
            ui->label_pic_3->setPixmap(pix_x.scaled(ui->label_pic_3->size(), Qt::KeepAspectRatio));
            ui->label_2->setText("Button 1");
            arrCount[3] = 1;
        } else {
            ui->label_pic_3->setPixmap(pix_o.scaled(ui->label_pic_3->size(), Qt::KeepAspectRatio));
            ui->label_2->setText("Button 1");
            arrCount[3] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_4_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        if(count == 0) {
            ui->label_pic_4->setPixmap(pix_x.scaled(ui->label_pic_4->size(), Qt::KeepAspectRatio));
            arrCount[4] = 1;
        } else {
            ui->label_pic_4->setPixmap(pix_o.scaled(ui->label_pic_4->size(), Qt::KeepAspectRatio));
            arrCount[4] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_5_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        if(count == 0) {
            ui->label_pic_5->setPixmap(pix_x.scaled(ui->label_pic_5->size(), Qt::KeepAspectRatio));
            arrCount[5] = 1;
        } else {
            ui->label_pic_5->setPixmap(pix_o.scaled(ui->label_pic_5->size(), Qt::KeepAspectRatio));
            arrCount[5] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_6_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        if(count == 0) {
            ui->label_pic_6->setPixmap(pix_x.scaled(ui->label_pic_6->size(), Qt::KeepAspectRatio));
            arrCount[6] = 1;
        } else {
            ui->label_pic_6->setPixmap(pix_o.scaled(ui->label_pic_6->size(), Qt::KeepAspectRatio));
            arrCount[6] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_7_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        // ui->label_int->setText(QString::number(pointA));
        if(count == 0) {
            ui->label_pic_7->setPixmap(pix_x.scaled(ui->label_pic_7->size(), Qt::KeepAspectRatio));
            arrCount[7] = 1;
        } else {
            ui->label_pic_7->setPixmap(pix_o.scaled(ui->label_pic_7->size(), Qt::KeepAspectRatio));
            arrCount[7] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
    // check();
}


void MainWindow::on_pushButton_8_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        if(count == 0) {
            ui->label_pic_8->setPixmap(pix_x.scaled(ui->label_pic_8->size(), Qt::KeepAspectRatio));
            arrCount[8] = 1;
        } else {
            ui->label_pic_8->setPixmap(pix_o.scaled(ui->label_pic_8->size(), Qt::KeepAspectRatio));
            arrCount[8] = 2;
        }
        ++sumArrCount;
    }
    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}


void MainWindow::on_pushButton_9_clicked()
{
    // Kiem tra anh da nap vao chua
    if (pix_x.isNull() && pix_o.isNull()) {
        QMessageBox::warning(this, "Image Load Error", "Failed to load image!");
    }
    else {
        if(count == 0) {
            ui->label_pic_9->setPixmap(pix_x.scaled(ui->label_pic_9->size(), Qt::KeepAspectRatio));
            arrCount[9] = 1;
        } else {
            ui->label_pic_9->setPixmap(pix_o.scaled(ui->label_pic_9->size(), Qt::KeepAspectRatio));
            arrCount[9] = 2;
        }
        ++sumArrCount;
    }

    // Ẩn nút sau khi bấm
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (button) {
        button->hide();
    }
    displayTurn();
}

int MainWindow::check(){

    // Kiểm tra điều kiện xem Player A có Win ko
    // Nếu có trả về "1"
    if(arrCount[1] == 1 && arrCount[2] == 1 && arrCount[3] == 1 || arrCount[4] == 1 && arrCount[5] == 1 && arrCount[6] == 1 || arrCount[7] == 1 && arrCount[8] == 1 && arrCount[9] == 1
        || arrCount[1] == 1 && arrCount[4] == 1 && arrCount[7] == 1 || arrCount[2] == 1 && arrCount[5] == 1 && arrCount[8] == 1 || arrCount[3] == 1 && arrCount[6] == 1 && arrCount[9] == 1
        || arrCount[1] == 1 && arrCount[5] == 1 && arrCount[9] == 1 || arrCount[3] == 1 && arrCount[5] == 1 && arrCount[7] == 1){

        return 1;
    }
    // Kiểm tra điều kiện xem Player B có Win ko
    // Nếu có trả về "2"
    else if(arrCount[1] == 2 && arrCount[2] == 2 && arrCount[3] == 2 || arrCount[4] == 2 && arrCount[5] == 2 && arrCount[6] == 2 || arrCount[7] == 2 && arrCount[8] == 2 && arrCount[9] == 2
        || arrCount[1] == 2 && arrCount[4] == 2 && arrCount[7] == 2 || arrCount[2] == 2 && arrCount[5] == 2 && arrCount[8] == 2 || arrCount[3] == 2 && arrCount[6] == 2 && arrCount[9] == 2
        || arrCount[1] == 2 && arrCount[5] == 2 && arrCount[9] == 2 || arrCount[3] == 2 && arrCount[5] == 2 && arrCount[7] == 2){

        return 2;
    }
    // Kiểm tra điều kiện lấp đầy
    // Nếu không ai Win sẽ in ra Draw(hoà)
    // Trả về giá trị "3"
    else{
        if(sumArrCount == 9){
            return 3;
        }
    }
    // Trả về "0" nếu ko điều kiện nào đúng để tiếp tục chương trình
    return 0;
}


void MainWindow::on_pushButton_newGame_clicked()
{
    // Xóa nội dung của các label
    ui->label_pic_1->setText("1");
    ui->label_pic_2->setText("2");
    ui->label_pic_3->setText("3");
    ui->label_pic_4->setText("4");
    ui->label_pic_5->setText("5");
    ui->label_pic_6->setText("6");
    ui->label_pic_7->setText("7");
    ui->label_pic_8->setText("8");
    ui->label_pic_9->setText("9");

    // Hiển thị lại tất cả các nút
    for (auto button : buttonMap.values()) {
        button->show();
    }

    // Reset các mảng về giá trị ) ban đầu
    std::fill(std::begin(arrCount), std::end(arrCount), 0);

    // Đặt lại các biến trạng thái
    count = 0;
    sumArrCount = 0;
    ui->label_turn->setText("Turn: X");
}


void MainWindow::on_pushButton_newRound_clicked()
{
    pointA = 0;
    pointB = 0;
    on_pushButton_newGame_clicked();
    ui->label_pointA->setText(QString::number(pointA));
    ui->label_pointB->setText(QString::number(pointB));
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "Game rules", "Lượt chơi: Bên X đi trước xong đến bên O\n"
                                                 "Thắng: Khi có 1 hàng thẳng hoặc xiên có 3 quân cùng loại\n"
                                                 "Hoà: Khi không bên nào đạt được hàng thẳng\n"
                                                 "New Game: Khi muốn bắt đầu lại ván với\n"
                                                 "New Round: Khi muốn bắt đầu lại hiệp mới hoàn toàn\n");
}

