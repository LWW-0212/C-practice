#include <stdio.h>
#include <stdlib.h>
#include <string.h>
////int main()
////{
////    int m,n,i=0,j=0,flag=1;
////    scanf("%d %d",&m,&n);
////    char a[m][25],b[n][25];
////    for(i=0;i<m;i++)
////    {
////        scanf("%s",a[i]);
////    }
////    for(i=0;i<n;i++)
////    {
////        scanf("%s",b[i]);
////    }
////    for(i=0;i<m;i++)
////    {
////        flag=1;
////        for(j=0;j<n;j++)
////        {
////            if(strcmp(a[i],b[j])==0)
////            {
////                flag=0;
////                break;
////            }
////        }
////        if(flag==0)
////            printf("YES\n");
////        else
////            printf("NO\n");
////    }
////    return 0;
////}
//////#include <stdlib.h>
//////#include <string.h>
//////
//////int main()
//////{
//////    int m, n;
//////    scanf("%d %d", &m, &n);
//////    char str1[m][25], str2[n][25];
////////    for(int i = 0; i < m; i++)
////////        scanf("%s", str1[i]);
////////    getchar();
////////    for(int i = 0; i < n; i++)
////////        scanf("%s", str2[i]);
////////    for(int i = 0; i < m; i++)
////////    {
////////        int flag = 0;
////////        for(int j = 0; j < n; j++)
////////        {
////////            if(strcmp(str1[i], str2[j])==0)
////////            {
////////                flag = 1;
////////                printf("YES\n");
////////                break;
////////            }
////////        }
////////        if(flag == 0)
////////            printf("NO\n");
////////    }
////////    return 0;
////////}
//////int main()
//////{
//////    int n,cot=0;
//////    scanf("%d",&n);
//////    char a[n][45];
//////    for(int i=0;i<n;i++)
//////    {
//////        scanf("%s",a[i]);
//////    }
//////    //getchar();
//////    char b[45];
//////    scanf("%s",b);
//////    for(int i=0;i<n;i++)
//////    {
//////        if(strcmp(a[i],b)==0)
//////            cot++;
//////    }
//////    printf("%d",cot);
//////    return 0;
//////}
////int main()
////{
////    int n,flag=1;
////    scanf("%d",&n);
////    while(n--)
////    {
////        flag=1;
////        char a[110];
////        scanf("%s",a);
////        for(int i=0;a[i]!='\0';i++)
////        {
////            if(a[i]=='G'&&a[i+1]=='L'&&a[i+2]=='B')
////            {
////                printf("YES\n");
////                flag=0;
////            }
////        }
////        if(flag==1)
////            printf("NO\n");
////    }
////
////    return 0;
////}
////
////
//int main()
//{
//    int t;
//    scanf("%d", &t);
//    getchar();
//    while(t--)
//    {
//        char str[110];
//        fgets(str, 110, stdin);
//        int flag = 0;
//        for(int i = 0; i < strlen(str)-2; i++)
//        {
//            if(str[i]=='G'&&str[i+1]=='L'&&str[i+2]=='B')
//            {
//                flag = 1;
//                printf("YES\n");
//                break;
//            }
//        }
//        if(flag == 0)
//            printf("NO\n");
//    }
//    return 0;
//}

int main()
{
    int flag=1,k,FLAG=1;

    char a[110],b[110];
    scanf("%s",a);
    getchar();
    scanf("%s",b);
    for(int i=0;i<strlen(a)-strlen(b);i++)
    {
        flag=1;
        k=0;
        for(int j=i;j<strlen(b);j++)
        {
            if(a[j]!=b[k])
            {
                flag=0;
                break;
            }
            k++;
        }
        if(flag==1)
        {
            FLAG=0;
            printf("%d",i);
            break;
        }
    }
    if(FLAG==1)
        printf("-1");
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[110], str2[110];
    fgets(str1, 110, stdin);
    fgets(str2, 110, stdin);
    int l = strlen(str2);
    int flag1 = 0;
    for(int i = 0; i < (strlen(str1)-l); i++)
    {
        int flag = 0;
        for(int j = 0; j < l-1; j++)
        {
            if(str1[i+j] != str2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            flag1 = 1;
            printf("%d", i);
            break;
        }
    }
    if(flag1 == 0)
        printf("-1");
    return 0;
}

//int main()
//{
//    char a[1000];
//    scanf("%s",a);
//    int n=sizeof(a);
//    printf("%d",n);
//    return 0;
//}
