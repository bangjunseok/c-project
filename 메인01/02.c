#include<stdio.h>

//typedef
//typedef �ڷ���{int, char, enum,....}���� �� �ڷ��� �̸�

typedef int AGE;// int AGE
typedef char* NAME; //char*NAME
typedef enum _week{ S,M,T,W,TH,F,SAT } WEEK;//������ ����� ���� ������Ÿ��

int main(void) {

	AGE age = 20;//AGE ������ Ÿ�� 
	NAME name = "���ؼ�";//NAME ������ Ÿ��
	WEEK w = S;


	return 0;
}