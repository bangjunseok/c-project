// #if, #ifdef, #ifndef, #else, #elif, #endif
// #if ->if
// #ifdef ->���࿡ ���ǵǾ� �ִٸ�(��)
// #ifndef (if not def) -> ���࿡ ���ǵǾ� ���� �ʴٸ� (��)
// #else -> else
// #elif -> else if
// #endif -> if���� ��

#include <stdio.h>
#define DEBUG 1 //--����׸��
#define NAME "HARRY"

int main(void){
    #if DEBUG
	printf("��������Դϴ�");
	#else
	printf("�����Դϴ�");
	#endif
	return 0;
}
