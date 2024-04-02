// Copyright 2014 Angelica Engström

// You may need to build the project (run Qt uic code generator)
// to get "ui_MainWindow.h" resolved

#include "./src/mainwindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow), piano(std::make_unique<Piano>()) {
  ui->setupUi(this);

  auto central_widget = findChild<QWidget*>("centralwidget");
  auto grid_layout = central_widget->findChild<QGridLayout*>("gridlayout");
}

MainWindow::~MainWindow() {
  delete ui;
}

