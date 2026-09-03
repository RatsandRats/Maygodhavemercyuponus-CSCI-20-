/*#include <Library Name>*/
#include<iostream>
    /*"iostream" is someone elses library which will provide for us tools for coding in our chosen language*/
    /*# compiler pragma, the reserve word "include" will not work without it*/
    /*include must always be first, C++ reads page like we read english*/

/*Specific objects from library*/
using std::cout; 
    /*We are specifying which tools we will be selecting from a Standard Library*/
    /*Using tells the compiler what we want tools we want*/
    /*Std stands for Standard which pulls from a library which is accepted as containing the "normal" commands/tools*/
    /*Cout is an unknowable eldritch abomination that apparently is a command/tool/entity that exists in a standard c++ library*/
    /*cout = std::cout so that we don't need to type std::cout every time*/

//Entrypoint: begin program
int main() 
    /*Main will return and integer as an output after the function has been run*/ {

    cout << "hello world";
    /*this is to remind us that we know nothing and will continue to know nothing*/
    /*cout is kinda sorta maybe like an output command that in this scenario is a text based output*/

    /*to "stub out" code is to */

    return 0;
    /*This function will return "0" which is a valid integer as required by the argument of "int main()"*/
    /*we need to return and integer as c++ will not accept this function without an integer return*/
}