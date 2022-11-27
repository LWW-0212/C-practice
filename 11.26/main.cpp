

//class Person
//{
//    public:
//    Person()
//    {
//        cout<<"普通构造函数的调用"<<endl;
//    }
//    Person(int a,int h)
//    {
//        m_age=a;
//        m_height=new int (h);
//        cout<<"有参构造函数的调用"<<endl;
//    }
//    Person(const Person &p)
//    {
//        cout<<"拷贝构造函数的调用"<<endl;
//        m_age=p.m_age;
//        m_height=new int (*p.m_height);//这是深拷贝
//    }
//
//    ~Person()
//    {
//        //因为我在堆区开辟了一块内存，所以要由我在析构函数中用delete释放
//        if(m_height!=NULL)
//        {
//            delete m_height;
//            m_height=NULL;
//        }
//        cout<<"析构函数的调用"<<endl;
//    }
//    int m_age;
//    int *m_height;
//};
//void test()
//{
//    Person p1;
//    Person p2(18,180);
//    cout<<"p2的年龄是："<<p2.m_age<<"  p2的身高是："<<*p2.m_height<<endl;
//    Person p3(p2);//拷贝构造函数
//    cout<<"p3的年龄是："<<p3.m_age<<"  p3的身高是："<<*p3.m_height<<endl;
//}
//int main()
//{
//    test();
//    cout << "Hello world!" << endl;
//    return 0;
//}
//class Person
//{
//    public:
//    Person(int a,int b,int c):m_a(a),m_b(b),m_c(c){}
//private:
//    int m_a;
//    int m_b;
//    int m_c;
//};
//int main()
//{
//    Person p(30,20,10);
//    cout<<p.m_a<<p.m_b<<p.m_c<<endl;
//    return 0;
//}



//#include<string>
//class Phone
//{
//public:
//    Phone(string pname)
//    {
//        cout<<"phone的构造函数调用"<<endl;
//        M_pname=pname;
//
//    }
//    ~Phone()
//    {
//        cout<<"phone的析构函数调用"<<endl;
//    }
//    string M_pname;
//};
//class Person
//{
//public:
//    Person(string name,string mphone):Name(name),M_phone(mphone)
//    {
//        cout<<"Person的构造函数调用"<<endl;
//    }
//
//    ~Person()
//        {
//            cout<<"Person的析构函数调用"<<endl;
//        }
//    string Name;
//    Phone M_phone;
//};
//void test01()
//{
//    Person p("张三","apple");
//    cout<<p.Name<<"handles   "<<p.M_phone.M_pname<<endl;
//}
//int main()
//{
//    test01();
//    return 0;
//}
//class date
//{
//public:
//    void setdate(int y,int m,int d)
//    {
//        yy=y;mm=m;dd=d;
//    }
//    void showdate()
//    {
//        cout<<yy<<"-"<<mm<<"-"<<dd<<endl;
//    }
//private:
//    int yy,mm,dd;
//};
//int main()
//{
//date today;
//int yy,mm,dd;
//cin>>yy>>mm>>dd;
//today.setdate(yy,mm,dd);
//today.showdate();
//return 0;
//}
//class computer
//{
//public:
//    int add(int a,int b)
//    {
//        return a+b;
//    }
//
//    int sub(int a,int b)
//    {
//        return a-b;
//    }
//    int mul(int a,int b)
//    {
//        return a*b;
//    }
//    int div(int a,int b)
//    {
//        return a/b;
//    }
//
//    int x,y;
//};
//int main()
//{
//	computer c;
//	int x,y;
//	char ch;
//	while(!cin.eof())
//	{
//		cin>>x>>ch>>y;
//		if(ch=='+')
//			cout<<x<<'+'<<y<<'='<<c.add(x,y)<<endl;
//		else if(ch=='-')
//			cout<<x<<'-'<<y<<'='<<c.sub(x,y)<<endl;
//		else if(ch=='*')
//			cout<<x<<'*'<<y<<'='<<c.mul(x,y)<<endl;
//		else if(ch=='/')
//			cout<<x<<'/'<<y<<'='<<c.div(x,y)<<endl;
//		ch='e';
//		//if(cin.eof()) break;
//	}
//	return 0;
//}
#include<stdio.h>
//class tangle
//{
//public:
//    tangle(int l,int w):ll(l),ww(w)
//    {
//        cout<<"周长"<<2*(l+w)<<"，"<<"面积"<<l*w<<endl;
//    }
//    int ll,ww;
//
//};
//int main()
//{
//    int l,w;
  //  scanf("%d,%d",&x,&y);
//    //cin>>l>>w;          如何用cin实现
//    tangle t1(l,w);
//
//    return 0;
//}
//int main()
//{
//    int i,j,k;
//    int n,cot=0;
//    cin>>n;
//    int sum=n*100;
//    for(i=0;i<=sum/5;i++)
//    {
//        for(j=0;j<=sum/2;j++)
//        {
//            for(k=0;k<=sum;k++)
//            {
//                if(i*5+j*2+k==sum)
//                {
//                    cot++;
//                    break;
//                }
//            }
//        }
//    }
//    cout<<"将"<<n<<"元人民币兑换成1、2、5分的硬币，共有"<<cot<<"种换法。"<<endl;
//    return 0;
//}
//void swap(int &a,int &b)
//{
//    if(a>b)
//    {
//        int tmp=a;
//        a=b;
//        b=tmp;
//    }
//}
//class Person
//{
//public:
//    //成员函数的重载
//    Person operator+(Person &p)
//    {
//        Person tmp;
//        tmp.a=this->a+p.a;
//        tmp.b=this->b+p.b;
//        return tmp;
//    }
//    int a;
//    int b;
//};
////全局函数的重载
////Person operator+(Person &p1,Person &p2)
////{
////    Person tmp;
////    tmp.a=p1.a+p2.a;
////    tmp.b=p1.b+p2.b;
////    return tmp;
////}
//int main()
//{
//    Person p1;
//    p1.a=10;
//    p1.b=20;
//    Person p2;
//    p2.a=10;
//    p2.b=20;
//    Person p3=p1+p2;
//    cout<<p3.a<<endl;
//    cout<<p3.b<<endl;
//    return 0;
//}
//class Person
//{
//public:
//    int a,b;
//};
//ostream &operator<<(ostream &cout,Person &p)
//{
//    cout<<"p.a= "<<p.a<<"  p.b= "<<p.b<<endl;
//    return cout;
//}
//void test01()
//{
//    Person p;
//    p.a=10;
//    p.b=20;
//    cout<<p<<"HelloWorld！"<<endl;
//}
//int main()
//{
//    test01();
//    return 0;
//}
#include <iostream>

using namespace std;
#include<math.h>
//int sroot(int i)
//{
//    return (int)sqrt(i);
//}
//long sroot(long i)
//{
//    return (long)sqrt(i);
//}
//double sroot(double i)
//{
//    return (double)sqrt(i);
//}
//int main()
//{
//	int i,x;
//	long l,y;
//	double d,z;
//	cin>>i>>l>>d;
//	x=sroot(i);
//	y=sroot(l);
//	z=sroot(d);
//	cout<<x<<','<<y<<','<<z<<endl;
//	return 0;
//}
//#include<iomanip>
//int Fibonacci(int i)
//{
//    if(i==1||i==2)
//        return 1;
//    else return Fibonacci(i-1)+Fibonacci(i-2);
//}
//int main()
//{
//    int i=0;
//    int *p=new int[20];
//    for(i=1;i<=20;i++)
//    {
//        p[i]=Fibonacci(i);
//        cout<<setw(10)<<p[i];
//        if(i%5==0)
//            cout<<endl;
//
//    }
//    delete []p;
//    return 0;
//}

//class Dog
//{
//public:
//    Dog(int a,int b):age(a),weight(b){}
//    void setAge(int a)
//    {
//        age=a;
//    }
//    void setWeight(int b)
//    {
//        weight=b;
//    }
//    int getAge()
//    {
//        return age;
//    }
//    int getWeight()
//    {
//        return weight;
//    }
//private:
//    int age;
//    int weight;
//};
//int main()
//{
//	Dog Jack(2,10);
//	cout<<"Jack is a Dog who is ";
//	cout<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight"<<endl;
//	Jack.setAge(7);
//	Jack.setWeight(20);
//	cout<<"Now Jack is ";
//	cout<<Jack.getAge()<<" years old and "<<Jack.getWeight()<<" pounds weight."<<endl;
//	return 0;
//}
//class Rectangle
//{
//public:
//    Rectangle(int a,int b,int c,int d):x1(a),y1(b),x2(c),y2(d){}
//    int getArea()
//    {
//        int area=(x2-x1)*(y1-y2);
//        return area;
//    }
//private:
//    int x1;
//    int y1;
//    int x2;
//    int y2;
//};
//int main()
//{
//	Rectangle rect(100,80,200,40);
//	cout<<"Area: "<<rect.getArea()<<endl;
//	return 0;
//}
//#define pai 3.14
//class Circle
//{
//public:
//    Circle(int a){}
//    float getCircumference()
//    {
//        return pai*r*2;
//    }
//    float getArea()
//    {
//        return pai*r*r;
//    }
//
//private:
//    int r;
//};
//int main()
//{
//	float radius;
//	cin>>radius;
//	Circle c(radius);
//	cout<<"半径为"<<radius<<"的圆的周长为："<<c.getCircumference()<<",面积为："<<c.getArea()<<endl;
//	return 0;
//}
//class Tree
//{
//public:
//    Tree(int a):ages(a){}
//    int  age()
//    {
//        return ages;
//    }
//    void grow(int b)
//    {
//        ages+=b;
//    }
//private:
//    int ages;
//};
//int main()
//{
//	Tree t(12);
//	cout<<"这棵树的年龄为"<<t.age()<<endl;
//	t.grow(4);
//	cout<<"这棵树的年龄为"<<t.age();
//	return 0;
//}
//#define PI 3.141592
//class cylinder
//{
//public:
//    cylinder(double a,double b):r(a),h(b){}
//    void vol()
//    {
//        double v=PI*r*r*h;
//        printf("volume is:  %.3lf",v);
//        //cout<<"volume is:  "<<v<<endl;
//    }
//private:
//    double r,h;
//
//};
//int main()
//{
//	double c,h;
//	cin>>c>>h;
//    cylinder x(c,h);
//    x.vol();
//	return 0;
//}

//class book
//{
//    public:
//  book(int a):qu(a)
//  {
//      price=5*qu;
//  }
//  void print()
//  {
//      cout<<"qu*price="<<qu*price<<endl;
//  }
//  private:
//  int qu,price;
//};
//int main()
//{
//	book b[5]={1,2,3,4,5};
//	for(int i=0;i<5;i++)
//		b[i].print();
//    return 0;
//}
class book
{
    public:
  book(int a):qu(a)
  {
      price=10*qu;
  }
  int print()
  {
      return qu*price;
  }
  private:
  int qu,price;
};
int main()
{
	book b[5]={6,7,8,9,10};
	book *p=&b[4];
	for(int i=4;i>=0;i++)
    {
        cout<<"qu*price="<<b[i].print()<<endl;
    }
	//please insert your codes under here.



    return 0;
}
