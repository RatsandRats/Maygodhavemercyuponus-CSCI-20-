#include <iostream>

using std::cout;
using std::endl;

int main(){

    //These will be the "pockets" of our mancala board
    //To track one player action we will need 5 "pockets" labeled p1 p2 p3 p4 p5 that each start out with 4 beads
    //Pocket 1 "p1" will have its beads evenly distributed to pockets 2 - 5 "p2" - "p5"
    //In the case where you will want to have more beads in the starting pocket you must then add more arrays into this list
    int p1[1]={4};
    int p2[1]={4};
    int p3[1]={4};
    int p4[1]={4};
    int p5[1]={4};

    //It turns out pointers are actually quite helpful
    //Actually wonderful to use
    //This creates an array of pointers called "p" that hold 5 variables
    //{p1,p2,p3,p4,p5} hold the addresses for the previous pocket arrays
    //When used in the following for loop p[0] will represent p1 and so on
    int* p[5] ={p1, p2, p3, p4, p5};

    /*In this for loop our counter will start at i = 0.
    We need to represent how each "pocket" after the first will increase their values from 4 to 5
    so we will use i < 5 as our condition.
    Last we finish with our step represented by i++, in english it means i = i + 1*/
    for(int i = 0; i < 5; i++){

        if(i==0){
            //this if statement isolates the first pocket array and sets the stored value to 0 acting as the empty pocket after the player action
            p[i][0] = 0;
        } else {
            //Increases the stored values of p[2] through p[5] by 1 which shows each pocket after the first gaining 1 bead.
            p[i][0] +=1;
        }
        /*Concerning other states or player actions, this is it. Each player moves an amount of beads in a single pocket and distributes them evenly to the following pockets in a counterclockwise order but c++ doesn't care about direction*/
    }

    //to make sure my code actually works these lines will print each array
    cout << "p1[0]: " << p1[0] << endl;
    cout << "p2[0]: " << p2[0] << endl;
    cout << "p3[0]: " << p3[0] << endl;
    cout << "p4[0]: " << p4[0] << endl;
    cout << "p5[0]: " << p5[0] << endl;
    return 0;
}
