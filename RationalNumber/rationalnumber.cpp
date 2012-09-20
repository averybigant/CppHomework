#include <iostream>
#include "rationalnumber.h"


RationalNumber::RationalNumber(long numerator, long denominator){
	this->numerator = numerator;
	this->denominator = denominator;
}
void     RationalNumber::print(void);
void     RationalNumber::pprint(void);
double   RationalNumber::real(void);
RationalNumber RationalNumber::operator+(const RationalNumber &r1, const RationalNumber &r2);
RationalNumber RationalNumber::operator-(const RationalNumber &r1, const RationalNumber &r2);
RationalNumber RationalNumber::operator*(const RationalNumber &r1, const RationalNumber &r2);
RationalNumber RationalNumber::operator/(const RationalNumber &r1, const RationalNumber &r2);
RationalNumber RationalNumber::operator+(const RationalNumber &r1, const long l2);
RationalNumber RationalNumber::operator-(const RationalNumber &r1, const long l2);
RationalNumber RationalNumber::operator*(const RationalNumber &r1, const long l2);
RationalNumber RationalNumber::operator/(const RationalNumber &r1, const long l2);
RationalNumber RationalNumber::operator+(const long l1, const RationalNumber &r2);
RationalNumber RationalNumber::operator-(const long l1, const RationalNumber &r2);
RationalNumber RationalNumber::operator*(const long l1, const RationalNumber &r2);
RationalNumber RationalNumber::operator/(const long l1, const RationalNumber &r2);
