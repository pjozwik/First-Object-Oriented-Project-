#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <qfile.h>
using namespace std;

class Parametry {

	
public:
	///zmienna typu int przechowujaca ilosc pamieci RAM routera
	int ilosc_pamieci_RAM;
	///zmienna typu int przechowujaca ilosc rdzeni procesora
	int ilosc_rdzeni_procesora;
	///konstruktor
	Parametry(); 
	///destruktor
	~Parametry(); 
	///operator strumieniowy wyjsia
	friend ostream& operator << (ostream &s, Parametry &parametry);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream &s, Parametry &parametry);
	///funkcja zapisujaca zmienne tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wysiwetlajaca zmienne tej klasy
	string wyswietl2();
	///funkcja wczytujaca zmienne tej klasy z pliku
	void wczytaj(fstream &plik);
	///funkcja zwracajaca ilosc pamieci RAM
	int zwroc_ilosc_pamieciRAM2() { return ilosc_pamieci_RAM; };



};