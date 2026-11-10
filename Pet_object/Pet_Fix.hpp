#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

//boundary: 1) pets cannot be larger than 2100 metric tons 2) names cannot be larger than 10 characters

class Pet{
private:
    int size;
    int food;
    string name;
public:
    bool sameSizePet(Pet a, Pet b); // declared bool
    bool sameNamePet(Pet a, Pet b);
    void P_p();
    Pet();
    Pet(int s, int f, string n);
};

class Dog : private Pet{
    private:
        Pet a;     
    public:
    void P();
        Dog();
        Dog(int s, int f, string n);
};

Dog::Dog(){
    a = Pet();
};

Dog::Dog(int s, int f, string n){
    a = Pet(s,f,n);
}

Pet::Pet() { //default
    size = 0;
    food = 0;
    name = "";
}

Pet::Pet(int s, int f, string n){
    size = s;
    food = f;
    name = n;
}