// Copyright 2014 Angelica Engström

#ifndef SRC_MAINWINDOW_H_
#define SRC_MAINWINDOW_H_

#include <memory>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include "Piano.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
  Q_OBJECT
 public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow() override;
 private:
  Ui::MainWindow *ui;
  std::unique_ptr<QGridLayout> main_layout;
  std::unique_ptr<QLabel> header_label;
  std::unique_ptr<QLabel> time_label;
  std::unique_ptr<QPushButton> record_button;
  std::unique_ptr<Piano> piano;
};

#endif  // SRC_MAINWINDOW_H_
