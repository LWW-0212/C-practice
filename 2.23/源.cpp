#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
////int main() {
////	char str[15];
////	int sum = 0;
////	int j = 1;
////	fgets(str, 15, stdin);
////	for (int i = 0; i <= 10; i++) {
////		if (str[i] != '-') {
////			sum += ((str[i]-'0') * (j++));
////		}
////	}
////	if (sum % 11 == (str[12] - '0')) {
////		printf("Right\n");
////
////	}
////	else
////		str[12] = (sum % 11 + '0');
////		printf("%s", str);
////	return 0;
////}
////
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////
////int main()
////{
////    char str[20];
////    fgets(str, 220, stdin);
////    int a[9] = { 1,2,3,4,5,6,7,8,9 };
////    int sum = 0;
////    int j = 0;
////    for (int i = 0; i < 12; i++)
////    {
////        if (str[i] >= '0' && str[i] <= '9')
////        {
////            sum += (str[i] - '0') * a[j++];
////        }
////    }
////    int shi = sum % 11;
////    char ch;
////    if (shi == 10)
////        ch = 'X';
////    else
////        ch = shi + '0';
////    if (ch == str[12])
////    {
////        printf("Right");
////    }
////    else
////    {
////        for (int i = 0; i < 12; i++)
////            printf("%c", str[i]);
////        printf("%c", ch);
////    }
////    return 0;
////}
//
//int main() {
//	int n = 0, cot = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n--) {
//		cot = 0;
//		char str[310];
//		fgets(str, 310, stdin);
//		for (int i = 0; str[i] != '\0'; i++) {
//			if (str[i] == 'G' || str[i] == 'g')
//			{
//				cot++;
//				break;
//			}
//		}
//		for (int i = 0; str[i] != '\0'; i++) {
//			if (str[i] == 'L' || str[i] == 'l')
//			{
//				cot++;
//				break;
//			}
//		}
//		for (int i = 0; str[i] != '\0'; i++) {
//			if (str[i] == 'b' || str[i] == 'B')
//			{
//				cot++;
//				break;
//			}
//		}
//		if (cot == 3) printf("YES\n");
//		else printf("NO\n");
//	}
//	return 0;
//
//}

#include<string.h>
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n--) {
//		char s[450];
//		fgets(s, 450, stdin);
//		int len = strlen(s);
//		int l = len - 3, r = len - 1;
//		while (l >= 0) {
//			s[r] = s[l];
////			l--;
////			r++;
////		}
////		s[r] = '\0';
////		puts(s);
////	}
////	return 0;
////}
//
//int main() {
//	char str[20];
//	int sum = 0;
//	fgets(str, 20, stdin);
//	int a[] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	for(int i = 0; i < 17; i++) {
//		sum += (str[i] - '0') * a[i];
//
//	}
//	int m = sum % 11;
//	char n;
//	if (m == 0) n = '1';
//	else if (m == 1) n = '0';
//	else if (m == 2)n = 'X';
//	else {
//		int t = 12 - m;
//		n = (t + '0');
//	}
//	if (str[17] == n)
//		printf("Valid\n");
//	else
//		printf("Invalid");
//	return 0;
//}

int main()
{
	char s1[110];
	char s2[110];
	scanf("%s", s1);
	scanf("%s", s2);
	if (strlen(s1) != strlen(s2))
		printf("NO\n");
	else {
		int flag = 0;
		for (int i = 0; i < strlen(s1); i++) {
			if (s1[i] != s2[i]) {
				flag = 1;
				break;

			}
		}
		if (flag == 1) {
			printf("NO\n");
		}
		else{
			printf("YES\n");
		}
		
	}
	return 0;

}