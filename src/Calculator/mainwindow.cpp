#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(on_click_number()));
    connect(ui->pushButton_dot, SIGNAL(clicked()), this, SLOT(on_click_dot()));
    connect(ui->pushButton_add, SIGNAL(clicked()), this, SLOT(on_click_operations()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_click_number(){
    QPushButton* button = (QPushButton *) sender();

    double all_numbers;
    QString new_label;

    all_numbers = (ui->label_result->text()+button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_result->setText(new_label);
}
void MainWindow::on_click_dot(){
    if(!ui->label_result->text().contains('.')){
        ui->label_result->setText(ui->label_result->text()+'.');
    }
}
void MainWindow::on_click_operations(){
    QPushButton* button = (QPushButton *) sender();

    double all_numbers;
    QString new_label;

    all_numbers = (ui->label_result->text()+button->text()).toDouble();
    new_label = QString::number(all_numbers, 'g', 15);
    ui->label_result->setText(new_label);
}
