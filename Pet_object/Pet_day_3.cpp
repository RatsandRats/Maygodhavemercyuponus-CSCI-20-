#include"Pet_Fix.hpp"
int main(){
    Dog fido(20000, 1000, "fido");
    Dog goldie(200, 5, "goldie");
    cout << fido.sameSizePet(fido, goldie) <<endl; //error stems from c++ compiler not knowing how to convert Pet to Dog
    Dog a(); /*c++ is hard to parse. Disambiguation errors are common. Fix with specificity, be specific and use examples. For example Dog a is seen as a variable or an instance of dog. the compiler doesn't know which. */
    return 0;
}
bool Pet::sameSizePet(Pet a, Pet b){
    if(a.size == b.size){
        return true;
    }else{
        return false;
    }
}
bool Pet::sameNamePet(Pet a, Pet b){
    if(a.name == b.name){
        return true;
    }else{
        return false;
    }
}