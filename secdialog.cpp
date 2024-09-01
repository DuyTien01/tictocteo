#include "secdialog.h"
#include "ui_secdialog.h"
#include "mainwindow.h"

SecDialog::SecDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
{
    ui->setupUi(this);
}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_pushButton_clicked()
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

    // Đặt lại các biến trạng thái
    // Reset các mảng
    std::fill(std::begin(countA), std::end(countA), 0);
    std::fill(std::begin(countB), std::end(countB), 0);
    count = 0;
    ui->label_turn->setText("Turn: X");
}


void SecDialog::on_pushButton_2_clicked()
{

}

