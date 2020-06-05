#include<iostream>
#include"Instrument.h"
#include"Musician.h"
using namespace std;
int main()
{
	Instrument guitar("Guitar", 62);
	cout << guitar;
	Instrument piano("Piano", 50);
	cout << piano;

	Musician Bob("Bob");
	cout << Bob;
	Bob.addInstrument(&guitar, 10);
	Bob.addInstrument(&piano, 5);
	cout << Bob;

	Bob.accessInstrument(0)->play();
	Bob.accessInstrument(1)->play();
}