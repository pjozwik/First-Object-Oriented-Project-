#include "Projekt3.h"
#include "Okno2.h"
#include <qfile.h>
#include <qtextstream.h>
#include <qstring.h>
#include <qfiledialog.h>
#include <qiodevice.h>
#include <qmessagebox.h>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>



Projekt3::Projekt3(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
}

void Projekt3::dodajOkno2() {

	Okno2 sd;
	sd.exec();
	if (sd.Accepted) {
		
		if (sd.wskaznik != nullptr) {
			obiekty.push_back(sd.zwrocwskaznik());
			rysujListe();
			
		}
	}
	
}

void Projekt3::rysujListe()
{

	{
		ui.listWidget->clear();

		if (obiekty.size() > 0) {
			for (int i = 0; i < obiekty.size(); i++) {

				ui.listWidget->addItem(QString::fromStdString((obiekty[i]->wyswietl())));

			}
		}
	}

}

void Projekt3::wyswietlInfo() {

	ui.pushButton_5->setEnabled(true);
	ui.listWidget_2->setEnabled(true);
	ui.pushButton_2->setEnabled(true);
	ui.listWidget_2->clear();
	int i = ui.listWidget->currentIndex().row();
    ui.listWidget_2->addItem(QString::fromStdString(obiekty[i]->wyswietl2()));

}

void Projekt3::usun()
{
	
			ui.pushButton_2->setEnabled(true);
			int i = ui.listWidget->currentIndex().row();
			obiekty.erase(obiekty.begin() + i);
			rysujListe();
			ui.listWidget_2->clear();
			ui.pushButton_2->setEnabled(false);
			ui.listWidget_2->setEnabled(false);
			scena.clear();
			ui.graphicsView->setEnabled(false);
			ui.pushButton_5->setEnabled(false);
		
}

void Projekt3::zapiszDoPliku()
{

	if (obiekty.size() == 0) {

		QMessageBox mb;
		mb.setText("Brak obiektow do zapisu");
		mb.exec();
	}
	else {

		QString nazwa_pliku = QFileDialog::getSaveFileName(this,
			tr("Save obiekty"), "",
			tr("Text files (*.txt);;All Files (*)"));

		string nazwa = nazwa_pliku.toStdString();
		fstream plik(nazwa, ios::app);
			for (int i = 0; i < obiekty.size(); i++) {
				obiekty[i]->zapis_do_pliku(plik);
			}
			
			plik.close();
	}
		
}

void Projekt3::wczytajPlik()
{
	QString nazwa_pliku = QFileDialog::getOpenFileName(this,
		tr("Wczytaj obiekty"), "",
		tr("Text files (*.txt);;All Files (*)"));

	
	string linia;
	fstream plik2;
	Router *router3;
	Telefon *telefon2;
	RouterZModememLTE *router4;
	
	string nazwa = nazwa_pliku.toStdString();
	plik2.open(nazwa, ios::in);
	if (plik2.good()) {
		do
		{
			getline(plik2, linia);


			if (linia == "Router") {
				router3 = new Router;
				router3->wczytaj(plik2);
				obiekty.push_back(router3);
				rysujListe();


			}
			else if (linia == "Telefon") {
				telefon2 = new Telefon;
				telefon2->wczytaj(plik2);
				obiekty.push_back(telefon2);
				rysujListe();
			}
			else if (linia == "RouterLTE") {

				router4 = new RouterZModememLTE;
				router4->wczytaj(plik2);
				obiekty.push_back(router4);
				rysujListe();
			}



		} while (!plik2.eof());

	}
	plik2.close();
	
}

void Projekt3::wyswietlObrazek()
{
	ui.graphicsView->setEnabled(true);
	Router *r1;
	Telefon *t1;
	RouterZModememLTE *r2;
	int i = ui.listWidget->currentIndex().row();

		if (r1 = dynamic_cast<Router*>(obiekty[i])) {
			if (r2 = dynamic_cast<RouterZModememLTE*>(obiekty[i])) {
				
				ui.graphicsView->setScene(&scena);
				if (zdjecie.load("Resources/routerlte.jpg"))
				{
					scena.setSceneRect(zdjecie.rect());
					scena.clear();
					scena.addPixmap(zdjecie);
					ui.graphicsView->fitInView(zdjecie.rect());

				}
			}
			else {

				ui.graphicsView->setScene(&scena);
				if (zdjecie.load("Resources/router.jpg"))
				{
					scena.setSceneRect(zdjecie.rect());
					scena.clear();
					scena.addPixmap(zdjecie);
					ui.graphicsView->fitInView(zdjecie.rect());

				}
			}
		}

		else if (t1 = dynamic_cast<Telefon*>(obiekty[i])) {

			ui.graphicsView->setScene(&scena);
			if (zdjecie.load("Resources/telefon.jpg"))
			{
				scena.setSceneRect(zdjecie.rect());
				scena.clear();
				scena.addPixmap(zdjecie);
				ui.graphicsView->fitInView(zdjecie.rect());

			}
		}	
}

void Projekt3::wyjscie()
{
	for (auto obiekt : obiekty)
		delete obiekt;
}

void Projekt3::edytuj()
{
	
	ui.pushButton_5->setEnabled(true);
	int i = ui.listWidget->currentIndex().row();
	Okno2 sd(obiekty[i]);
	sd.wskaznik = nullptr;
	sd.exec();
	if (sd.Accepted) {
		if(sd.wskaznik != nullptr) {
			delete obiekty[i];
			obiekty[i] = sd.zwrocwskaznik();
			rysujListe();
			ui.listWidget_2->clear();
			ui.listWidget_2->setEnabled(false);
			ui.pushButton_5->setEnabled(false);
			ui.pushButton_2->setEnabled(false);
			scena.clear();
			ui.graphicsView->setEnabled(false);
			
		}
	}
}


