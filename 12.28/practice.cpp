#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n,sum=0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		int sum1 = 1;
//		for (int j = 2; j <= i; j++) {
//			sum1 = sum1 * j;
//		}
//		sum += sum1;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<string.h>
//int is_left_move(char* s1, char* s2);
//int main() {
//	char s1[30] = "abcdef";
//	char s2[] = "cdefa";
//	int ret = is_left_move(s1, s2);
//	if (ret == 0) printf("No\n");
//	else printf("Yes\n");
//	return 0;
//}
//int is_left_move(char* s1, char* s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) return 0;
//	strncat(s1, s1, len1);
//	char* ret = strstr(s1, s2);
//	if (ret != NULL) return 1;
//	else return 0;
//}
//int find_Num(int a[3][3], int k, int* x, int* y) {
//	int row = 0, col = *y - 1;
//	while (row <= *x - 1 && col >= 0) {
//		if (a[row][col] < k) {
//			row++;
//		}
//		else if (a[row][col] > k) {
//			col--;
//		}
//		else {
//			*x = row;
//			*y = col;
//			return 1;
//		}
//			
//
//	}
//}
//int main()
//{
//	int a[3][3] = { {1,6,10},{2,7,11},{3,8,12} };
//	int k = 8, x = 3, y = 3;
//	int ret = find_Num(a, k, &x, &y);
//	if (ret == 1) {
//		printf("找到了！\n下标是%d %d", x, y);
//	}
//	else
//		printf("没有找到！");
//	return 0;
//}


//int main()
//{
//	size_t a = 3;
//	size_t b = 6;
//	if (a - b > 0)printf("hehe\n");
//	else printf("haha\n");
//
//	return 0;
//}
#include<assert.h>
//void my_strcat(char* s1, const char* s2) {
//	assert(s1 && s2);
//	int len = strlen(s1);
//	int len2 = strlen(s2);
//	for (int i = 0; i <=len2; i++) {
//		*(s1 + len) = *s2;
//		s1++;
//		s2++;
//	}
//}
//char* my_strcat(char* s1, const char* s2) {
//	assert(s1 && s2);
//	char* dst = s1;
//	while (*s1) {//find end of s1
//		s1++;
//	}
//	while (*(s1++) = *(s2++));//copy s2 to end of s1
//	return dst;
//}
//int main()
//{
//	char s1[30] = "ab";
//	char s2[] = "cde";
//	my_strcat(s1, s2);
//	printf("%s", s1);
//	return 0;
//}
//void Left_Move(char* s, int k)
//{
//	assert(s!=NULL);
//	int len = strlen(s);
//	for (int i = 0; i < k; i++)//这样的动作重复k次
//	{
//		char tmp = *s;//（1）
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(s + j) = *(s + j + 1);
//		}//（2）
//		*(s + len - 1) = tmp;//（3）
//	}
//}
//int main()
//{
//	char a[] = "abcde";
//	int k=2;//左旋k个字符
//	Left_Move(a, k);
//	printf("%s\n", a);
//	return 0;
//}
//void reverse(char* a, char* b)//实现翻转函数
//{
//	char* left = a;
//	char* right = b;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void Left_Move(char* s, int k)
//{
//	int len = strlen(s);
//	//传进reverse的是两个指针
//	reverse(s, s + k - 1);		//第一步翻转 "ab"->"ba"
//	reverse(s + k, s + len - 1);//第一步翻转 "cde"->"edc"
//	reverse(s, s + len - 1);	//第一步翻转 "baedc"->"cdeab"
//}
//int main()
//{
//	char a[] = "abcde";
//	int k = 2;//左旋k个字符
//	Left_Move(a, k);
//	printf("%s\n", a);
//	return 0;
//}
//
char * Left_Move(char* s, int k)
{
	int len = strlen(s);//提前计算好我们之后要截取的那一段字符串的长度
	strncat(s, s, len);//追加完成
	char s2[30]={'\0'};
	for (int i = 0; i < len; i++)
	{
		s2[i] = *(s+k+i);
	}
	return s2;
}
//void Left_Move(char* s,char* s2, int k)
//{
//	int len = strlen(s);//提前计算好我们之后要截取的那一段字符串的长度
//	strncat(s, s, len);//追加完成
//	
//	for (int i = 0; i < len; i++)
//	{
//		s2[i] = *(s + k + i);
//	}
//}

//int main()
//{
//	char s[30] = "abcde";
//	int k = 2;//左旋k个字符
//	char s2[30] = { '\0' };
//	Left_Move(s, s2,k);
//	printf("%s\n", s2);
//	return 0;
//}
int main()
{
	char a[30] = "abcde";
	int k = 2;//左旋k个字符
	char* ret = Left_Move(a, k);
	int i = 0;
	while (ret[i]) {
		printf("%c\n", ret[i]);
		i++;
	}
	
	return 0;
}