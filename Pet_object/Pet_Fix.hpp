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
    bool sameSizePet(Pet a, Pet b);
    bool sameNamePet(Pet a, Pet b);
    Pet();
    Pet(int s, int f, string n);
};

class Dog : Pet {
    private:       
    public:
};

Dog::Dog(){

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