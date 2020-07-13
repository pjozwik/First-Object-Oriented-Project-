#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "UrzadzenieTelekomunikacyjne.h"
#include <qfile.h>

using namespace std;

class Telefon : public UrzadzenieTelekomunikacyjne {
private:
	///zmienna typu int przechowujaca pojemnosc bateri
	int pojemnosc_bateri;
	///zmienna typu string przechowujaca typ wyswietlacza
	string typ_wysiwetlacza;
	

public:
	///konstruktor
	Telefon();
	///destruktor
	~Telefon();
	///operator strumieniowy wyjscia
	friend ostream& operator << (ostream & s, Telefon &telefon);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream & s, Telefon &telefon);
	///funkcja zapisujaca zmienne tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wysiwetlaja zmienne tej klasy
	string wyswietl();
	///funkcja wczytujaca zmienne tej klasy z pliku
	void wczytaj(fstream &plik);
	string wyswietl2();
	void zmien_typ_wyswietlacza(string nowy_typ);
	void zmien_pojemnosc_baterii(int nowa_pojemnosc);
	void zmien_model(string nowy_model);
	void zmien_producenta(string nowy_producent);
	int zwroc_pojemnosc_bateri() { return pojemnosc_bateri; };
	string zwroc_typ_wyswietlacza() { return typ_wysiwetlacza; };
	


};