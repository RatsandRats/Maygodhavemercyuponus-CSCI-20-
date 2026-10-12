#include <iostream>

using std::cout;
using std::endl;

int main(){

    //these will be the "pockets" of our mancala board
    //to track one player action we will need 5 "pockets"
    //pocket 1 "p1" will have its beads evenly distributed to pockets 2 - 5 "p2" - "p5"
    int p1[1]={4};
    int p2[1]={4};
    int p3[1]={4};
    int p4[1]={4};
    int p5[1]={4};

    //it turns out pointers are actually quite helpful
    //actually wonderful to use
    int* p[5] ={p1, p2, p3, p4, p5};

    /*In this for loop our counter will start at i = 0.
    We need to represent how each "pocket" after the first will increase their values from 4 to 5
    so we will use i < 5 as our condition.
    Last we finish with our step represented by i++, in english it means i = i + 1*/
    for(int i = 0; i < 5; i++){

        if(i==0){
            //this isolates the first array and makes it 0 acting as the empty pocket after the player action
            p[i][0] = 0;
        } else {
            //increases p[2] through p[5] by 1 which shows each pocket after the first gaining 1 bead.
            p[i][0] +=1;
        }

    }

    //to make sure my code actually works these lines will print each array
    cout << "p1[0]: " << p1[0] << endl;
    cout << "p2[0]: " << p2[0] << endl;
    cout << "p3[0]: " << p3[0] << endl;
    cout << "p4[0]: " << p4[0] << endl;
    cout << "p5[0]: " << p5[0] << endl;
    return 0;
}
