#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int zu;
//    scanf("%d",&zu);
//    for(int i=0;i<zu;i++)
//    {
//        int n;
//        scanf("%d",&n);
//        int a[n];
//        int max=0,num;
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[j]);
//            if(a[j]>max)
//            {
//                max=a[j];
//                num=j;
//            }
//        }
//        printf("%d ",num+1);
//        a[num]=0;
//        max=0;
//        for(int j=0;j<n;j++)
//        {
//            if(a[j]>max)
//            {
//                max=a[j];
//
//            }
//        }
//        printf("%d",max);
//
//    }
//    return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int mid=(n-1)/2;
//    int a[n],b[n];
//    for(int i=0;i<n;i++)
//
//    scanf("%d",&a[i]);
//
//    for(int i=0;i<n-1;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//            if(a[i]<a[j])
//                {
//                    int tmp=a[i];
//                    a[i]=a[j];
//                    a[j]=tmp;
//                }
//        }
//    }//ÅÅÐòÍê³É
//    b[mid]=a[0];
//    for(int i=1;i<n;i++)
//    {
//        if(i%2==1)
//        {
//            mid=mid+i;
//            b[mid]=a[i];
//        }
//        else
//        {
//            mid=mid-i;
//            b[mid]=a[i];
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        printf("%d",b[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][2];
//    int max=-10000,min=10000;
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i][0]);
//        scanf("%d",&a[i][1]);
//        if(max<a[i][1])
//            max=a[i][1];
//        if(min>a[i][1])
//            min=a[i][1];
//    }
////    int ci=n+1;
////    int b[ci],k=0;
////    for(int i=min;i<=max;i++)
////    {
////        int sum=0;
////        for(int j=0;j<n;j++)
////        {
////            sum+=abs(a[j][1]-i);
////        }
////        b[k]=sum;
////        k++;
////    }
////    int MIN=999999;
////    for(int i=0;i<ci;i++)
////    {
////        if(MIN>b[i])
////            MIN=b[i];
////    }
////    printf("%d",MIN);
////
////    return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int a[10];
//    for(int i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    int b[10][2];
//    for(int i = 0; i < 10; i++)
//    {
//        b[i][0] = a[i];
//    }
//    for(int i = 0; i < 9; i++)
//    {
//        for(int j = i; j < 10; j++)
//        {
//            if(b[i][0] > b[j][0])
//            {
//                int temp = b[i][0];
//                b[i][0] = b[j][0];
//                b[j][0] = temp;
//            }
//        }
//    }
//    for(int i = 0; i < 10; i++)
//    {
//        if(i == 0)
//            b[i][1] = i+1;
//        else
//        {
//            if(b[i][0] == b[i-1][0])
//                b[i][1] = b[i][1];
//            else
//                b[i][1] = i+1;
//        }
//    }
//    for(int i = 0; i < 10; i++)
//    {
//        for(int j = 0; j < 10; j++)
//        {
//            if(a[i] == b[j][0])
//            {
//                printf("%3d", b[j][1]);
//                break;
//            }
//        }
//    }
//    return 0;

int main()
{
      int a[10];
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    int b[10][2];
    for(int i = 0; i < 10; i++)
    {
        b[i][0] = a[i];
    }
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(b[i][0]>b[j][0])
            {
                int tmp=b[i][0];
                b[i][0]=b[j][0];
                b[j][0]=tmp;
            }
        }
    }
     for(int i=0;i<10;i++)
     {
         if(i==0)
            b[i][1]=1;
        else
        {
            if(b[i][0] == b[i-1][0])
                b[i][1] = b[i][1];
            else
                b[i][1] = i+1;
        }
     }
     for(int i=0;i<10;i++)
     {
         for(int j=0;j<10;j++)
         {
             if(a[i]==b[j][0])
            {
                printf("%3d",b[j][1]);
                break;
            }
         }
     }

    return 0;
}
