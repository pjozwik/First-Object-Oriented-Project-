#pragma once



#include <iostream>
#include <string>
#include <fstream>
#include <qfile.h>

using namespace std;


class Urzadzenie {

public:
	///zmienna typu int przechowujaca czestotliwosc routera
	int czestotliwosc;
	///zmienna typu string przechowujaca sile sygnalu routera
	string si³a_sygna³u;
	///zmienna typu int przechowujaca zasieg sygnalu
	int zasieg_sygnalu;
	///zmienna typu int przechowujaca szybkosc przesylania
	int szybkosc_przesylania;

	///konstruktor
	Urzadzenie(); 
	///destruktor
	~Urzadzenie(); 
	///operator strumieniowy wyjscia
	friend ostream& operator << (ostream & s, Urzadzenie &urzadzenie);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream & s, Urzadzenie &urzadzenie);
	///funkcja zapisujaca zmienne tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wyswietlajaca zmienne tej klasy do pliku
	string wyswietl2();
	///funkcja wczytujaca zmienne tej klasy z pliku
	void wczytaj(fstream &plik);
	
};