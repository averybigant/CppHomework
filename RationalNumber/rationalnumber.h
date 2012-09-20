#ifndef RationalNumber_H
#define RationalNumber_H
class RationalNumber
{
	public:
		RationalNumber(long numerator, long denominator=1);
		long numerator, denominator;
		void print(void);
		void pprint(void);
		double real(void);
		RationalNumber operator+(const RationalNumber &r1, const RationalNumber &r2);
		RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2);
		RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2);
		RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2);
		RationalNumber operator+(const RationalNumber &r1, const long l2);
		RationalNumber operator-(const RationalNumber &r1, const long l2);
		RationalNumber operator*(const RationalNumber &r1, const long l2);
		RationalNumber operator/(const RationalNumber &r1, const long l2);
		RationalNumber operator+(const long l1, const RationalNumber &r2);
		RationalNumber operator-(const long l1, const RationalNumber &r2);
		RationalNumber operator*(const long l1, const RationalNumber &r2);
		RationalNumber operator/(const long l1, const RationalNumber &r2);
	private:
		void simself(void);

#endif
