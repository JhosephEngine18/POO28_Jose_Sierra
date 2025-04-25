/*
Universidad Amerike
Author: José Sierra
Pratice#:28
Date: 25/04/25
Description: This program uses double pointers to save pointers and show each memory location of it;
*/

#include <iostream>
using namespace std;


int main()
{
//Variables
int y = 10;
float z = 1.18;

//Pointers
int *py = &y;
float *pz = &z;

//Pointers Selecting Pointers
int **ppy = &py;
float **ppz = &pz;

cout << "value of y " << y << "\n";
cout << "value of z " << z << "\n";

cout << "value of y through the pointer " << *py << "\n";
cout << "value of z through the pointer " << *pz << "\n";
cout << "value of y through the pointer of pointer " << **ppy << "\n";
cout << "value of z through the pointer of pointer " << **ppz << "\n";

cout << "Memory location of old pointer y " << py << "\n";
cout << "Memory location of old pointer z " << pz << "\n";
cout << "Memory location of new pointer y " << ppy << "\n";
cout << "Memory location of new pointer z " << ppz << "\n";


cout << "--Here now shows each memory location of each pointer and variable--\n";
cout << "Memory location of value of y " << &y << "\n";
cout << "Memory location of value of z " << &z << "\n";
cout << "Memory location of old pointer y " << &py << "\n";
cout << "Memory location of old pointer z " << &pz << "\n";
cout << "Memory location of new pointer y " << &ppy << "\n";
cout << "Memory location of new pointer z " << &ppz << "\n";


return 0;
}