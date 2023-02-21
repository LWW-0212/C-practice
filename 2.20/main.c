#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define N 1000
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//    while(n--){
//        int y;
//        scanf("%d",&y);
//        int h[y];
//        for(int i=0;i<y;i++)
//            scanf("%d",&h[i]);
//        int cot=0;
//        for(int i=1;i<y-1;i++){
//            if(h[i]>h[i-1]&&h[i]>h[i+1]){
//                cot++;
//            }
//        }
//        printf("%d\n",cot);
//    }
//    return 0;
//}
//void Fun(int *a,int k,int *k)
//{
//    int num=a[0],j;
//    for(int i=0;i<10;i++){
//        if(num<a[0]){
//            //num=a[i];
//            *k=i;
//        }
//    }
//}
//void Fun(char *a,int *k){
//    for(int i=0;a[i]!='\0';i++){
//        if(a[i]>=48&&a[i]<=57){
//            (*k)++;
//        }
//    }
//}
//void Fun(char *str,char ch)
//{
//    int s=0,f=0;
//    for(f=0;f<strlen(str);f++){
//        if(str[i]!=ch){
//            str[s++]=str[f];
//        }
//
//    }
//    str[s]='\0';
//
//}


//void Fun(char* a,char *b,int *n){
//    *n=0;
//    int j=0;
//    int len=strlen(a),len2=strlen(b);
//    for(int i=0;i<len;i++){
//    while(a[i]==b[j]){
//        if(j==len2-1){
//            (*n)++;
//            i--;
//        }
//        i++;
//        j++;
//    }
//    j=0;
//}
//}
//int main()
//{
//    char str[N + 5], substr[N + 5];
//    int count;
//    gets(str);
//    gets(substr);
//    Fun(str, substr, &count);
//    printf("%d\n", count);
//    return 0;
//}
#define N 10

int Fun(char *a){
    int num=0,i,j=1;
    int len=strlen(a);
    for(i=len-1;i>=0;i--){
        if(a[i]>=48&&a[i]<=57){
            num+=(a[i]-48)*j;
            j*=10;
        }else{
            break;
        }
    }
    if(!(a[i]>=48&&a[i]<=57)){
        num=-num;
    }
    return num;
}


int main()
{
    char s[N];
    int n;
    scanf("%s",s);
    n = Fun(s);
    printf("%d\n", n);
    return 0;
}
