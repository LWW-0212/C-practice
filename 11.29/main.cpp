//#include <iostream>
//
//using namespace std;
//class basic
//{
//public:
//    int a;
//protected:
//    int b;
//private:
//    int c;
//
//};
//class Web:public basic
//{
//public:
//    int d;
//
//};
//void test01()
//{
//    cout<<"sizeof Web is:"<<sizeof(Web)<<endl;
//}
//int main()
//{
//    test01();
//        return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            a[i][j]=0;
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            a[i][0]=1;
//            if(i==j)
//                a[i][j]=1;
//        }
//    }
//    for(int i=2;i<n;i++)
//    {
//        for(int j=1;j<n;j++)
//        if(i!=j)
//        a[i][j]=a[i-1][j]+a[i-1][j-1];
//
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][j]!=0)
//                printf("     %d",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            a[i][j]=0;
//        }
//    }//³õÊ¼»¯0
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            a[i][0]=1;
//            if(i+j==n-1)
//                a[i][j]=1;
//        }
//    }
//    for(int i=n-3;i>=0;i--)
//    {
//        for(int j=1;j<n;j++)
//        {
//            if(i+j!=n-1)
//                a[i][j]=a[i+1][j-1]+a[i+1][j];
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int k=1;k<=i*2;k++)
//            printf(" ");
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][j]!=0)
//                printf("%4d",a[i][j]);
//        }
//        printf("\n");
//    }
////    return 0;
////}
//int main()
//{
//    int n,sum=0;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i]);
//        sum+=a[i];
//    }
//    int aver=sum/6;
//    int su;
//    for(int i=0;i<n;i++)
//    {
//        if(a[i]>aver)
//            su+=(a[i]-aver);
//    }
//    printf("The minimum number is %d",su);
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    long ret=a+b;
//    if(ret==1000000)
//        printf("%d")
    if(ret>-1000&&ret<1000)
        printf("%ld",ret);
    else
    {
        printf("%d,",ret/1000);
        ret=abs(ret%1000);
        if(ret>=1000)
        {
            printf("%3d,",ret/1000);
            printf("%d",ret%1000);
        }
        else printf("%d",ret);
    }

    return 9;
}
