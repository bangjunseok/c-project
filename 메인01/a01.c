#include<stdio.h>

//������
//������ ���� ����
//enum ������ �̸�{����}
/*
	int mon = 0;
	int tue = 1;
	int wed = 2;
	int thurs = 3
*/
enum week {//ó������ ���� �Ѿ������ 1�� ����
	SUN,
	MON,
	THU,
	WED,
	THUR,
	FRI,
	SAT
	/*
	SUN,
	MON,
	THU = 30,
	WED,
	THUR,
	FRI,
	SAT
	1,2,30,31,...*/
};

enum boolean {
	false,
	true
};

int main1(void) {
	enum week w;
	w = SUN;
	
	if (true) {//enum boolean
		printf("aaaa\n\n");
	}

	printf("sizeof(week)=%d\n\n", sizeof(enum week)); //sizeof(w),4����Ʈ
	printf("SUN = %d, MON = %d\n", SUN, MON);
	printf("THU = %d, WED = %d\n", THU, WED);
	printf("THUR = %d, FRI = %d\n", THUR, FRI);
	return 0;
}