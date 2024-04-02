// Copyright 2014 Angelica Engström

// You may need to build the project (run Qt uic code generator)
// to get "ui_MainWindow.h" resolved

#include "./src/mainwindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow), piano(std::make_unique<Piano>()) {
  ui->setupUi(this);

  main_layout = std::make_unique<QGridLayout>();

  time_label = std::make_unique<QLabel>();
  time_label->setText(QString("s"));

  record_button = std::make_unique<QPushButton>();

  /*auto central_widget = findChild<QWidget*>("centralwidget");
  auto grid_layout = central_widget->findChild<QGridLayout*>("gridlayout");
  grid_layout->addWidget(piano.release(), 3, 0);
*/

  //grid_layout->addWidget(record_button.release(), 1, 0, 1, 2);
  /*
  main_layout->addWidget(header_label.release(), 0, 0);
  main_layout->addWidget(record_button.release(), 1, 0, 1, 2);
  main_layout->addWidget(time_label.release(), 1, 2);
  main_layout->addWidget(piano.release(), 2, 6, 4, 6);

  setLayout(main_layout.release());
   */
}

MainWindow::~MainWindow() {
  delete ui;
}

