#include "instrument.h"
#include "musician.h"
#include <iostream>

using namespace std;

int main() {
	Instrument guitar("Guitar",62);
	cout << guitar;

	Musician Bob("Bob", 5, guitar);
	cout << Bob;
}