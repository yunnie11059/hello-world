#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	//int math, kor, eng;
	//puts("수학 국어 영어 세 점수를 차례로 입력해주세요.");
	//scanf_s("%d %d %d", &math, &kor, &eng);
	//printf("총점 : %d", math + kor + eng);
	//printf("평균 : %0.1f", (float)(math + kor + eng)/3);
	
	//int thousands = 0;
	//printf("1000의 자리 숫자를 입력해주세요.\n");
	//scanf_s("%d", &thousands);
	//printf("%d에서 1000자리 아래 숫자를 버린 결과: %d", thousands, thousands-(thousands%1000));

	//int nData = 0;
	//scanf_s("%d", &nData);
	
	//if (nData == 0) {
	//	printf("0 입니다.");
	//}
	//else if (nData > 0) {
	//	printf("양수 입니다.");
	//}
	//else if (nData < 0) {
	//	printf("음수입니다.");
	//}
	//if (nData > 0 && nData != 0? printf("양수입니다.") : printf("음수입니다."));


	int bucket = 0;
	int apple = 0;
	int last = 0;
	printf("사과의 개수를 입력하세요.\n");
	scanf_s("%d", &apple);


	last = apple % 10;

	if (apple % 10 != 0) {
		bucket = (apple / 10) + 1;
	}
	else {
		bucket = apple / 10;
	}
	
	printf("사과 %d를 담을때 필요한 바구니는 %d개입니다.\n", apple, bucket);

}