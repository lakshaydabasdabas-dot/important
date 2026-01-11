#include <iostream>
#include <cstring>
using namespace std;

////////////////////////////////////BLUEPRINT////////////////////////////////////
class Car {
public:
    // data members of class car
    char name[100]; //we can also use string name where we do not have to specify the size
    int model;
    int price;
};
////////////////////////////////////BLUEPRINT////////////////////////////////////

int main()
{
    Car A;

    // A.name = 'BMW'; // for this we have to write string name on the class 
    // then we can use A.name = 'BMW' but as char is an array so we cannot write
    // a string in it we can only write a character 
    strcpy(A.name,"BMW");
    A.price = 10;
    A.model = 2020;

    cout << "name : " << A.name << endl;
    cout << "Price : " << A.price << endl;
    cout << "model : " << A.model << endl << endl;

    Car B;
    strcpy(B.name,"Audi");
    B.price = 20;
    B.model = 2022;
    cout << "name : " << B.name << endl;
    cout << "Price : " << B.price << endl;
    cout << "model : " << B.model << endl;

    return 0;
}