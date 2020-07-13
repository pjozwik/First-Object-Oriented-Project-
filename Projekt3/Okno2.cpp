#include "Okno2.h"
#include "Projekt3.h"


Okno2::Okno2(QWidget *parent)
	: QDialog(parent)
{
	so.setupUi(this);
}

Okno2::Okno2(UrzadzenieTelekomunikacyjne* obiekt) {
	
	Router *router;
	RouterZModememLTE *router2;
	Telefon *telefon;
	so.setupUi(this);
	if (router = dynamic_cast<Router*>(obiekt)) {
		if (router2 = dynamic_cast<RouterZModememLTE*>(obiekt)) {
			
			so.spinBox_5->clear();
			so.radioButton_2->setChecked(true);
			so.lineEdit->clear();
			so.lineEdit_2->clear();
			so.lineEdit_7->clear();
			so.radioButton->setEnabled(false);
			so.radioButton_3->setEnabled(false);
			so.lineEdit->insert(QString::fromStdString(router2->zwroc_producenta()));
			so.lineEdit_2->insert(QString::fromStdString(router2->zwroc_nazwe_modelu()));
			so.spinBox_5->setValue(router2->zwroc_czestotliwosc());
			so.spinBox->setValue(router2->zwroc_ilosc_rdzenie_procesora());
			so.comboBox->setCurrentText(QString::fromStdString(router2->zwroc_sile_sygnalu()));
			so.spinBox_2->setValue(router2->zwroc_szybkosc_przesylania());
			so.spinBox_6->setValue(router2->zwroc_zasieg_sygnalu());
			so.spinBox_3->setValue(router2->zwroc_ilosc_pamieci_RAM());
			so.lineEdit_7->insert(QString::fromStdString(router2->zwroc_modem()));
			obiekt = router2;
			wskaznik = router;
		}
		else {
			
			so.spinBox_5->clear();
			so.radioButton->setChecked(true);
			so.lineEdit->clear();
			so.lineEdit_2->clear();
			so.radioButton_2->setEnabled(false);
			so.radioButton_3->setEnabled(false);
			so.lineEdit->insert(QString::fromStdString(router->zwroc_producenta()));
			so.lineEdit_2->insert(QString::fromStdString(router->zwroc_nazwe_modelu()));
			so.spinBox_5->setValue(router->zwroc_czestotliwosc());
			so.spinBox->setValue(router->zwroc_ilosc_rdzenie_procesora());
			so.comboBox->setCurrentText(QString::fromStdString(router->zwroc_sile_sygnalu()));
			so.spinBox_2->setValue(router->zwroc_szybkosc_przesylania());
			so.spinBox_6->setValue(router->zwroc_zasieg_sygnalu());
			so.spinBox_3->setValue(router->zwroc_ilosc_pamieci_RAM());
			obiekt = router;
			wskaznik = router;
		}
	}
	if (telefon = dynamic_cast<Telefon*>(obiekt)) {

		so.radioButton_3->setChecked(true);
		so.lineEdit->clear();
		so.lineEdit_2->clear();
		so.radioButton->setEnabled(false);
		so.radioButton_2->setEnabled(false);
		so.lineEdit->insert(QString::fromStdString(telefon->zwroc_producenta()));
		so.lineEdit_2->insert(QString::fromStdString(telefon->zwroc_nazwe_modelu()));
		so.comboBox_2->setCurrentText(QString::fromStdString(telefon->zwroc_typ_wyswietlacza()));
		so.spinBox_4->setValue(telefon->zwroc_pojemnosc_bateri());
		obiekt = telefon;
		wskaznik = telefon;
	}
}

Okno2::~Okno2()
{
}

void Okno2::dodajObiekt() {

	if (so.radioButton->isChecked()) {
		Router *router = new Router;
		router->zmien_producenta(so.lineEdit->text().toStdString());
		router->zmien_model(so.lineEdit_2->text().toStdString());
		router->zmien_czestotliwosc(so.spinBox_5->value());
		router->zien_szybkosc_przesylania(so.spinBox_2->value());
		router->zmien_zasieg_sygna³u(so.spinBox_6->value());
		router->zmien_ilosc_RAM(so.spinBox_3->value());
		router->zmien_ilosc_rdzenie_procesora(so.spinBox->value());
		router->zmien_sile_sygnalu(so.comboBox->currentText().toStdString());
		wskaznik = router;
		
	}

	if (so.radioButton_3->isChecked()) {

		Telefon *telefon = new Telefon;
		telefon->zmien_pojemnosc_baterii(so.spinBox_4->value());
		telefon->zmien_typ_wyswietlacza(so.comboBox_2->currentText().toStdString());
		telefon->zmien_producenta(so.lineEdit->text().toStdString());
		telefon->zmien_model(so.lineEdit_2->text().toStdString());
		wskaznik = telefon;
	}

	if (so.radioButton_2->isChecked()) {

		RouterZModememLTE *router2 = new RouterZModememLTE;
		router2->zmien_producenta(so.lineEdit->text().toStdString());
		router2->zmien_model(so.lineEdit_2->text().toStdString());
		router2->zmien_czestotliwosc(so.spinBox_5->value());
		router2->zien_szybkosc_przesylania(so.spinBox_2->value());
		router2->zmien_zasieg_sygna³u(so.spinBox_6->value());
		router2->zmien_ilosc_RAM(so.spinBox_3->value());
		router2->zmien_ilosc_rdzenie_procesora(so.spinBox->value());
		router2->zmien_sile_sygnalu(so.comboBox->currentText().toStdString());
		router2->zmien_modem(so.lineEdit_7->text().toStdString());
		wskaznik = router2;
	}
}



UrzadzenieTelekomunikacyjne* Okno2::zwrocwskaznik()
{

	return wskaznik;
}


void Okno2::czy_prawda()
{
	if (so.radioButton->isChecked()) {
		so.lineEdit->clear();
		so.lineEdit_2->clear();
		so.lineEdit_7->clear();
		so.label_10->setEnabled(false);
		so.label_11->setEnabled(false);
		so.spinBox_4->setEnabled(false);
		so.comboBox_2->setEnabled(false);
		so.label->setEnabled(true);
		so.lineEdit->setEnabled(true);
		so.label_2->setEnabled(true);
		so.lineEdit_2->setEnabled(true);
		so.label_3->setEnabled(true);
		so.spinBox_5->setEnabled(true);
		so.label_4->setEnabled(true);
		so.spinBox->setEnabled(true);
		so.label_7->setEnabled(true);
		so.spinBox_2->setEnabled(true);
		so.label_9->setEnabled(true);
		so.spinBox_3->setEnabled(true);
		so.label_7->setEnabled(true);
		so.spinBox_2->setEnabled(true);
		so.label_6->setEnabled(true);
		so.spinBox_6->setEnabled(true);
		so.label_5->setEnabled(true);
		so.comboBox->setEnabled(true);
		so.label_12->setEnabled(true);
		so.lineEdit_7->setEnabled(false);
		so.label_12->setEnabled(false);
		so.lineEdit->insert("domyslny");
		so.lineEdit_2->insert("domyslny");
		

	}
	if (so.radioButton_2->isChecked()) {
		so.lineEdit->clear();
		so.lineEdit_2->clear();
		so.lineEdit_7->clear();
		so.label_10->setEnabled(false);
		so.label_11->setEnabled(false);
		so.spinBox_4->setEnabled(false);
		so.comboBox_2->setEnabled(false);
		so.label->setEnabled(true);
		so.lineEdit->setEnabled(true);
		so.label_2->setEnabled(true);
		so.lineEdit_2->setEnabled(true);
		so.label_3->setEnabled(true);
		so.spinBox_5->setEnabled(true);
		so.label_4->setEnabled(true);
		so.spinBox->setEnabled(true);
		so.label_7->setEnabled(true);
		so.spinBox_2->setEnabled(true);
		so.label_9->setEnabled(true);
		so.spinBox_3->setEnabled(true);
		so.label_7->setEnabled(true);
		so.spinBox_2->setEnabled(true);
		so.label_6->setEnabled(true);
		so.spinBox_6->setEnabled(true);
		so.label_5->setEnabled(true);
		so.comboBox->setEnabled(true);
		so.lineEdit_7->setEnabled(true);
		so.label_12->setEnabled(true);
		so.lineEdit->insert("domyslny");
		so.lineEdit_2->insert("domyslny");
		so.lineEdit_7->insert("LTE");
	}

	if (so.radioButton_3->isChecked()) {

		so.lineEdit->clear();
		so.lineEdit_2->clear();
		so.lineEdit_7->clear();
		so.label->setEnabled(false);
		so.lineEdit->setEnabled(false);
		so.label_2->setEnabled(false);
		so.lineEdit_2->setEnabled(false);
		so.label_3->setEnabled(false);
		so.spinBox_5->setEnabled(false);
		so.label_4->setEnabled(false);
		so.spinBox->setEnabled(false);
		so.label_7->setEnabled(false);
		so.spinBox_2->setEnabled(false);
		so.label_9->setEnabled(false);
		so.spinBox_3->setEnabled(false);
		so.label_7->setEnabled(false);
		so.spinBox_2->setEnabled(false);
		so.label_6->setEnabled(false);
		so.spinBox_6->setEnabled(false);
		so.label_5->setEnabled(false);
		so.comboBox->setEnabled(false);
		so.label_12->setEnabled(false);
		so.lineEdit_7->setEnabled(false);
		so.label_12->setEnabled(false);
		so.label->setEnabled(true);
		so.lineEdit->setEnabled(true);
		so.label_2->setEnabled(true);
		so.lineEdit_2->setEnabled(true);
		so.label_10->setEnabled(true);
		so.label_11->setEnabled(true);
		so.spinBox_4->setEnabled(true);
		so.comboBox_2->setEnabled(true);
		so.lineEdit->insert("domyslny");
		so.lineEdit_2->insert("domyslny");



	}
}
