#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;

//boundary: 1) pets cannot be larger than 2100 metric tons 2) names cannot be larger than 10 characters

class Pet{
private:
protected: 
    //contains data, this is only used in c++
    //no one can see this for any reason
    //cannot be accessed in "int main"
    int size;
    int food;
    string name;
public:
    bool sameSizePet(Pet a, Pet b); // declared bool
    bool sameNamePet(Pet a, Pet b);
    void P_p();
    int growing(int x);
    Pet();
    Pet(int s, int f, string n);
};

//class "x" : public "y" child can only access public info of parent
//class "x" : private "y" means that you are giving explicit but limited permission to the new class to access but not manipulate private info from the parent
//class "x" : protected "y" has dads key to the safe
//NEVER MANUALLY CHANGE AN OBJECT just use a set or vector
class Dog : protected Pet{
    private:
        Pet a;
        //Activity 2 new data
        string fur_color;
        int muzzle_length;
    protected:
    public:
        int growing(int x); //dog grows by x grams
        bool samefur_color(Dog a, Dog b);
        Dog();
        Dog(int s, int f, string n, string c, int m);
        //Activity make a function that manipulates the data in private
};

/*int Dog::growing(int x){
    return a.size = x;
}*/

//Pet stuff
Pet::Pet() { //default
    size = 0;
    food = 0;
    name = "";
};

Pet::Pet(int s, int f, string n){
    size = s;
    food = f;
    name = n;
}

//Dog stuff
Dog::Dog(){
    a = Pet();
    fur_color= '\q';
    muzzle_length = 0;
};

Dog::Dog(int s, int f, string n, string c, int m){
    a = Pet(s,f,n);
    fur_color = c;
    muzzle_length = m;
};