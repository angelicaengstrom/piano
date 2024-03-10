//
// Created by angel on 2024-03-09.
//

#ifndef PIANO_MAINWINDOW_H
#define PIANO_MAINWINDOW_H

#include <QWidget>


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
};


#endif //PIANO_MAINWINDOW_H
