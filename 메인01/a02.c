#include<stdio.h>

//typedef
//typedef �⺻�ڷ���{int, char, enum,....}���� �� �ڷ��� �̸�(Alias/����)

typedef int AGE;// int AGE
typedef char* NAME; //char*NAME
typedef enum _week{ S,M,T,W,TH,F,SAT } WEEK;//������ ����� ���� ������Ÿ��
typedef struct _student {
	int hakbun;
	char* name;
}STUDENT;

int main2(void) {

	AGE age = 20;//AGE ������ Ÿ�� 
	NAME name = "���ؼ�";//NAME ������ Ÿ��
	WEEK w = S;
	STUDENT std;
	std.hakbun = 10000;
	std.name = "���ؼ�";

	return 0;
}