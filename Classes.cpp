#include<iostream>

using std::cout;
using std::endl;

//middle weight dog
class Pet {
public:
    Pet();
    Pet(int s, int l, char c);
    int accident(int n);
    //Bad_fun(int i);
private:
    int size;
    int leg_length;
    char color;
};

//This is a bad. This fundamentally sets the data within the object, thereby poisioning all future calls for that information within the object
/*void Pet::Bad_func(int i){
    size = i;
    return ;
}*/

//the data in the object must be allowed to change by implication and/or abstraction
//Catagories exist to COMPARE things. we see how close they are catagorically
//when manipulating data this becomes an array. An array encapsulates
//if an object becomes an array, you've destroyed its purpose. Objects help describe things because they are abstractions.
// objects exist for description and comparison.
//an array is a bag with a set of things that can be pulled at will
//an object is a method of comparison and description. Aids in catagorization


//3 possible accidents: 1-> nuke 2-> train 3-> drown
//this is a stack of if else statements
//ALWAYS USE AN ELSE LEAVE NO BRANCHES UN TRIMMED
/*
int Pet::accident(int n){
    if (n==1){
    } else {
        if (n==2){
        } else {
            if (n==3){
            } else {
            }
        }
    }
}
*/

//This is a switch case
// a way to make stepped if else statements but clean and not time cnsuming
//3 possible accidents: 1-> nuke 2-> train 3-> drown
int Pet::accident(int n){
    switch (n) {
        case 1: // n == 1
            size = 0;
            leg_length = 0;
            color = '-';
            return 0;
        case 2: // n == 2
            leg_length = leg_length - 1;
            size = size - 2;
            return 0;
        case 3: // n == 3
            size = size +1;
            return 0;

        default:
        cout << "n was not 1, 2 or 3" << endl;
        return 0;
    }
    return 1; //return 1 if the switch breaks and the program gets out of the switch. this is an error code
} // return is stable, cout is not stable. cout is a buffered system and may not print in order. returns are on interupt and work instantly

Pet::Pet(int s, int l, char c) {
    size = s;
    leg_length = l;
    color = c;
}

int main() {
    return 0;
}