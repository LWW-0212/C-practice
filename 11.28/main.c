//#include <stdio.h>
//#include <stdlib.h>
////
////int main()
////{
////    int n;
////    scanf("%d", &n);
////    for(int i = 1; i <= (n+2*(n-1)-n)/2; i++)
////        printf(" ");
////    for(int i = 1; i <= n; i++)
////        printf("*");
////    printf("\n");
////    for(int i = 1; i <= n-2; i++)
////    {
////        for(int j = 1; j <= (n+2*(n-1)-n)/2-i; j++)
////            printf(" ");
////        printf("*");
////        for(int k = 1; k <= 2*n+1-2-(n+1)+2*i; k++)
////            printf(" ");
////        printf("*");
////        printf("\n");
////    }
////    for(int i = 1; i <= n+2*(n-1); i++)
////            printf("*");
////    return 0;
////}
////int main()
////{
////    int n;
////    scanf("%d",&n);
////    for(int i=1;i<=n-1;i++)
////    printf(" ");
////    for(int i=1;i<=n;i++)
////        printf("*");
////    printf("\n");
////    for(int i=1;i<=n-2;i++)
////    {
////        for(int j=1;j<=n-i-1;j++)
////            printf(" ");
////        printf("*");
////        for(int j=1;j<=n+i*2-2;j++)
////            printf(" ");
////        printf("*\n");
////    }
////    for(int i=1;i<=3*n-2;i++)
////        printf("*");
////    return 0;
////}
//
//int main()
//{
//    int num,flag=0;
//    scanf("%d",&num);
//    for(int i=1;i<=num/6;i++)
//    {
//        for(int j=1;j<=num/5;j++)
//        {
//            if(i*6+j*5>num) break;
//            for(int k=1;k<=num/4;k++)
//            {
//                if(i*6+j*5+k*4>num) break;
//                if(i*6+j*5+k*4==num)
//                    printf("%d %d %d\n",i,j,k);
//
//            }
//        }
//    }
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int y,z,flag=0,sum=13;
//    scanf("%d %d",&y,&z);
//    if((y%4==0&&y%100!=0)||(y%400==0))
//    {
//        flag=1;
//    }
//
//    for(int i=1;i<=12;i++)
//    {
//        if((sum%7+z-1)%7==5)
//            printf("%d/%d/13\n",y,i);
//        if((i==1)||(i==3)||(i==5)||(i==7)||(i==8)||(i==10)||(i==12))
//        sum+=31;
//        else if((i==4)||(i==6)||(i==9)||(i==11))
//            sum+=30;
//        else
//        {
//            if(flag==0)
//                sum+=28;
//            else
//                sum+=29;
//        }
//    }
//    return 0;
//}
int main()
{
    int n,L,flag=0;
    scanf("%d",&n);
    int a,cot=0,ct=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a);
            if(a==0)
            {
                cot++;
                flag=1;
            }
        }
        if(flag==1)
        L=cot;
        flag=0;//ÖÃÎª0
    }
    return 0;
}
