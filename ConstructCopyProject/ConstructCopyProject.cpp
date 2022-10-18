#include <iostream>

class User
{
    char name[50];
    int age;
};

class Employe
{
    char name[50];
    int age;
    float salary;
};

class MyClass
{
public:
    MyClass()
    {
        std::cout << this << " object construct\n";
    }
    MyClass(const MyClass& obj)
    {
        std::cout << this << " object construct copy\n";
    }


    ~MyClass()
    {
        std::cout << this << " object destruct\n";
    }
};

void Func(MyClass obj3)
{
    std::cout << "func is work\n";
}

MyClass FuncReturn()
{
    MyClass obj4;
    return obj4;
}

int main()
{
    int n = 10;
    int m = n;

    MyClass obj;

    // 1
    //MyClass obj2 = obj;

    // 2
    //Func(obj);

    // 3
    //obj = FuncReturn();

}
