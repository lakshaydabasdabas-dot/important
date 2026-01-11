#include <iostream>
#include <cstring>
using namespace std;

////////////////////////////////////BLUEPRINT////////////////////////////////////
class Car {
public:
    // data members of class car
    char name[100];
    int model;
    int price;

    //FUNCTIONS
    void print()
    {
        cout << "name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "model : " << model << endl;
    }
};
////////////////////////////////////BLUEPRINT////////////////////////////////////

int main()
{
    Car A;

    // A.name = 'BMW';
    strcpy(A.name,"BMW");
    A.price = 10;
    A.model = 2020;

    //cout << "name : " << A.name << endl;
    //cout << "Price : " << A.price << endl;
    //cout << "model : " << A.model << endl << endl;

    Car B;
    strcpy(B.name,"Audi");
    B.price = 20;
    B.model = 2022;
    //cout << "name : " << B.name << endl;
    //cout << "Price : " << B.price << endl;
    //cout << "model : " << B.model << endl;

    A.print();
    B.print();

    return 0;
}