////#include <iostream>
////
////using namespace std;
////
//////class student
//////{
//////private:
//////    string name;
//////    int num;
//////public:
//////    void setname(string str)
//////    {
//////        name=str;
//////
//////    }
//////    string showname()
//////    {
//////        return name;
//////    }
//////};
//////int main()
//////{
//////    student s1;
//////    s1.setname("苍");
//////    cout<<"her name is"<<s1.showname()<<endl;
//////    return 0;
//////}
////////class student
//////{
//////public:
//////    string ID;
//////    int num;
//////    //给学好赋值
//////    private:
//////    void Setname(string id)
//////    {
//////        ID=id;
//////    }
//////    void Setnum(int n)
//////    {
//////        num=n;
//////    }
//////
//////    void showstudent()
//////    {
//////        cout<<"姓名是：  "<<ID<<"\n"<<"学号是： "<<num<<endl;
//////    }
//////};
//////int main()
//////{
//////    student s1;
//////    s1.Setname("张三哥哥");
//////    //zhang.ID="zhangsan";
//////    s1.Setnum(123);
//////    //zhang.num=123131;
//////    s1.showstudent();
////////    return 0;
////////}
//////class Cube
//////{
//////public:
//////    //设置长宽高
//////    void SET(int l,int w,int h)
//////    {
//////        L=l;W=w;H=h;
//////    }
//////    //计算表面积
//////    int S_caculate()
//////    {
//////        return 2*(L*W+L*H+W*H);
//////    }
//////    //计算体积
//////    int V_caculate()
//////    {
//////        return L*W*H;
//////    }
//////private:
//////    int L,W,H;
//////
//////};
//////int main()
//////{
//////    Cube c1;
//////    c1.SET(10,10,10);
//////
//////    cout<<"立方体的表面积是："<<c1.S_caculate()<<endl;
//////    cout<<"立方体的体积是：  "<<c1.V_caculate()<<endl;
//////    return 0;
//////}
////class Point
////{
////public:
////    //获取横坐标
////    void SetX(int x)
////    {
////        X=x;
////    }
////    int GetX()
////    {
////        return X;
////    }
////    //获取纵坐标
////    void SetY(int y)
////    {
////        Y=y;
////    }
////    int GetY()
////    {
////        return Y;
////    }
////private:
////    int X;
////    int Y;
////};
////class Circle
////{
////public:
////    //写入半径
////    void Setr(int r)
////    {
////        R=r;
////    }
////    //读出半径
////    int Getr()
////    {
////        return R;
////    }
////    //设置圆心
////    void SetO_point(Point p)
////    {
////        O_point=p;
////    }
////    //读取圆心
////    Point GetO_point()
////    {
////        return O_point;
////    }
////
////private:
////    int R;
////    Point O_point;
////};
//////判断电和圆的位置关系
////void ISIN(Point &p,Circle &c)
//////{
//////    //计算点和圆心的距离的平方
//////    int l=
//////    (p.GetX()-c.GetO_point().GetX())*(p.GetX()-c.GetO_point().GetX())+
//////    (p.GetY()-c.GetO_point().GetY())*(p.GetY()-c.GetO_point().GetY());
//////    //计算半径
//////    int r=c.Getr();
//////    if(l==r*r) printf("点在圆上");
//////    else if(l>r*r) printf("点在圆外");
//////    else if(l<r*r) printf("点在圆内");
//////}
//////int main()
//////{
//////    //实例化圆
//////    Circle c1;
//////    c1.Setr(10);
//////    c1.SetO_point.SetX(10);
//////    c1.SetO_point.SetY(0);
//////    //实例化点
//////    Point p;
//////    p.SetX(10);
//////    p.SetY(10);
//////    ISIN(p,c1);
//////    return 0;
//////}
////#include<stdio.h>
////#include<string.h>
//////int main()
//////{
//////    char a[100];
//////    fgets(a,sizeof(a),stdin);
//////    int i=0,cot=0,flag=1;
//////    char ch;
//////    scanf("%c",&ch);
//////    while(a[i]!='\0')
//////    {
//////        if(a[i]==ch)
//////            {
//////                cot=i;
//////                flag=0;
//////            }
//////        i++;
//////    }
//////    if(flag==0)
//////    printf("%d",cot+1);
//////    else
//////        printf("0\n");
//////}
//////////10.32
//////int main()
//////{
//////    int n,j,i;
//////    char a[100]={0};
//////    scanf("%d",&n);
//////    for(i=0;i<n;i++)
//////    {
//////        j=0;
//////
//////        int b[123]={0};
//////        scanf("%s",&a);
//////        //fgets(a,100,stdin);
//////        while(a[j]!='\0')
//////        {
//////            b[(int)a[i]]+=1;
//////            j++;
//////        }
//////        int flag=1;
//////        for(j=0;j<123;j++)
//////        {
//////            if(b[j]==1)
//////            {
//////                printf("%c",a[j]);
//////                flag=0;
//////            }
//////        }
//////        if(flag==0)
//////            printf("NO");
//////    }
//////
//////    return 0;
//////}
//////int main()
//////{
//////    int n,l,sum=0,i;
//////    char a[1000],ch;
//////    int sign=1;
//////    scanf("%d",&n);
//////    while(n--)
//////    {
//////        //scanf("%s",&a);
//////        fgets(a,1000,stdin);
//////        l=strlen(a);
//////        for(ch='a';ch<'z';ch++)
//////        {
//////            for(i=0;i<l;i++)
//////            {
//////                if(ch==a[i])
//////                    sum++;
//////            }
//////            if(sum==1)
//////            {
//////                sign=0;
//////                break;//因为只要寻找第一个
//////            }
//////            sum=0;//局部回零
//////        }
//////        if(sign==1)
//////            printf("NO\n");
//////        else
//////            printf("%c\n",ch);
//////        sum=0;
//////        sign=1;
//////    }
//////    return 0;
////////}
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
//
////int main()
////{
////    int n;
////    scanf("%d", &n);
////    while(n--)
////    {
////        char str[110];
////        scanf("%s", str);
////        getchar();
////        int flag = 0;
////        for(int i = 0; str[i] != '\0'; i++)
////        {
////            int flag1 = 0;
////            for(int j = 0; str[j]!='\0'; j++)
////            {
////                if(j == i)
////                    continue;
////                if(str[j] == str[i])
////                {
////                    flag1 = 1;
////                    break;
////                }
////            }
////            if(flag1 == 0)
////            {
////                printf("%c\n", str[i]);
////                flag = 1;
////                break;
////            }
////        }
////        if(flag == 0)
////            printf("NO\n");
////    }
////    return 0;
////}
//
//#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////
////int main()
////{
////    char str[100], ch;
////    fgets(str,100,stdin);
////    //scanf("%s",&str);
////    //getchar();
////    //scanf("%c", &ch);
////    int flag = 0;
////    int in;
////    for(int i = 0; str[i] != '\0'; i++)
////    {
////        if(str[i] == ch)
////        {
////            in = i;
////            flag = 1;
////        }
////    }
////    if(flag == 0)
////        printf("0");
////    else
////        printf("%d", in+1);
////    return 0;
////}
//int main()
//{
//    int n,i,j,flag=1,flag1=1;
//    scanf("%d",&n);
//    while(n--)
//    {
//        flag=1;
//        char str[100],ch;
//        scanf("%s",str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            flag1=1;
//            for(j=0;str[j]!='\0';j++)
//            {
//                if(i==j) continue;
//                else if(str[i]==str[j])
//                {
//                    flag1=0;
//                    break;
//                }
//            }
//            if(flag1==1)
//            {
//                printf("%c",str[i]);
//                flag=0;
//                break;
//            }
//        }
//        if(flag==1)
//            printf("NO");
//    }
//    return 0;
//}
#include <stdlib.h>
