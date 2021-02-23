#include<stdio.h>

//typedef
//typedef 기본자료형{int, char, enum,....}내가 쓴 자료형 이름(Alias/별명)

typedef int AGE;// int AGE
typedef char* NAME; //char*NAME
typedef enum _week{ S,M,T,W,TH,F,SAT } WEEK;//열거형 사용자 정의 데이터타입
typedef struct _student {
	int hakbun;
	char* name;
}STUDENT;

int main2(void) {

	AGE age = 20;//AGE 데이터 타입 
	NAME name = "방준석";//NAME 데이터 타입
	WEEK w = S;
	STUDENT std;
	std.hakbun = 10000;
	std.name = "방준석";

	return 0;
}