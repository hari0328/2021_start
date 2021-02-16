/*
	* 실수 자료형: float , double
	* ---------------------------------
	* float: 4 byte, 1.2E-38 ~ 3.4E38
	* double: 8byte, 2.2E-308~ 1.8E308
	* --------------------------------------
	* 12345678.123 = 0.12345678123E7
	* IEEE754
	* 100.0: 0.1e2
	*/

#include <stdio.h>

void main()
{
	double dpi = 3.123456789;
	float pi = 3.123456789f;
	float t1 = 0.123e3;

	printf("pi(%.10f)(%.10f)(%f)(%e)\n", pi, dpi , t1, t1 );
}