#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(char *str1, char *str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}
int main()
{
	char a[] = "abcde";
	char b[] = "abcd";
	int ret = my_strcmp(a, b);
	printf("ret = %d", ret);
	return 0;
}