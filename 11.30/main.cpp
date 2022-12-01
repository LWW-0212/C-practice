//#include <iostream>
//
//using namespace std;
//
////int main()
////{
////    int n,x,y,z,h;
////    scanf("%d",&n);
////    int a[n][n];
////    for(int i=0;i<n;i++)
////    {
////        for(int j=0;j<n;j++)
////        {
////            scanf("%d",&a[i][j]);
////        }
////    }
////    for(int i=0;i<n;i++)
////    {
////        for(int j=0;j<n;j++)
////        {
////            if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0)
////                {
////                    x=i;
////                    y=j;
////                }
////                else if(a[i][j]==0&&a[i][j-1]==0&&a[i-1][j]==0)
////                {
////                    z=i;
////                    h=j;
////                }
////        }
////    }
////    int ret=(z-1-x)*(h-1-y);
////    printf("%d",ret);
////    return 0;
////}
#include<stdio.h>
////int main()
////{
////  int a[100],i;
////  float w,b;
////  for(i=0;i<100;i++)
////  {
////      scanf("%d\n",&a[i]);
////  }
////  i=1;
////  while(i<=a[0])
////  {
////      b=27+23+a[i]/3.0;
////      w=a[i]/1.2;
////      if(b<w)
////      {
////          printf("Bike\n");
////      }
////      else if(b>w)
////      {
////          printf("Walk\n");
////      }
////      else
////      {
////          printf("All\n");
////      }
////      i++;
////  }
////  return 0;
////}
//
//#include<stdio.h>
////int main()
////{
////    int n;
////    scanf("%d",&n);
////    for(int i=0;i<n;i++)
////    {
////        int l;
////        scanf("%d",&l);
////        double t=l/1.2;
////        double t2=l/3.0+50;
////        if(t<t2)
////        printf("Walk\n");
////        else if(t>t2)
////            printf("Bike\n");
////        else printf("All\n");
////    }
////    return 0;
////}
//int fun(int);
//int main()
//{
//    int i,j,max=0;
//    int a[4][2];
//    for(i=0;i<4;i++)
//    {
//        scanf("%d %d",a[i][0],a[i][1]);
//        int m=a[i][0];
//        int n=a[i][1];
//        for(int k=m;k<n;k++)
//        {
//            if(max<fun(k))
//                max=fun(k);
//        }
//        printf("%d %d %d\n",a[i][0],a[i][1],max);
//        max=0;
//    }
//
//}
//int fun(int i)
//{
//    int k=1;
//     while(i>1)
//        {
//            if(i%2==0)
//        {
//            i=i/2;
//            k=k+1;
//        }
//        else
//        {
//            i=i*3+1;
//            k=k+1;
//        }
//
//        }
//
//        return k;
//}
//int main()
//{
//
//    int m,n,max,k;
//    max=0;
//    int b[4][2];
//
//    for (int i=0;i<4;i++)
//    {
//        scanf("%d %d",&b[i][0],&b[i][1]);
//        m=b[i][0];
//        n=b[i][1];
//        for(int c=m;c<=n;c++)
//            {
//               k=fun(c) ;
//               if(k>=max)
//               {
//                   max=k;
//               }
//
//            }
//             printf("%d %d %d\n",b[i][0],b[i][1],max);
//             max=0;
//    }
//
//    return 0;
//}
int main()
{
    int n;
    scanf("%d",&n);
    int tmp1=1,sum=0,wei=1;
    while(n)
    {
        if(wei%2==n%2)
            sum+=tmp1;
        n=n/10;
        tmp1=tmp1*2;
        wei++;
    }
    printf("%d",sum);
    return 0;
}
