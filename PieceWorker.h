#pragma once
#include"Employee.h"
class PieceWorker:public Employee
{
public:
	PieceWorker(const std::string& first_ref, const std::string& last_ref,
		const std::string& ssn_ref, double wage = 0.0, int piece = 0.0);
	~PieceWorker(){}
	virtual double earnings() const override;
	virtual void print() const override;

	void setWage(double wage) { wage_ = wage; }
	double getWage() const { return wage_; }

	void setPieces(int pieces) { pieces_ = pieces; }
	int getPieces() const { return pieces_; }
private:
	double wage_;
	int pieces_;
};

