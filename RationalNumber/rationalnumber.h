#ifndef RationalNumber_H
#define RationalNumber_H
class RationalNumber
{
	public:
		RationalNumber(long numerator, long denominator=1);
		void print(void);
		double real(void) const;
		long getdeno(void) const;
		long getnum(void) const;

		friend RationalNumber operator+(const RationalNumber &r1, const RationalNumber &r2);
		friend RationalNumber operator-(const RationalNumber &r1, const RationalNumber &r2);
		friend RationalNumber operator*(const RationalNumber &r1, const RationalNumber &r2);
		friend RationalNumber operator/(const RationalNumber &r1, const RationalNumber &r2);
		//friend RationalNumber operator+(const RationalNumber &r1, const long l2);
		//friend RationalNumber operator-(const RationalNumber &r1, const long l2);
		//friend RationalNumber operator*(const RationalNumber &r1, const long l2);
		//friend RationalNumber operator/(const RationalNumber &r1, const long l2);
		//friend RationalNumber operator+(const long l1, const RationalNumber &r2);
		//friend RationalNumber operator-(const long l1, const RationalNumber &r2);
		//friend RationalNumber operator*(const long l1, const RationalNumber &r2);
		//friend RationalNumber operator/(const long l1, const RationalNumber &r2);
	private:
		long num, deno;
		void simself(void);
};
#endif
