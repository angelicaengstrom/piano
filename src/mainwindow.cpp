// Copyright 2014 Angelica Engström

// You may need to build the project (run Qt uic code generator)
// to get "ui_MainWindow.h" resolved

#include "./src/mainwindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
}

