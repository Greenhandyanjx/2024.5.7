#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
#include <vector>
#include<string.h>
#include <iostream>
using namespace std;
struct A
{
private:
    int i, j, k;
public:
    int f();
    void g();
};
int A::f()
{
    return i + j + k;
}
void A::g()
{
    i = j = k = 0;
}
class B
{
    int i, j, k;
public:
    int f();
    void g();
};
int B::f()
{
    return i + j + k;
}
void B::g()
{
    i = j = k = 0;
}
int main()
{
    A a;
    B b;
    a.f();
    a.g();
    b.f();
    b.g();
    cout << "Identical results would be produced";
}

//#include <iostream>
//using namespace std;
//struct X;
//struct Y
//{
//    void f(X*);
//};
//struct X
//{
//private:
//    int i;
//public:
//    void initialize();
//    friend void g(X*, int);
//    friend void Y::f(X*);
//    friend struct Z;
//    friend void h();
//};
//void X::initialize()
//{
//    i = 0;
//}
//void g(X* x, int i)
//{
//    x->i = i;
//}
//void Y::f(X* x)
//{
//    x->i = 47;
//    cout << x->i;
//}
//struct Z
//{
//private:
//    int j;
//public:
//    void initialize();
//    void g(X* x);
//};
//void Z::initialize()
//{
//    j = 99;
//}
//void Z::g(X* x)
//{
//    x->i += j;
//}
//void h()
//{
//    X x;
//    x.i = 100;
//    cout << x.i;
//}
//int main()
//{
//    X x;
//    Z z;
//    z.g(&x);
//    cout << "Data accessed";
//}
//#include <iostream>
//using namespace std;
//class Base1
//{
//protected:
//    int SampleDataOne;
//public:
//    Base1()
//    {
//        SampleDataOne = 100;
//    }
//    ~Base1()
//    {
//    }
//    int SampleFunctOne()
//    {
//        return SampleDataOne;
//    }
//};
//class Base2
//{
//protected:
//    int SampleDataTwo;
//public:
//    Base2()
//    {
//        SampleDataTwo = 200;
//    }
//    ~Base2()
//    {
//    }
//    int SampleFunctTwo()
//    {
//        return SampleDataTwo;
//    }
//};
//class Derived1 : public Base1, public Base2
//{
//    int MyData;
//public:
//    Derived1()
//    {
//        MyData = 300;
//    }
//    ~Derived1()
//    {
//    }
//    int MyFunct()
//    {
//        return (MyData + SampleDataOne + SampleDataTwo);
//    }
//};
//int main()
//{
//    Base1 SampleObjOne;
//    Base2 SampleObjTwo;
//    Derived1 SampleObjThree;
//    cout << SampleObjThree.Base1::SampleFunctOne() << endl;
//    cout << SampleObjThree.Base2::SampleFunctTwo() << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//struct a
//{
//    int count;
//};
//struct b
//{
//    int* value;
//};
//struct c : public a, public b
//{
//};
//int main()
//{
//    c* p = new c;
//    p->value = 0;
//    cout << "Inherited";
//    return 0;
//}
//
//using namespace std;
//class Base
//{
//public:
//    virtual void print() const = 0;
//};
//class DerivedOne : public Base
//{
//public:
//    void print() const
//    {
//        cout << "DerivedOne\n";
//    }
//};
//class DerivedTwo : public Base
//{
//public:
//    void print() const
//    {
//        cout << "DerivedTwo\n";
//    }
//};
//class Multiple : public DerivedOne, public DerivedTwo
//{
//public:
//    void print() const
//    {
//        DerivedTwo::print();
//    }
//};
//int main()
//{
//    int i;
//    Multiple both;
//    DerivedOne one;
//    DerivedTwo two;
//    Base* array[3];
//    array[0] = &both;
//    array[1] = &one;
//    array[2] = &two;
//    array[i]->print();
//    return 0;
//}
//class polygon
//{
//protected:
//    int width, height;
//public:
//    void set_values(int a, int b)
//    {
//        width = a; height = b;
//    }
//};
//class output1
//{
//public:
//    void output(int i);
//};
//void output1::output(int i)
//{
//    cout << i << endl;
//}
//class rectangle : public polygon, public output1
//{
//public:
//    int area()
//    {
//        return (width * height);
//    }
//};
//class triangle : public polygon, public output1
//{
//public:
//    int area()
//    {
//        return (width * height / 2);
//    }
//};
//int main()
//{
//    rectangle rect;
//    triangle trgl;
//    rect.set_values(4, 5);
//    trgl.set_values(4, 5);
//    rect.output(rect.area());
//    trgl.output(trgl.area());
//    return 0;
//}
//class Creature {
//public:
//    Creature(const char* _sound, int _age);
//    Creature(const Creature& other);
//    virtual ~Creature();
//    Creature& operator=(const Creature& other);
//
//    //print out info: "Creature with age say sound"
//    virtual void say()const;
//
//    int getAge()const;
//    //friend std::ostream& operator<<(std::ostream& os, const Animal& _animal);
//private:
//    char* sound;
//    int age;
//};
//class Human : public Creature {
//public:
//    Human(const char* _languages, const char* _sound, int _age);
//    Human(const char* _languages, const Creature& _creature);
//    Human(const Human& other);
//    ~Human();
//    Human& operator=(const Human& other);
//
//    //print out info: "Human with age speak languages"
//    void say()const;
//
//    //add new_language to the end of languages, split by ','
//    void studyLanguage(const char* new_language);
//    //friend std::ostream& operator<<(std::ostream& os, const People& _people);
//private:
//    char* languages;
//};
//int main()
//{   Creature dog("WangWang", 8);
//    Human Lihua("Chinese", "null", 46);
//
//    Creature* ptr = &dog;
//    ptr->say();
//
//    ptr = &Lihua;
//    ptr->say();
//    Lihua.studyLanguage("English");
//
//    Human ProfessorJ = Lihua;
//    ptr = &ProfessorJ;
//    ProfessorJ.studyLanguage("Japanese");
//    ProfessorJ.studyLanguage("German");
//    ProfessorJ.say();
//    string learn_language;
//    cin >> learn_language;
//    ProfessorJ.studyLanguage(learn_language.c_str());
//    ptr->say();
//    return 0;
//}
//Creature::Creature(const char* _sound, int _age) :age(_age)
//{
//    if (sound != NULL)
//        delete[]sound;
//    sound = new char[100];
//    if(_sound!=NULL)   
//    memcpy(sound, _sound, strlen(_sound) + 1);
//
//}
//Creature::Creature(const Creature& other)
//{
//    age = other.getAge();
//    // if(sound!=NULL)
//    // delete []sound;
//    // sound=new char[100];
//    // for(int i=0;other.sound[i]!='\0';i++)
//    // {
//    //     sound[i]=other.sound[i];
//    // }
//
//}
//Creature::~Creature()
//{
//    delete[]sound;
//}
//Creature& Creature::operator=(const Creature& other)
//{
//    age = other.getAge();
//    // for(int i=0;other.sound[i]!='\0';i++)
//    // {
//    //     sound[i]=other.sound[i];
//    // }
//    return *this;
//}
//
////print out info: "Creature with age say sound"
//void Creature::say()const
//{
//    cout << "Creature with age " << age << " say ";
//    for (int i = 0; i < strlen(sound); i++)
//    {
//        cout << sound[i];
//    }
//    cout << endl;
//}
//
//int Creature::getAge()const
//{
//    return age;
//}
//Human::Human(const char* _languages, const char* _sound, int _age) :Creature(_sound, _age)
//{
//    if (languages != NULL)
//        delete[]languages;
//    languages = new char[100];
//    memcpy(languages, _languages, strlen(_languages) + 1);
//}
//Human::Human(const char* _languages, const Creature& _creature) :Creature(_creature)
//{
//    if (languages != NULL)
//        delete[]languages;
//    languages = new char[100];
//    memcpy(languages, _languages, strlen(_languages) + 1);
//}
//Human::Human(const Human& other) :Creature(NULL, other.getAge())
//{
//    if (languages != NULL)
//        delete[]languages;
//    languages = new char[100];
//    // age=other.getAge();
//    memcpy(languages, other.languages, strlen(other.languages) + 1);
//}
//Human::~Human()
//{
//    delete[]languages;
//    // delete []sound;
//}
//Human& Human::operator=(const Human& other)
//{
//    Creature(NULL, other.getAge());
//    // for(int i=0;other.sound[i]!='\0';i++)
//    // {
//    //     sound[i]=other.sound[i];
//    if (languages != NULL)
//        delete[]languages;
//    languages = new char[100];
//    // }
//    memcpy(languages, other.languages, strlen(other.languages) + 1);
//    return *this;
//}
//
////print out info: "Human with age speak languages"
//void Human::say()const
//{
//    cout << "Human with age " << getAge() << " speak ";
//    for (int i = 0; i < strlen(languages); i++)
//    {
//        cout << languages[i];
//    }
//    cout << endl;
//}
//
////add new_language to the end of languages, split by ','
//void Human::studyLanguage(const char* new_language)
//{
//    int i = strlen(languages);
//    languages[i] = ',';
//    i++;
//    for (int j = 0; j < strlen(new_language); j++, i++)
//    {
//        languages[i] = new_language[j];
//    }
//}