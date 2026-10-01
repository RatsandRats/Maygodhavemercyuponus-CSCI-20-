#include<iostream>

using std::cout;
using std::endl;

int main() {
    int i=0;
    for (;;) {
        if(i<5){
            //condition is true
            //do nothing
        }else{
            //if false
            break;
        }
        cout<<i;
        i=i+1;
    }
    cout<<endl;
    return 0;
}