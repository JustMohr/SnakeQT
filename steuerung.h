#ifndef STEUERUNG_H
#define STEUERUNG_H

#include <QWidget>
#include <stdlib.h>
#include <QLabel>
#include <qevent.h>
#include <qdebug.h>
class Steuerung : public QWidget
{
    Q_OBJECT

public:
    Steuerung(QWidget *parent = nullptr);
    ~Steuerung();


    QLabel* schlangenkopf;
    QLabel* apfel;
    int positionX;
    int positionY;
    QLabel* topf[100];
    int nextposarray;

private: QWidget* anzeige;

public slots:
   void keyPressEvent(QKeyEvent*);/* virtuelle Methode */

   void move();
};


#endif // STEUERUNG_H
