#include <iostream>

#include "string.h"

using namespace std;

int main()
{
    MyString s("word");
    s.print();
    cout << "size: " << s.Size() << endl;
    s.addChar('l', 4);
    cout << "->" << endl;
    s.print();
    cout << "size: " << s.Size() << endl;

    cout << "----------------------" << endl;

    MyString s2("house");
    s2.print();
    cout << "size: " << s2.Size() << endl;
    s2.replaceChar('m', 1);
    cout << "->" << endl;
    s2.print();
    cout << "size: " << s2.Size() << endl;

    cout << "----------------------" << endl;

    MyString s3("world");
    s3.print();
    cout << "size: " << s3.Size() << endl;
    s3.deleteChar(4);
    cout << "->" << endl;
    s3.print();
    cout << "size: " << s3.Size() << endl;

    cout << "----------------------" << endl;

    MyString s4("Hello, ");
    s4.print();
    cout << "size: " << s4.Size() << endl;
    s4.concatenate(s);
    cout << "->" << endl;
    s4.print();
    cout << "size: " << s4.Size() << endl;

    cout << "----------------------" << endl;

    MyString s5 = s4;
    s5.deleteChar(2);
    s5.print();
    cout << "size: " << s5.Size() << endl;
    s4.print();
    cout << "size: " << s4.Size() << endl;

    cout << "----------------------" << endl;

    MyString s6("text");
    s6 = s4;
    s6.deleteChar(2);
    s6.print();
    cout << "size: " << s6.Size() << endl;
    s4.print();
    cout << "size: " << s4.Size() << endl;

    cout << "----------------------" << endl;

    MyString s7 = "Hello, ", s8 = "world";
    s7.print();
    cout << "size: " << s7.Size() << endl;
    s7 + s8;
    cout << "->" << endl;
    s7.print();
    cout << "size: " << s7.Size() << endl;

    cout << "----------------------" << endl;




    return 0;
}
