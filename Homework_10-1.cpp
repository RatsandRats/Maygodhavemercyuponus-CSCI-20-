#include<iostream>
#include<cmath>
//iostream and cmath are the libraries we are using for C++ commands and C based math operations

/*In this assignment we must take two points, each inside C style arrays, and 
find the euclidean distance on a 2D(x and y) graph between two points following 
the pythagorean theorem a^2+b^2=c^2*/

using std::cout;
//Lets me be lazy by making it so I don't have to type std::cout every time.
using std::endl;
//Same as above but with endl
using std::abs;
//Ditto

//this operation was given to us in class as the method we will use to find c^2.
int prac_inputs(int n, int m) {
   int r = n*n + m*m;
    return r;
}

/*This will provide my X coordinates (x2-x1) by taking the 
first value in both arrays and subtracting the value in the
second array by the first array under the name Calc_A*/

int Calc_A(int a[2], int b[2]){
    return abs(a[0]-b[0]);
}

/*Similar function as with Calc_A but this time with the second 
value in each array under the name Calc_B*/
int Calc_B(int c[2], int d[2]){
    return abs(c[1]-d[1]);
}

/*The main function of this code.

Here I have 2 C style arrays named p1 and p2, each contain 2 values denoted by [2].

int a and b find the lenths of our X and Y legs of the triangle.

int c_squared is calls the function prac_inputs to take the outputs of 
int a and int b into the pythagorean theorem equation to give us c^2.

The cout << __ << endl; prints the calles values in the terminal.

int main (){} won't work without return 0;*/.
int main() {
    int p1[2] = {1,2};
    int p2[2] = {4,3};

    int a = Calc_A(p1,p2);
    int b = Calc_B(p1,p2);
    int c_squared = prac_inputs(a,b);

    cout << a << endl;
    cout << b << endl;
    cout << c_squared << endl;
    return 0;
}