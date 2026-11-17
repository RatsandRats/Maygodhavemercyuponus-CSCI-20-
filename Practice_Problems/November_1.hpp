#include<iostream> //pragma error, g++ read #include as an algebra template and not a pragme
using std::cout;
using std::endl;

//first you must think about why you need this object
//0.5) explain how the 3 pillars are going to be used here
//1.) draw it out. see if you can solve the problem with one class
//for lecture example we are trying to define a class for "Natural Arithmetic"
//to keep negative values out we can use a type in c++ called "unsigned"
//better yet, within the constructor, if either variable is 0 this class doesn't exist
class Nat_arith{
    protected:
    private:
        int left;
        int right;
        int answer;
    public:
        Nat_arith();
        Nat_arith(int, int);
        int addition();
};

Nat_arith::Nat_arith(){
    left =1;
    right = 1;
    answer = 1;
}

Nat_arith::Nat_arith(int l, int r){
//assure that l and r are natural
if(l>0 && r>0){
     left = l;
    right = r;
    answer = 1;
} else{
    left =1;
    right =1;
    answer =1;
}
}