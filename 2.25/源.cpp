#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main() {
//	while (1) {
//		int a, b;
//		scanf("%d%d", &a, &b);
//		if (a == 0 || b == 0) break;
//		int cot = 0;
//		double sum = 0.0;
//		while (1) {
//			if (sum >= 1.0) {
//				break;
//			}
//			if (cot % 2 == 0) sum += (1.0 / a);
//			else sum += (1.0 / b);
//			cot++;
//		}
//		printf("%d\n", cot);
//	}
//	return 0;
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	while (n--) {
//		int a1, a2, a3, b1, b2, b3;
//		scanf("%d%d%d", &a1, &a2, &a3);
//		scanf("%d%d%d", &b1, &b2, &b3);
//		if (a1 == b1 && a2 == b2 && a3 == b3)
//			printf("Same\n");
//		else if (a1 == b2 && a2 == b2 && a3 > b3) printf("First\n");
//		else if (a1 == b2 && a2 > b2) printf("First\n");
//		else if (a1 > b2) printf("First\n");
//		else printf("Second\n");
//
//	}
//	return 0;
//}
//
//char Bian(char ch) {
//	if (ch == '\n') return '\0';
//	if (ch >= '0' && ch <= '9') {
//		return ch;
//	}
//	else if (ch >= 'a' && ch <= 'c') {
//		return '2';
//	}
//	else if (ch >= 'd' && ch <= 'f') {
//		return '3';
//	}
//	else if (ch >= 'g' && ch <= 'i') {
//		return '4';
//	}
//	else if (ch >= 'j' && ch <= 'l') {
//		return '5';
//	}
//	else if (ch >= 'm' && ch <= 'o') {
//		return '6';
//	}
//	else if (ch >= 'p' && ch <= 's') {
//		return '7';
//	}
//	else if (ch >= 't' && ch <= 'v') {
//		return '8';
//	}
//	else if (ch >= 'w' && ch <= 'z') {
//		return '9';
//	}
//	else if (ch >= 'A' && ch <= 'Y') {
//		ch = (ch - ('A' - 'a')) + 1;
//		return ch;
//	}
//	else return 'a';
//}
//int main() {
//	char str[110];
//	while (fgets(str, 110, stdin) != NULL) {
//		for (int i = 0; str[i] != '\0'; i++) {
//			str[i] = Bian(str[i]);
//		}
//		printf("%s\n", str);
//	}
//	return 0;
//}

//int main() {
//	int day = 0;
//	int ans = 0, time = 10000;
//	scanf("%d", &day);
//	for (int i = 0; i < 7; i++) {
//		int h1, m1, h2, m2,t;
//		scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
//		if (h1 == h2) {
//			t = m2 - m1;
//		}
//		else if (h1 < h2) {
//			t = m2 - m1 + 60;
//		}
//		if (time > t) {
//			time = t;
//			day = i;
//		}
//	}
//	ans = (day + 3) % 7;
//	if (ans == 1)printf("Monday ");
//	else if (ans == 2)printf("Tuesday ");
//	else if (ans == 3)printf("Wedesday ");
//	else if (ans == 4)printf("Thursday ");
//	else if (ans == 5)printf("Friday ");
//	else if (ans == 6)printf("Sataurday ");
//	else if (ans == 7)printf("Sunday ");
//	printf("%d", time);
//	return 0;
//}


//int main() {
//	int h1, m1, h2, m2,n;
//	scanf("%d:%d %d:%d %d", &h1, &m1, &h2, &m2, &n);
//	int ans = ((h2 - h1) * 60 + m2 - m1) + n * 20;
//	printf("%d", ans);
////	return 0;
////}
//int main() {
//	char s[110],str[110];
//	fgets(s, 110, stdin);
//	//scanf("%s", s);
//	int i,j = 0;
//	for ( i = 0; s[i+1] != '\0'; i++) {
//		if (s[i - 1] == ' ')break;
//	}
//	for (; s[i] != '\0'; i++) {
//		str[j++] = s[i];
//	}
//	str[j++] = ' ';
//	for (int k = 0; s[k] != ' '; k++) {
//		str[j++] = s[k];
//	}str[j] = '\0';
//	puts(str);
//	return 0;
//}

//int main() {
//	char s1[110], s2[110];
//	while (scanf("%s %s", s1, s2) != EOF) {
//		printf("%s %s", s2, s1);
//	}
//}

//
//int main() {
//	int l = 0,n;
//	scanf("%d %d",&l, &n);
//	int s[1000];
//	for (int i = 0; i < 1000; i++) s[i] = 1;
//	while (n--) {
//		int a, b;
//		scanf("%d %d", &a, &b);
//		for (int i = a; i <= b; i++) {
//			s[i]--;
//		}
//
//		
//	}
//	int cot = 0;
//	for (int i = 0; i <=l; i++) {
//		if (s[i] == 1) cot++;
//	}
//	printf("%d", cot);
//	return 0;
//}
//
//int main() {
//	int a[1100];
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < 1100; i++) {
//		a[i] = 0;
//	}
//	for (int i = 0; i < n; i++) {
//		int m;
//		scanf("%d", &m);
//		a[m]++;
//		printf("%d ", a[m]); 
//	}
//	return 0;
//}
//
//int main() {
//
//	int n;
//	scanf("%d", &n);
//	int cot = 0, i = 1, sum = 0;
//	while (cot < n) {
//		if (i % 4!=0 && i / 10 != 4&&i%10!=4) {
//			cot++;
//			sum += i;
//		}
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}
#include<string.h>
//int main() {
//
//	char a[110];
//	char b[110]={'\0'};
//	while (fgets(a, 110, stdin) != NULL) {
//		if (strlen(a) > strlen(b)) {
//			strcpy(b, a);
//		}
//	}
//	printf("%s", b);
//	return 0;
//}
//int main()
//{
//    char a[1000], b[1000];
//    while (fgets(a, 35, stdin))
//    {
//        if (strcmp(a, b) > 0)
//        {
//            strcpy(b, a);
//        }
//    }
//    printf("%s", b);
//    return 0;
//}

//
//int main() {
//	int l = 0, r = 1000,k=0;
//	long long n = 0;
//	scanf("%d", &k);
//	while(k--) {
//		int len, ri;
//			long long num = 0;
//		scanf("%d%d%d", &len, &ri, &num);
//		if (l <= len && r >= ri && n <= num) {
//			l = len;
//			r = ri;
//			n = num;
//		}
//	}
//	printf("%d", n);
//
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//char name[20][1000];
//int num[20];
//int main()
//{
//    int n, a, b, c;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%s", name[i]);
//        scanf("%d %d %d", &a, &b, &c);
//        num[i] = a * 3 + b;
//    }
//    for (int i = 1; i <= n; i++)
//        for (int j = 1 + i; j <= n; j++)
//        {
//            if (num[j] > num[i])
//            {
//                char t[1000];
//                strcpy(t, name[i]);
//                int sum = num[i];
//                strcpy(name[i], name[j]);
//                num[i] = num[j];
//                strcpy(name[j], t);
//                num[j] = sum;
//            }
//        }
//    for (int i = 1; i <= n; i++)
//        printf("%d %s %d\n", i, name[i], num[i]);
//    return 0;
//}



//int main() {
//	int n = 0;
//	char name[20][1000];
//	int num[20];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int a, b, c;
//		scanf("%s", name[i]);
//		getchar();
//		scanf("%d %d %d", &a, &b, &c);
//		num[i] = a * 3 + b;
//	}
//	for (int i = 0; i < n-1; i++) {
//		for (int j =i+1; j < n-1; j++) {
//			if (num[i] < num[j]) {
//				int tmp = num[i];
//				num[i] = num[j];
//				num[j] = tmp;
//				char str[100];
//				strcpy(str, name[i]);
//				strcpy(name[i], name[j]);
//				strcpy(name[j], str);
//
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d %s %d\n", i+1, name[i], num[i]);
//	}
//	return 0;
//}

int main() {
	int h1, h2, m1, m2,h,m;
	scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
	if (m1 + m2 >= 60) {
		m = (m1 + m2) % 60;
		h = (h1 + h2 + 1) % 24;
	}
	else {
		m = m1 + m2;
		h = (h1 + h2 + 1) % 24;
	}
	printf("%02d:%02d", h, m);
	return 0;
}