#pragma once
#include "router.h"
#include <iostream>
#include <fstream>
#include <string>
#include <qfile.h>

class RouterZModememLTE : public Router {

private:
	///zmienna typi string przechowujaca typ modemu
	string typ_modemu;


public:
	///konstruktor
	RouterZModememLTE();
	///destruktor
	~RouterZModememLTE();
	///operator strumieniowy wyjscia
	friend std::ostream& operator << (std::ostream &s, RouterZModememLTE &modem);
	///operator strumieniowy wejscia
	friend std::istream& operator >> (std::istream &s, RouterZModememLTE &modem);
	///funkcja zapisujaca zmienne tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wczytujaca zmienne tej klasy do pliku
	void wczytaj(fstream &plik);
	///funkcja wyswietlajaca zmienne tej klasy
	string wyswietl();
	string wyswietl2();
	void zmien_producenta(string nowy_producent);
	void zmien_czestotliwosc(int nowa_czestotliwosc);
	void zmien_sile_sygnalu(string nowa_sila);
	void zien_szybkosc_przesylania(int nowa_szybkosc);
	void zmien_zasieg_sygna³u(int nowy_zasieg);
	void zmien_ilosc_RAM(int nowa_ilosc);
	void zmien_ilosc_rdzenie_procesora(int nowa_ilosc);
	void zmien_model(string nowy_model);
	void zmien_modem(string nowy_modem);
	string zwroc_modem() { return typ_modemu; };
};