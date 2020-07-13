#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Projekt3.h"
#include <vector>
#include "UrzadzenieTelekomunikacyjne.h"
#include "router.h"
#include "RouterZModememLTE.h"
#include "telefon.h"
#include "Urzadzenie.h"
#include "parametry.h"
#include "Antena.h"
#include <QString>
#include <QGraphicsScene>

class Projekt3 : public QMainWindow
{
	Q_OBJECT

public:
	Projekt3(QWidget *parent = Q_NULLPTR);
	vector <UrzadzenieTelekomunikacyjne*> obiekty;
private:

	Ui::Projekt3Class ui;
	QGraphicsScene  scena;
	QPixmap zdjecie;
	QImage *zdjecie2;

public slots:
	void dodajOkno2();
	void rysujListe();
	void wyswietlInfo();
	void usun();
	void zapiszDoPliku();
	void wczytajPlik();
	void wyswietlObrazek();
	void wyjscie();
	void edytuj();
	
};

