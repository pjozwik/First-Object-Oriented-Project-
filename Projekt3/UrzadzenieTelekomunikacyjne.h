#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class UrzadzenieTelekomunikacyjne {

protected:
	///zmienna typu int przechowujaca typ urzadzenia
	string typ_urzadzenia;
	///zmienna typu string przechowujaca prodeucenta
	string producent;
	///zmienna typu string przechowujaca nazwe modelu
	string nazwa_modelu;


public:
	///konstruktor 
	UrzadzenieTelekomunikacyjne();
	///wirtualny destruktor
	virtual ~UrzadzenieTelekomunikacyjne();
	///funkcja virtualna zapisujaca zmienne klas do pliku
	virtual void zapis_do_pliku(fstream& plik) = 0;
	///funkcja wirtualna wysiwetlajaca zmienne tej klasy
	virtual string wyswietl() = 0;
	///funkcja wirtualna wczytujaca zmienne klas zp liku
	virtual void wczytaj(fstream &plik) = 0;
	///operator strumieniowy wyjscia
	friend ostream& operator << (ostream &s, UrzadzenieTelekomunikacyjne &urzadzenie);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream &s1, UrzadzenieTelekomunikacyjne &urzadzenie);
	virtual string wyswietl2() = 0;
	virtual string zwroc_producenta() {return producent;};
	virtual string zwroc_nazwe_modelu() { return nazwa_modelu; };

}; 