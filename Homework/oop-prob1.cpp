#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

class Base {
private:
    int x;
    string name;
    char color;
protected:
public:
    Base();
    Base(int x, string m, char c);
    bool samelength(Base j, Base k);
    bool samename (Base j, Base k);
};

class Derived : private Base {
private:
    Base a;
    int y;
    string breed;
protected:
public:
    Derived();
    Derived(int x, string m, char c, int y, string d);
    bool sameName (Derived j, Derived k);
    bool sameBreed(Derived j, Derived k);
};

int main(){
   return 0; 
}