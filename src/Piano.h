// Copyright 2014 Angelica Engström

#ifndef SRC_PIANO_H_
#define SRC_PIANO_H_

#include <QWidget>

class Piano : public QWidget {
  Q_OBJECT
 public:
  explicit Piano(QWidget *parent = nullptr);
};

#endif  // SRC_PIANO_H_
