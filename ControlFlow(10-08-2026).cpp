#include<iostream>

using std::cout;
using std::endl;

int main(){
    int x = 0;
    int y = 1;
    cout << "x+y=1" << x+y << endl;

    if(x>y){
        //true
        cout << "x is greater than y" << endl;
    }else {
        //false
        // x = y or x < y
        cout << "x is less than or equal to y" << endl;
    }

    //if x is less than y this makes that difference larger, x will never equal y
    if(x>y){
        x=x+1;
    }else {
        x=x-1;
    }

    // if x != y make x = y
    if(x == y) { // ~ also works for "not"
        //do nothing
    }else if(x>y) {
        x = y;
    }else if(x<y) {
        x = y;
    }
    // "else if" are match statements are not equvilant to if statements and will be very messy

    if (x==y){
        //do nothing
    } else /*x does not equal y*/ {
        if (x<y) /*check if x is less than y*/ {
            x=y;
        }else{
            y=x;
        }
    }


    cout << "x: " << x << "y: " << y << endl;
    return 0;
}