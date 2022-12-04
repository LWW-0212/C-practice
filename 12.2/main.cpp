////#include <iostream>
////
////using namespace std;
////
////class Document
////{
////public:
////    string name;
////    Document(string str)
////    {
////        name=str;
////    }
////};
////class Book:public Document
////{
////public:
////
////    Book(string str,int a):Document(str),pa(a){}
////    void printNameOf()
////    {
////        cout<<"Name of book: "<<name<<endl;
////    }
////private:
////
////    int pa;
////};
////int main()
////{
////    Document a("Document1");
////    Book b("Book1",100);
////    b.printNameOf();
////    return 0;
////}
#include <iostream>

using namespace std;
//class Rectangle
//{
//public:
//    Rectangle(int a,int b):l(a),w(b){}
//    void getArea()
//    {
//        cout<<"The area of the Rectangle is "<<l*w<<endl;
//    }
//
//    int l,w;
//};
//class Circle
//{
//public:
//    Circle(int a):m_r(a){}
//    void getArea()
//    {
//        cout<<"The area of the Circle is "<< m_r*m_r*3.14<<endl;
//    }
//private:
//    int m_r;
//};
//class Square:public Rectangle
//{
//public:
//    Square(int l):Rectangle(l,l){ }
//    void getArea()
//    {
//        cout<<"The area of the Square is "<<l*l<<endl;
//    }
//    private: int lol;
//};
//int main()
//{
//    Circle c(5);
//    c.getArea();
//    Rectangle r(4,6);
//    r.getArea();
//    Square s(5);
//    s.getArea();
//    return 0;
//}

class Mammal
{
public:
    void getA(int a)
    {
        age=a;
    }
    void getw(int b)
    {
        wei=b;
    }
    Mammal()
    {
        cout<<"Mammal constructor......"<<endl;
    }
    ~Mammal()
    {
        cout<<"Mammal destructor......"<<endl;
    }
private:
    int age;
    int wei;
};
class Dog:public Mammal
{
    string color;
public:
    Dog(int a,int b,string c)
    {

    }
    Dog()
    {
        cout<<"Dog constructor......"<<endl;
    }
    ~Dog()
    {
        cout<<"Dog destructor......"<<endl;
    }
    void speak()
    {
        cout<<"Mammal sound!"<<endl;
    }
    void wagtail()
    {
        cout<<"Tail wagging......"<<endl;
    }
    void getAge(int ag)
    {
        Mammal(age)=ag;
    }
};
int main()
{
      Dog jack(2,20,"grown");
      jack.speak();
      jack.wagtail();
      cout<<"jack is "<<jack.getAge()<<" years old, "<<jack.getWeight()<<" pounds, "<<jack.getColor()<<"."<<endl;
      return 0;
}
