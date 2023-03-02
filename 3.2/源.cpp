#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int dec(const void* a, const void * b) {
	return abs(*(int*)b) - abs(*(int*)a);
}
int main() {
	int a[4] = { -4,5,2,-9 };
	qsort(a, 4, sizeof(int), dec);
	for (int i = 0; i < 4; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}