/*
*기본자료형
* char : 문자
* int : 정수(0, -123, 333)
*        - short int : 2byte
*        - long int: 4byte
* -----------------------------------
* 2바이트
: unsigned short int: 0~65535, 
: signed short int : -32768~32767

* 
* signed: -,+
* unsigned: +
* ---------------------------------------------
* 자료형 : 변수(variable)
* undersocre(_), 영문자 시작
* 영문자, 숫자, undersocre
* ---------------------------
* char : 1바이트
* signed char : 1비트,  부호비트, 7비트 숫자(-128~127)
* unsigned char : 8비트 숫자 (0~255)
*/

#include <stdio.h>

void main()
{
	/*
	char ch  = 'a'; //ascii 한문자 저장
	char cd  = 97; // 십진수
	char cx  = 0x61; // 16진수
	char _co  = 0141; // 8진수
	printf("ch=(%c), cd(%c), cx(%c)\n", ch, cd, cx);
	printf("ch=(%c), cd(%c), cx(%c)\n", ch, cd, cx, _co );
	*/

	signed short int si1 = 32767;
	signed short int si2 = -32768;
	signed short int si3 = 32768;

	unsigned short int us1 = 65535;
	unsigned short int us2 = us1 + 1 ;
	printf("long int: si1=(%d), si2(%d), si3?(%d), us1(%d), us2(%d)\n", si1, si2, si3, us1, us2);

}