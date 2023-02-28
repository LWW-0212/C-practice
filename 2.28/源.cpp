#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int main() {
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}



//
//int main() {
//	int a, b;
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
//int main() {
//	int t, a, b;
//	scanf("%d", &t);
//	while (t--) {
//		printf("%d\n", a + b);
//	}
//	return 0;
//}
/*int main() {
	int a, b;
	do {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	} while (a != 0 && b != 0);
	return 0;
}*/
//int main() {
//
//	return 0;
//}int main() {
//
//	return 0;
int main() {
	int a, b;
	int flag = 0;
	if (a == 0 && b == 0) {
		flag = 1;
	}
	while (flag == 0) {
		printf("%d%d", a + b);
		scanf("%d%d", &a, &b);
		if (a == 0 && b == 0)
			flag = 1;
	}
	return 0;
}
//int main()
//{
//    int a, b;
//    int flag = 0;
//    scanf("%d %d", &a, &b);
//    if (a == 0 && b == 0)
//        flag = 1;
//    while (flag == 0)
//    {
//        printf("%d\n", a + b);
//        scanf("%d %d", &a, &b);
//        if (a == 0 && b == 0)
//            flag = 1;
//    }
//    return 0;
//}