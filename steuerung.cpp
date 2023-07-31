#include "steuerung.h"
#include <time.h>
#include<QLabel>
Steuerung::Steuerung(QWidget* elternObjekt) : QWidget(elternObjekt)
{
	positionX = 400 / 10;
	positionY = 400 / 10;

	nextposarray = 2;

	srand(time(nullptr));
	resize(400, 400);

	apfel = new QLabel(this);
	apfel->setGeometry(rand() % 10 * positionX, rand() % 10 * positionY, 40, 40);
	apfel->setPalette(Qt::red);
	apfel->setAutoFillBackground(true);
	apfel->show();


	schlangenkopf = new QLabel(this);
	schlangenkopf->setGeometry(4 * positionX, 5 * positionY, 40, 40);
	schlangenkopf->setPalette(Qt::green);
	schlangenkopf->setAutoFillBackground(true);
	schlangenkopf->show();

	topf[0] = schlangenkopf;
	topf[1] = new QLabel(this);
	topf[1]->setGeometry(4 * positionX, 4 * positionY, 39, 39);
	topf[1]->setPalette(Qt::green);
	topf[1]->setAutoFillBackground(true);
	topf[1]->show();



}

Steuerung::~Steuerung()
{
}

void Steuerung::keyPressEvent(QKeyEvent* ereignis)
{
	switch (ereignis->key())  // Hinweis: Die Rueckgabecodes der einzelnen Tasten
	{                          // findet man in der Doku unter -> Namespaces -> Qt
	case Qt::Key_Left:
		//topf[1]->move(schlangenkopf->x(),schlangenkopf->y());
		qDebug() << "Pfeiltaste 'links' laufen";

		move();

		schlangenkopf->move(schlangenkopf->x() - positionX, schlangenkopf->y());


		if (schlangenkopf->x() == apfel->x() && schlangenkopf->y() == apfel->y()) {
			apfel->setGeometry(rand() % 10 * positionX, rand() % 10 * positionY, 40, 40);
			topf[nextposarray] = new QLabel(this);
			topf[nextposarray]->setGeometry(topf[nextposarray - 1]->x() + (1 * positionX), topf[nextposarray - 1]->y(), 39, 39);
			topf[nextposarray]->setPalette(Qt::green);
			topf[nextposarray]->setAutoFillBackground(true);
			topf[nextposarray]->show();
			nextposarray = nextposarray + 1;
		}
		break;

	case Qt::Key_Right:
		//topf[1]->move(schlangenkopf->x(), schlangenkopf->y());
		qDebug() << "Pfeiltaste 'rechts' laufen";

		move();

		schlangenkopf->move(schlangenkopf->x() + positionX, schlangenkopf->y());
		if (schlangenkopf->x() == apfel->x() && schlangenkopf->y() == apfel->y()) {
			apfel->setGeometry(rand() % 10 * positionX, rand() % 10 * positionY, 40, 40);
			topf[nextposarray] = new QLabel(this);
			topf[nextposarray]->setGeometry(topf[nextposarray - 1]->x() - (1 * positionX), topf[nextposarray - 1]->y(), 39, 39);
			topf[nextposarray]->setPalette(Qt::green);
			topf[nextposarray]->setAutoFillBackground(true);
			topf[nextposarray]->show();
			nextposarray = nextposarray + 1;
		}
		break;

	case Qt::Key_Up:
		//topf[1]->move(schlangenkopf->x(), schlangenkopf->y());
		qDebug() << "Pfeiltaste 'hoch' laufen";

		move();

		schlangenkopf->move(schlangenkopf->x(), schlangenkopf->y() - positionY);
		if (schlangenkopf->x() == apfel->x() && schlangenkopf->y() == apfel->y()) {
			apfel->setGeometry(rand() % 10 * positionX, rand() % 10 * positionY, 40, 40);
			topf[nextposarray] = new QLabel(this);
			topf[nextposarray]->setGeometry(topf[nextposarray - 1]->x(), topf[nextposarray - 1]->y() + (1 * positionY), 39, 39);
			topf[nextposarray]->setPalette(Qt::green);
			topf[nextposarray]->setAutoFillBackground(true);
			topf[nextposarray]->show();
			nextposarray = nextposarray + 1;
		}
		break;

	case Qt::Key_Down:
		//topf[1]->move(schlangenkopf->x(), schlangenkopf->y());
		qDebug() << "Pfeiltaste 'runter' laufen";

		move();

		schlangenkopf->move(schlangenkopf->x(), schlangenkopf->y() + positionY);
		if (schlangenkopf->x() == apfel->x() && schlangenkopf->y() == apfel->y()) {
			apfel->setGeometry(rand() % 10 * positionX, rand() % 10 * positionY, 40, 40);
			topf[nextposarray] = new QLabel(this);
			topf[nextposarray]->setGeometry(topf[nextposarray - 1]->x(), topf[nextposarray - 1]->y() - (1 * positionY), 39, 39);
			topf[nextposarray]->setPalette(Qt::green);
			topf[nextposarray]->setAutoFillBackground(true);
			topf[nextposarray]->show();
			nextposarray = nextposarray + 1;
		}
		break;


	}
}


void Steuerung::move() {
	for (int i = nextposarray - 1; i > 0; i--)
		topf[i]->move(topf[i - 1]->x(), topf[i - 1]->y());


}



