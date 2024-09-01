#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>  // Thêm dòng này để bao gồm QPushButton
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void displayTurn();

    int check();
    // Nếu check() == 1 -> PlayerA WIN
    // Nếu check() == 2 -> PlayerB WIN
    // Khác -> Draw

    void on_pushButton_newGame_clicked();

    void on_pushButton_newRound_clicked();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    QPixmap pix_x;
    QPixmap pix_o;
    QMap<int, QPushButton*> buttonMap; // Map để lưu trữ các nút
};

// Mảng lưu giá trị của từng Ô đánh
// "1" đại diện nước đanh X
// "2" đại diện nước đánh O
extern int arrCount[10];

// Biến đếm tính hoà
// sumArrCount = 9 -> hoà
extern int sumArrCount;

// Điểm của PlayerA, PlayerB
extern int pointA;
extern int pointB;

// Sét kích thước hiển thị ảnh
extern int w;
extern int h;
#endif // MAINWINDOW_H
