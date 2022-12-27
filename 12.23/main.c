#include <stdio.h>
#include <stdlib.h>
//
//int main()
//{
//    int n,m;
//    scanf("%d",&n);
//    int a[n];
//    for(int i=0;i<n;i++)
//        scanf("%d",&a[i]);
//    scanf("%d",&m);
//    int b[m];
//    for(int i=0;i<m;i++)
//        scanf("%d",&b[i]);
//
//
//    for(int i=0;i<n;i++)
//    {
//        //先和前面的元素比较，看有没有重复。
//        for(int k=0;k<i-1;k++)
//        {
//            if(a[k]==a[i]) goto again;
//        }
//        int flag=0;
//        for(int j=0;j<m;j++)
//        {
//            if(a[i]==b[j])
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0)
//            printf("%d ",a[i]);
//
//
//        again:continue;
//    }
//
//
//    for(int j=0;j<m;j++)
//    {
//        //先和前面的元素比较，看有没有重复。
//        for(int k=0;k<j-1;k++)
//        {
//            if(b[k]==b[j]) goto ag;
//        }
//        int flag=0;
//        for(int i=0;i<m;i++)
//        {
//            if(a[i]==b[j])
//            {
//                flag=1;
//                break;
//            }
//        }
//        if(flag==0)
//            printf("%d ",b[j]);
//
//
//        ag:continue;
//    }
//
//    return 0;
//}
//
////for(int i = 0; i < n; i++)
////    {
////        int flag = 0;
////        for(int j = 0; j < m; j++)
////        {
////            if(a[i] == b[j])
////            {
////                flag = 1;
////                break;
////            }
////        }
////        if(flag==0)
////            printf("%d",a[i]);
////    }
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[2][n];
//    for(int i=0;i<2;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//
//    }
//    int sum=0;
//    for(int i=0;i<n;i++)
////    {
////        sum+=a[0][i]*a[1][i];
////    }
////    printf("%d",sum);
////
////    return 0;
////}
//int main()
//{
//    int n,a[4][4];
//    for(int i=0;i<4;i++)
//    {
//        for(int j=0;j<4;j++)
////        {
////            scanf("%d",&a[i][j]);
////        }
////    }
////    scanf("%d",&n);
////    for(int i=0;i<4;i++)
////    {
////        for(int j=0;j<4;j++)
////        {
////            if(i>=j)
////                a[i][j]*=n;
////        }
////    }
////
////    for(int i=0;i<4;i++)
////    {
////        for(int j=0;j<4;j++)
////        {
////            printf("%4d",a[i][j]);
////        }
////        printf("\n");
////    }
////
////    return 0;
////}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][n],b[n][n];
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&a[i][j]);
//        }
//    }
//
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            scanf("%d",&b[i][j]);
//        }
//    }
//    for(int i =0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            a[i][j]+=b[i][j];
//        }
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            printf("%d ",a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
int main()
{
    int max;
    int n ;
    scanf("%d",&max);
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) break;
        for(int j=n-1;j>i;j--)
        {
            if(a[j]==0) continue;
            else
            {
                if(a[i]+a[j]<=max)
                {
                    a[i]+=a[j];
                    a[j]=0;
                    //flag=1;
                    break;
                }
            }
        }
        b[i]=1;
    }
    int cot=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]==1) cot++;
    }
    printf("%d",cot);
    return 0;
}
