#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// we are using cstring which is module of c programming language to overload the given string and make a new string

// we can not redefine the built in operator to make changes which instead we can use overloading funtion for struct,union, enum and classes

// in c we can not make << left shift overloading

// no commutative is applied

typedef struct _String
{
    char *str;
} String;

String operator+(const String &s1, const String &s2)
{
    String s;
    s.str = (char *)malloc(strlen(s1.str) + strlen(s2.str) + 1); // Allocation
    strcpy(s.str, s1.str);
    strcat(s.str, s2.str);
    return s;
}
#if 0

String operator++(const String &s1){
    String s;
    s.str = (char *)malloc(strlen(s1.str)+2);
    strcpy(s.str, s1.str);
    strcat(s.str,"+");
    return s;
}
#endif


// enum overloading

enum E
{
    C0 = 0,
    C1 = 1,
    C2 = 2

};


E operator+(const E& a, const E& b){
    //overloaded  operator 
    unsigned int uia = a, uib = b;
    unsigned int t = (uia + uib)%3;
    return (E) t;


}

int main()
{
    String fname, lname, name;
    fname.str = strdup("Maharshi ");
    lname.str = strdup("vivekanand");
    name = (fname + lname);
    cout << name.str << endl;

    string fn = "Maharshi ";
    string ln = "vivekanand";
    cout << fn + ln;


    


    // enum overloading 
    E a = C1;
    E b = C2;
    int x = -1;
    x = a + b;// overloaded operator + for enum E
    cout<< x<< endl;// normally int prints as C1+ C2 but when  u overload it return the value with respect conditons given in the overloading function
}