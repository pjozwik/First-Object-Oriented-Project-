#include "UrzadzenieTelekomunikacyjne.h"
#include <string>
#include <fstream>
using namespace std;

UrzadzenieTelekomunikacyjne::UrzadzenieTelekomunikacyjne()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor UrzadzenieTelekomunikacyjne" << endl;
#endif 

}

UrzadzenieTelekomunikacyjne::~UrzadzenieTelekomunikacyjne()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor UrzadzenieTelekomunikacyjne" << endl;
#endif 
}


ostream& operator << (ostream &s, UrzadzenieTelekomunikacyjne &urzadzenie) {

	s << urzadzenie.typ_urzadzenia << endl << urzadzenie.producent << endl << urzadzenie.nazwa_modelu << endl;
	return s;
}

istream & operator >> (istream & s1, UrzadzenieTelekomunikacyjne & urzadzenie)
{
	s1 >> urzadzenie.typ_urzadzenia >> urzadzenie.producent >> urzadzenie.nazwa_modelu;
	return s1;
}
