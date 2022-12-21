#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        int m,cot=0,flag=0;
//        scanf("%d",&m);
//        for(int j=1;j<10000;j++)
//        {
//            int x=j;
//            while(x)
//            {
//                if(x%10==1)
//                    cot++;
//                x=x/10;
//            }
//            if(cot>=m)
//                {
//                    printf("%d\n",j);
//                    flag=1;
//                    break;
//                }
//        }
//        if(flag==0)
//            printf("zzz\n");
//
//    }
//    return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int a[n][2],Box[n];
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d",&a[i][0]);
//        Box[i]=100;
//    }
//    for(int i=0;i<n;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            if(a[i][0]<=Box[j])
//            {
//                Box[j]-=a[i][0];
//                a[i][1]=j+1;
//                break;
//            }
//        }
//    }
//    int max=0;
//    for(int i=0;i<n;i++)
//    {
//        printf("%d %d\n",a[i][0],a[i][1]);
//        if(max<a[i][1])
//        {
//            max=a[i][1];
//        }
//    }
//    printf("%d",max);
//    return 0;
//}
//
//
//
////#include <stdio.h>
////#include <stdlib.h>
////
////int main()
////{
////    int n;
////    scanf("%d", &n);
////    while(n--)
////    {
////        int t;
////        scanf("%d", &t);
////        int sum = 0;
////        int flag = 0;
////        for(int i = 1; i < 10000; i++)
////        {
////            int x = i;
////            while(x!=0)
////            {
////                int temp = x%10;
////                if(temp == 1)
////                    sum++;
////                x = x/10;
////            }
////            if(sum >= t)
////            {
////                printf("%d\n", i);
////                flag = 1;
////                break;
////            }
////        }
////        if(flag == 0)
////            printf("zzz\n");
////    }
////    return 0;
////}
////
int main()
{
    int num=0,i=-1;
    int a[70][2];
    do
    {
        i++;
        scanf("%d %d",&a[i][0],&a[i][1]);
        if(a[i][0]<0&&a[i][1]<0)
            break;

    }while(1);

    for(int j=0;j<i-1;j++)
    {
        for(int k=0;k<i-2-j;k++)
          {
                if(a[k][1]<a[k+1][1])
                {
                    int tmp =a[k][1];
                    a[k][1]=a[k+1][1];
                    a[k+1][1]=tmp;
                    tmp =a[k][0];
                    a[k][0]=a[k+1][0];
                    a[k+1][0]=tmp;
                }
          }
    }
    for(int j=0;j<i;j++)
    {
        printf("%d ",a[j][1]);
    }

    int find,index=0,flag=0;
    scanf("%d",&find);
     for(int k=0;k<i-1;k++)
    {
        if(a[k][0]==find)
        {
            index=k;
            flag=1;
            break;
        }
    }

    if(flag==0) printf("\nnot find!");
        else
    printf("\n%d %d",a[index][0],a[index][1]);
}
