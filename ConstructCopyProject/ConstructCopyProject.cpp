#define _CRT_SECURE_NO_WARNINGS
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

class MyString
{
    char* str;
public:
    MyString(char ch) = delete;

    explicit MyString(int size)
    {
        str = new char[size];
        str[size - 1] = '\0';
    }

    MyString(const char* str)
    {
        this->str = new char[strlen(str) + 1];
        strcpy(this->str, str);
    }

    //MyString(const MyString& s) = delete;
    //MyString operator=(const MyString& s) = delete;

    friend std::ostream& operator<<(std::ostream& out, const MyString& s)
    {
        out << s.str;
        return out;
    }

    int Size() const
    {
        return strlen(this->str) + 1; //sizeof(this->str);
    }

};


MyClass FuncReturn()
{
    MyClass obj4;
    return obj4;
}

int main()
{
    /*int n = 10;
    int m = n;

    MyClass obj;*/

    // 1
    //MyClass obj2 = obj;

    // 2
    //Func(obj);

    // 3
    //obj = FuncReturn();


    // MyString
    MyString s1(10);
    std::cout << s1 << " " << s1.Size() << "\n";

    MyString s2("Hello");
    std::cout << s2 << " " << s2.Size() << "\n"


    //MyString s3('A');
    //std::cout << s3 << " " << s3.Size() << "\n";
}
