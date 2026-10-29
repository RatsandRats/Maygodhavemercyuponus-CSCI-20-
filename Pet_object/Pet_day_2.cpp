#include"pet.hpp"

int main(){
    Pet fido(20000, 1000, "fido");
    Pet goldie(200, 5, "goldie");

    cout<< fido.sameSizePet(fido, goldie) << endl;
    cout<< fido.sameNamePet(fido, goldie) << endl;

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