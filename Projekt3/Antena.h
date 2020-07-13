#pragma once
#include <iostream>
#include <vector>
#include <qfile.h>

using namespace std;

class Antena {
private:
	///zmiennna typu int przechowujaca szerokosc anteny
	int szerokosc;
	///zmienna typu int przechowujca dlugosc anteny
	int dlugosc;

public:
	///konstruktor
	Antena(); 
	///destruktor
	~Antena();	
	///operator strumieniowy wyjscia
	friend ostream& operator << (ostream &s, Antena &antena);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream &s, Antena &antena);
	///funkcja zapisujaca pola tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wczytujaca pola tej klasy z pliku
	void wczytaj(fstream &plik);
	
	

	
};