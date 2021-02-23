//전처리기란 #을 쓴 모든것
//전처리기는 컴파일 이전에 사용된다(정의되거나..)
#include<stdio.h>
#define PI 3.14
#define STR_STRING "Hello World"
#define OUTPUT printf
#define AGE int

//매크로 함수
#define ADD(x, y) x + y



int main3(void) {

	AGE age = 20;

	printf("PI = %f\n", PI);
	printf("STR_STRINF = %s\n", STR_STRING);
	OUTPUT("STR_STRING.OUTPUT = %s\n", STR_STRING);
	printf("%d\n", ADD(1, 2));
	
	return 0;
}

