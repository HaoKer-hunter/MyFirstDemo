//#include<stdio.h>
//int main(void) {
//	char greeting[6] = { 'H','e','l','l','o','\0' };
//	for (int i = 0; i < 6; i++);
//	{
//		printf("%c", greeting[5]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//
//	int var[] = { 10,100,200 };
//	int* ptr = var;
//	printf("var�ĵ�ַΪ%p\n", &var);
//	printf("var[0]�ĵ�ַΪ%p\n", var[0]);
//
//
//	return 0;
//}

//#include<stdio.h>
//int main(void) {
//
//	
//	int sunflower = 100;
//	int* p = &sunflower;
//	printf("����sunflower�ĵ�ַΪ%p\n", &sunflower);
//	printf("ָ��ĵ�ַΪ%p\n",p);
//
//
//	return 0;
//}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[14] = "runoob";
	char str2[14] = "google";
	char str3[14];
	int  len;

	/* ���� str1 �� str3 */
	strcpy_s(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3);

	/* ���� str1 �� str2 */
	strcat_s(str1, str2);
	printf("strcat( str1, str2):   %s\n", str1);

	/* ���Ӻ�str1 ���ܳ��� */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);

	return 0;
}