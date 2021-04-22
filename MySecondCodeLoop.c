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
//	printf("var的地址为%p\n", &var);
//	printf("var[0]的地址为%p\n", var[0]);
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
//	printf("变量sunflower的地址为%p\n", &sunflower);
//	printf("指针的地址为%p\n",p);
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

	/* 复制 str1 到 str3 */
	strcpy_s(str3, str1);
	printf("strcpy( str3, str1) :  %s\n", str3);

	/* 连接 str1 和 str2 */
	strcat_s(str1, str2);
	printf("strcat( str1, str2):   %s\n", str1);

	/* 连接后，str1 的总长度 */
	len = strlen(str1);
	printf("strlen(str1) :  %d\n", len);

	return 0;
}
//Please tell me what's wrong with lines 37 to 60
