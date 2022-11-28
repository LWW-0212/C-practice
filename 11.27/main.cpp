////#include <iostream>
////
////using namespace std;
//////class book
//////{
//////public:
//////  book(int a):qu(a)
//////  {
//////      price=10*qu;
//////  }
//////  void print()
//////  {
//////      cout<<"qu*price="<<qu*price<<endl;
//////  }
//////  private:
//////  int qu,price;
//////};
//////int main()
//////{
//////	book b[5]={6,7,8,9,10};
//////	book *p=&b[4];
//////	//please insert your codes under here.
//////	for(int i=4;i>=0;i--)
//////	{
//////	    p->print();
//////	    p--;
//////	}
//////
//////
//////    return 0;
//////}
////
////class student
////{
////    int num;
////    string name;
////    int grade;
////static double sum;
//// static int count;
////   static double aver;
////public:
////    student(int a,string b,int c):num(a),name(b),grade(c)
////    {
////        count++;
////  sum+=grade;
////  aver=sum/count;
////    }
////    void print()
////    {
////        cout<<num<<"   "<<name<<"   "<<grade<<endl;
////    }
////     static int get_count()
////    {
////        return count;
////    }
////    static double get_avg()
////    {
////        return aver;
////    }
////};
////
////int main()
////{
////	student s1(201601,"john",85),s2(201602,"mike",90),s3(201603,"june",95);
////	s1.print();
////	s2.print();
////	s3.print();
////	cout<<"共有"<<student::get_count()<<"位学生，平均成绩为："<<student::get_avg()<<endl;
////    return 0;
////}
//#include<iostream>
//using namespace std;
//const float PI=3.14;
//const float FENCE_PRICE=35;
//const float CONCRETE_PRICE=20;
////please insert your codes here
//class Circle
//{
//private:
//    float m_r;
//public:
//    Circle(float r)
//    {
//        m_r=r;
//    }
//    float circumference()
//    {
//        return 2*PI*m_r;
//    }
//    float area()
//    {
//        return PI*m_r*m_r;
//    }
//};
//
//
//
//int main()
//{
//	float radius;
//	cout<<"Enter the radius of the pool:"<<endl;
//	cin>>radius;
//	Circle pool(radius);
//	Circle poolRim(radius+3);
//	cout<<"Fencing Cost is $"<<poolRim.circumference()*FENCE_PRICE<<endl;
//	cout<<"Concrete Cost is $"<<(poolRim.area()-pool.area())*CONCRETE_PRICE<<endl;
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//    double h,total,ret;
//    scanf("%lf",&h);
//    total=h;
//    for(int i=0;i<9;i++)
//    {
//        h=h/2;
//        total+=h*2;
//    }
//    printf("The total is:%.3f\n",total);
//    printf("The tenth is:%.3f\n",h/2);
//}
//int main()
//{
//    int jin,yin,tong;
//    int n;;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//        scanf("%d %d %d",&jin,&yin,&tong);
//        printf("%d\n",jin+yin+tong);
//    }
//    return 0;
//}
//int main()
//{
//    int p,e,a,r;
//    for(int p=0;p<10;i++)
//    {
//        for(int e=0;e<10;e++)
//        {
//            for(int a=0;a<10;a++)
//            {
//                for(int r=0;r<10;r++)
//                {
//                    if((p*1000+e*100+a*10+r)-(a*100+r*10+a)==(p*100+e*10+a))
//                    printf("pear=%d\n",p*1000+e*100+a*10+r);
//                }
//            }
//        }
//
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int l=2*n-1;
//    for(int i=1;i<=n-1;i++)
//    {
//        for(int j=1;j<=i;j++) printf("*");
//        for(int k=1;k<=l-i*2;k++) printf(" ");
//        for(int j=1;j<=i;j++) printf("*");
//        printf("\n");
//    }
//    for(int i=0;i<l;i++) printf("*");
//    return 0;
//}
//int main()
//{
//    int n=0;
//    scanf("%d",&n);
//    for(int i=n;i>1;i--)
//    {
//        printf("*");
//        for(int j=0;j<i-2;j++) printf(" ");
//        printf("*\n");
//    }
////    printf("*\n");
////    for(int i=2;i<=n;i++)
////    {
////        printf("*");
////        for(int j=0;j<i-2;j++) printf(" ");
////        printf("*\n");
////    }
////    return 0;
////}
//int main()
//{
//    int n,k=0;
//    scanf("%d",&n);
//
//    int l=2*n-1;
//    for(int i=0;i<l;i++) printf("*");
//    printf("\n");
//    for(int i=1;i<n-1;i++)
//    {
//        for(int j=0;j<i;j++) printf(" ");
//        printf("*");
//        for(int j=0;j<2*n-3-2*i;j++) printf(" ");
//        printf("*\n");
//    }
//    for(int i=0;i<n-1;i++) printf(" ");
//    printf("*\n");
////else
////{
////    int l=2*n;
////    for(int i=0;i<l;i++) printf("*");
////    printf("\n");
////    for(int i=n;i>0;i-=2)
////    {
////        k=k+1;
////        for(int j=0;j<k;j++) printf(" ");
////        printf("*");
////        for(int j=0;j<i;j++) printf(" ");
////        printf("*\n");
////    }
////    for(int i=0;i<n-1;i++) printf(" ");
////    printf("*\n");
////    }
//}
#include<math.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int i=(int)sqrt(n);
    for(int a=i;a>0;a--)
    {
        for(int b=i;b<=n;b++)
        {
            if(a*b>n) break;
            if(a*b==n)
            {
                flag=1;
                printf("%d",a);
                break;
            }
        }
        if(flag==1) break;
    }
    return 0;
}
