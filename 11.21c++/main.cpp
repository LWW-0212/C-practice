#include <iostream>

using namespace std;

int &fun()
{
    static int a=10;
    return a;
}
int main()
{

    int &a=fun();
    cout<<"a="<<a<<endl;
    fun()=1000;
    cout<<"a="<<a<<endl;

}
//void Swap(int &a,int &b)
//{
//    int tmp=a;
//    a=b;
//    b=tmp;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    Swap(a,b);
//    cout<<"a="<<a<<endl;
//    cout<<"b="<<b<<endl;
//    return 0;
//}
//int * test()
//{
//    int *pa=new int[10];//注意这里是中括号
//    //pa接受数组首地址
//    for(int i=0;i<10;i++)
//    {
//        pa[i]=100+i;
//    }
//    for(int i=0;i<10;i++)
//    {
//        cout<<pa[i]<<endl;
//    }
//}
//int main()
//{
//    test();
//    return 0;
//}
//int *name()
//{
//    int *p=new int(10);
//    return p;
//}
//int main()
//{
//    int* pp=name();
//    cout<<*pp<<endl;
//    cout<<*pp<<endl;
//    return 0;
//}
//int a=10;//全局变量
//const int c_a=10;//静态全局变量
//int main()
//{
//    int b=10;//局部变量
//    const int c_b=10;//静态局部变量
//
//    cout<<"a的地址是:    "<<(int)&a<<endl;
//    cout<<"c_a的地址是:  "<<(int)&c_a<<endl;
//    cout<<"b的地址是:    "<<(int)&b<<endl;
//    cout<<"c_b的地址是:  "<<(int)&c_b<<endl;
//    cout<<"字符串常量的地址是:  "<<(int)&"Hello World"<<endl;
//    return 0;
//}
