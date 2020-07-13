#pragma once

#include <QDialog>
#include "ui_Okno2.h"
#include "Projekt3.h"

class Okno2 : public QDialog
{
	Q_OBJECT

public:
	int i;
	Okno2(QWidget *parent = Q_NULLPTR);
	Okno2(UrzadzenieTelekomunikacyjne* obiekt);
	~Okno2();
	UrzadzenieTelekomunikacyjne* zwrocwskaznik();
	UrzadzenieTelekomunikacyjne *wskaznik = nullptr;

private:

	Ui::Okno2 so;
	Projekt3 qt;

public slots:

	void dodajObiekt();
	void czy_prawda();
	
};
