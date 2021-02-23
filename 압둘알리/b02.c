// #if, #ifdef, #ifndef, #else, #elif, #endif
// #if ->if
// #ifdef ->만약에 정의되어 있다면(참)
// #ifndef (if not def) -> 만약에 정의되어 있지 않다면 (참)
// #else -> else
// #elif -> else if
// #endif -> if문의 끝

#include <stdio.h>
#define DEBUG 1 //--디버그모드
#define NAME "HARRY"

int main(void){
    #if DEBUG
	printf("디버깅모드입니다");
	#else
	printf("운영모드입니다");
	#endif
	return 0;
}
