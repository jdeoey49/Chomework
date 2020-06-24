#include "PieceWorker.h"
#include<iostream>
#include<string>
using namespace std;
PieceWorker::PieceWorker(const std::string& first_ref, const std::string& last_ref,
	const std::string& ssn_ref, double wage , int piece ):Employee(first_ref,last_ref,ssn_ref),wage_(wage),
	pieces_(piece)
{}
double PieceWorker::earnings() const
{
	return getWage()*getPieces();
}
void PieceWorker::print() const
{
	cout << "PieceWorker employee: ";
	Employee::print();
	cout << "\nwage:" << getWage() << endl;
	cout << "pieces:" << getPieces();

}