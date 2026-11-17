/*
Functions in C++
make a euclidean distance function in 2d, pythag. theorem
P: a^2 + b^2 = c^2
Q:
1. what is euclidean distance?
    in any space, the shortest route between two points
2. what is meant by 2d?
    a space involving 2 axis'
3. are units required?
    No
4. what is a function?
    a vehicle/method of manipulating a set of values
5. what is distance?
    measureable space 
6. who is euclid?
    math god
7. why are we doing this?
    to learn what a function is.
8. what is a square?
    increasing a value by a magnitude of 2.
9. what is pythag?
    short for Pythagoras who was an arithmatician.
10. In the equation given, what does it mean?
    a^2 + b^2 = c^2 right triangle. to find an unknown length give two other known lengths
11. what a & b & c?
    integers. how do we know? we treat them like numbers.

P': we need to create a function that acts on two points in a 2d graph where the fxn finds the distance between two points given the integer values of 2 lengths connected to said points involving a^2 + b^2 = c^2. To convert points to distances we use standard method.
    
    standard: (x, y) (x', y') a = x' - x b = y' - y

Q: how might we deal with converting points to distance calc values. 

Checking Language Capabilities:
1. arithmetic
2. group values(arrays)
3. can construct a function
*/

#include<iostream>
#include<cmath>

using std::cout;
using std::endl;
using std::abs;

//int prac(){
//    return 40;
//}

//used to find c
int prac_inputs(int n, int m) {
   int r = n*n + m*m;
    return r;
}

int a_input (int g[2], int h[2]){
    
    return (int) h[1], g[1];
    //(int) forces c++ to confirm this is an integer
}

int Calc_A(int a[2], int b[2]){
    return abs(a[0]-b[0]);
}

int Calc_B(int c[2], int d[2]){
    return abs(c[1]-d[1]);
}

int main() {
    int p1[2] = {1,2};
    int p2[2] = {4,3};

    //practice variables
    //int x = 20;
    //int k = 1; 

    //cout << p1[0] << endl;
    //cout << prac_inputs(p1[1], p2[0]) << endl;

    //cout << a_input(p1,p2) << endl;
    cout << Calc_A(p1,p2) << endl;
    cout << Calc_B(p1,p2) << endl;
    return 0;
}

// 2 calculations needed: c^2 and b