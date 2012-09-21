#include <iostream>
#include "rationalnumber.h"
using namespace std;


RationalNumber::RationalNumber(long  numerator, long denominator){
	this->num = numerator;
	this->deno = denominator;
	simself();
}
void     RationalNumber::print(void){
	cout << num << "/" << deno << endl;
}
double   RationalNumber::real(void) const{
	return this->num*1.0/this->deno;
}
long RationalNumber::getdeno(void) const{
	return this->deno;
}
long RationalNumber::getnum(void) const{
	return this->num;
}

void RationalNumber::simself(void){
	long r, a=this->num, b=this->deno;
	while (1) {
		r = a % b;
		if(!r)break;
		a = b;
		b = r;
	}
	this->num = this->num / b;
	this->deno = this->deno / b;
}
RationalNumber operator+(const RationalNumber &r1, const RationalNumber &r2){
	long denominator, numerator;
	denominator = r1.getdeno() * r2.getdeno();
	numerator = r1.getnum() * r2.getdeno() + r1.getdeno() * r2.getnum();
	RationalNumber rv(numerator, denominator);
	return rv;
}
 RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2){
	long denominator, numerator;
	denominator = r1.getdeno() * r2.getdeno();
	numerator = r1.getnum() * r2.getdeno() - r1.getdeno() * r2.getnum();
	RationalNumber rv(numerator, denominator);
	return rv;
}
 RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2){
	long denominator, numerator;
	denominator = r1.getdeno() * r2.getdeno();
	numerator = r1.getnum()  * r2.getnum();
	RationalNumber rv(numerator, denominator);
	return rv;
}
 RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2){
	long denominator, numerator;
	denominator = r1.getdeno() * r2.getnum();
	numerator = r1.getnum() * r2.getdeno();
	RationalNumber rv(numerator, denominator);
	return rv;
}
//RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2);
//RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2);
//RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2);
//RationalNumber operator+(const RationalNumber &r1, const long l2);
//RationalNumber operator-(const RationalNumber &r1, const long l2);
//RationalNumber operator*(const RationalNumber &r1, const long l2);
//RationalNumber operator/(const RationalNumber &r1, const long l2);
//RationalNumber operator+(const long l1, const RationalNumber &r2);
//RationalNumber operator-(const long l1, const RationalNumber &r2);
//RationalNumber operator*(const long l1, const RationalNumber &r2);
//RationalNumber operator/(const long l1, const RationalNumber &r2);
