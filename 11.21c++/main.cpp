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
//    int *pa=new int[10];//ע��������������
//    //pa���������׵�ַ
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
//int a=10;//ȫ�ֱ���
//const int c_a=10;//��̬ȫ�ֱ���
//int main()
//{
//    int b=10;//�ֲ�����
//    const int c_b=10;//��̬�ֲ�����
//
//    cout<<"a�ĵ�ַ��:    "<<(int)&a<<endl;
//    cout<<"c_a�ĵ�ַ��:  "<<(int)&c_a<<endl;
//    cout<<"b�ĵ�ַ��:    "<<(int)&b<<endl;
//    cout<<"c_b�ĵ�ַ��:  "<<(int)&c_b<<endl;
//    cout<<"�ַ��������ĵ�ַ��:  "<<(int)&"Hello World"<<endl;
//    return 0;
//}
