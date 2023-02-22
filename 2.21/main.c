#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
////int main()
////{
////    char str[90];
////    gets(str);
////    //fgets(str, 90, stdin);
////    char ch = str[0];
////    int len=strlen(str);
////    int l=sizeof(str);
////    for(int i = 0; i <= len-2; i++)
////    {
////        str[i] = str[i+1];
////    }
////    str[strlen(str)-1] = ch;
////    printf("%s", str);
////    return 0;
////}
//int Shu(char* s)
//{
//    if(strcmp(s,"one")==0)
//    return 1;
//    if(strcmp(s,"two")==0)
//    return 2;
//    if(strcmp(s,"three")==0)
//    return 3;
//    if(strcmp(s,"four")==0)
//    return 4;
//    if(strcmp(s,"five")==0)
//    return 5;
//    if(strcmp(s,"six")==0)
//    return 6;
//    if(strcmp(s,"seven")==0)
//    return 7;
//    if(strcmp(s,"eight")==0)
//    return 8;
//    if(strcmp(s,"nine")==0)
//    return 9;
//
//}
//int main()
//{
//    int n=0,n1=0;
//    int k=0;
//    scanf("%d",&k);
//    getchar();
//    while(k--){
//        char str[110]={0};
//        char s[10]={0};
//        int j=0;
//        fgets(str,110,stdin);
//        for(int i=0;str[i]!='\0';i++){
//            if(str[i]>='a'&&str[i]<='z'){
//                s[j++]=str[i];
//            }
//            if(str[i]==' '){
//                s[j]='\0';
//                n=n*10+Shu(s);
//                strcpy(s,"");
//                j=0;
//            }
//            if(str[i]=='+'){
//                n1=n;
//                n=0;
//                j=0;
//                strcpy(s,"");
//            }
//        }
//        printf("%d\n",n+n1);
//    }
//    return 0;
//
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int shu(char str[])
//{
//    if(strcmp(str, "one") == 0)
//        return 1;
//    else if(strcmp(str, "two") == 0)
//        return 2;
//    else if(strcmp(str, "three") == 0)
//        return 3;
//    else if(strcmp(str, "four") == 0)
//        return 4;
//    else if(strcmp(str, "five") == 0)
//        return 5;
//    else if(strcmp(str, "six") == 0)
//        return 6;
//    else if(strcmp(str, "seven") == 0)
//        return 7;
//    else if(strcmp(str, "eight") == 0)
//        return 8;
//    else if(strcmp(str, "nine") == 0)
//        return 9;
//    else
//        return 0;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    getchar();
//    while(n--)
//    {
//        char str[110];
//        fgets(str, 110, stdin);
//        int s1 = 0;
//        int s2 = 0;
//        char str1[20];
//        int j = 0;
//        for(int i = 0; str[i] != '\0'; i++)
//        {
//            if(str[i] >= 'a' && str[i] <= 'z')
//            {
//                str1[j++] = str[i];
//            }
//            if(str[i] == ' ')
//            {
//                str1[j] = '\0';
//                s1 = s1*10 + shu(str1);
//                strcpy(str1, "");
//                j = 0;
//            }
//            if(str[i] == '+')
//            {
//                s2 = s1;
//                s1 = 0;
//                strcpy(str1, "");
//                j = 0;
//            }
//        }
//        printf("%d\n", s1+s2);
//    }
//    return 0;
//}
/*垂直柱状图【★★★】
【题目描述】

       从键盘读取一行大写字母（不超过80个字符），然后用柱状图输出每个字符出现的次数。*/
int main()
{
    int n=65;
    char s[51][80]={0};
    for(int i=0;i<51;i++){
        if(i%2==0){
            s[i][0]=n++;
        }else{
            s[i][0]=' ';
        }
    }
    for(int i=1;i<80;i++){
        for(int j=0;j<51;j++){
            s[j][i]=' ';
        }
    }
    char str[80];
    fgets(str,80,stdin);
    for(int i=0;str[i]!='\0';i++){
            int j=0;
        if(str[i]>='A'&&str[i]<='Z'){
            while(s[(str[i]-'A')*2][j]!=' '){j++;}
            s[(str[i]-'A')*2][j]='*';
        }
    }
    int flag=0,j=79,i=0;
    for(j=79;j>1;j--){
        for(i=0;i<51;i++){
            if(s[i][j]=='*'){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }
    for(;j>=0;j--){
        for(i=0;i<51;i++){
            printf("%c",s[i][j]);
        }
        printf("\n");
    }


//    for(int l=0;l<80;l++){
//        for(int k=0;k<51;k++){
//            printf("%c",s[k][l]);
//        }
//        printf("\n");
//    }
    return 0;
}
