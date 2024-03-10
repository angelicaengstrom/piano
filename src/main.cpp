#include <iostream>
#include <QApplication>
#include "mainwindow.h"
/**
 * A GUI-based project where you can play a virtual piano.
 * Incorporation of asynchronous functions (multithreading) along with dealing with different audio libraries.
 * Function that records the tunes played on the piano (file-handling).
 */

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MainWindow mainwindow;
	mainwindow.show();
	return a.exec();
}