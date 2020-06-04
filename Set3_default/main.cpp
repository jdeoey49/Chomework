#include<iostream>
#include"Instrument.h"
#include"Musician.h"
using namespace std;
int main()
{
	Instrument guitar("Guitar", 62);
	cout << guitar;

	Musician Bob("Bob", 5, guitar);
	cout << Bob;
}