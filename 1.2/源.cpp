#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
char* my_strstr(char* str1, char* str2);
//int main()
//{
	/*char a[] = "abcd";
	char b[] = "am0ppp";
	char c[] = "abcd\0popo";
	printf("%d\n%d\n%d\n", strlen(a), strlen(b), strlen(c));*/


	/*char a[30] = "abcd";
	char b[] = "efghhhhhhhhhhhh";
	strcpy(a, b);
	printf("%s\n", a);*/


	/*char str1[] = "abcd";
	char str2[] = "abfd";
	printf("%d\n", strcmp(str1, str2));*/


	/*char str1[30] = "abcd";
	char str2[] = "efg";
	strcat(str1, str2);
	printf("%s", str1);*/
	

	/*char str1[30] = "abcd\0xxxxxxxxx";
	char str2[] = "efg";
	strncat(str1, str2,5);
	puts(str1);
	return 0;*/
	/*const char* str1 = "abcd";
	const char* str2 = "abft";
	int ret = strncmp(str1, str2, 2);
	printf("%d", ret);*/

//	 char str1[] = "abcdeffffabcdef";
//	 char str2[] = "def";
//	 char* ret = my_strstr(str1, str2);
//	puts(ret);
//	const char* p = "abc";
//	p++;
//	puts(p);
//
//}
// char* my_strstr( char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int num = len1 - len2 + 1;
//	while (num--)
//	{
//		 char* newstr = str1;
//		char* sdr = str2;
//		int flag = 0;
//		for (int i = 0; i < len2; i++)
//		{
//			if (*(str1 + i) != *(str2 + i))
//			{
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			return newstr;
//		}
//		str1 = newstr + 1;
//		str2 = sdr;
//	}
//	return NULL;
//}

int main()
{
	char arr[] = "I.love.you@yan";
	char p[] = ".@";
	char* ret = NULL;
	ret = strtok(arr, p);
	puts(ret);
	ret = strtok(NULL, p);
	puts(ret);
	ret = strtok(NULL, p);
	puts(ret);
	ret = strtok(NULL, p);
	puts(ret);


	/*for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		puts(ret);
	}*/

	return 0;
}