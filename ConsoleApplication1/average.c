#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	//int math, kor, eng;
	//puts("���� ���� ���� �� ������ ���ʷ� �Է����ּ���.");
	//scanf_s("%d %d %d", &math, &kor, &eng);
	//printf("���� : %d", math + kor + eng);
	//printf("��� : %0.1f", (float)(math + kor + eng)/3);
	
	//int thousands = 0;
	//printf("1000�� �ڸ� ���ڸ� �Է����ּ���.\n");
	//scanf_s("%d", &thousands);
	//printf("%d���� 1000�ڸ� �Ʒ� ���ڸ� ���� ���: %d", thousands, thousands-(thousands%1000));

	//int nData = 0;
	//scanf_s("%d", &nData);
	
	//if (nData == 0) {
	//	printf("0 �Դϴ�.");
	//}
	//else if (nData > 0) {
	//	printf("��� �Դϴ�.");
	//}
	//else if (nData < 0) {
	//	printf("�����Դϴ�.");
	//}
	//if (nData > 0 && nData != 0? printf("����Դϴ�.") : printf("�����Դϴ�."));


	int bucket = 0;
	int apple = 0;
	int last = 0;
	printf("����� ������ �Է��ϼ���.\n");
	scanf_s("%d", &apple);


	last = apple % 10;

	if (apple % 10 != 0) {
		bucket = (apple / 10) + 1;
	}
	else {
		bucket = apple / 10;
	}
	
	printf("��� %d�� ������ �ʿ��� �ٱ��ϴ� %d���Դϴ�.\n", apple, bucket);

}