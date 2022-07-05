// Author:  Billy Gene Ridgeway
// Purpose: Learn about multiple indirection and using the debugger.
// Date:    July 5th. 2022
// debuggingMultipleIndirection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct              // Group the pointers inside a struct so they will occupy continous memory locations.
{
    int*** ippp;    // A pointer to a pointer to another pointer that points to an int.
    int** ipp;      // A pointer to a pointer to an int.
    int* ip;        // A pointer to an int.
    int i;          // An int.
}p;

// This shows pointers pointing to pointers
// and should be used in conjunction with the memory window.

int main(int ac, char**av)
{
    p.ippp = &p.ipp;        // "p." is before ipp because it's in the p struct.
    p.ipp = &p.ip;
    p.ip = &p.i;
    p.i = 0x55555555;       // So we can recognize what we're pointing to.
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
