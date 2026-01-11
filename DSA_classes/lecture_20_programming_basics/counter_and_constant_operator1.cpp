#include <iostream>
#include <cstring>
using namespace std;


class Car {
public:
    // data members of class car
    char name[100];
    int model;
    int price;
    const int tyres;

    //FUNCTIONS
    void print()
    {
        cout << "name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "model : " << model << endl;
    }

    // 1. constructor
    Car():tyres(4){
        cout << "inside Default Constructor\n";
    }
    // 2. parametrised constructor
    Car(char *n, int  p, int m):tyres(4), price(p)
    {
        cout << "inside parametrised Constructor\n";
        strcpy(name, n);
        price = p;
        model = m;
    }
};


    ostream& operator<<(ostream& os, Car &X)
    {
    cout << "Name   : " << X.name << endl;
    cout << "Price  : " << X.price << endl;
    cout << "model  : " << X.model << endl << endl;

    return os;
    }

    istream& operator>>(istream& is, Car &X)
    {
    cout << "Enter name: "; cin >> X.name;
    cout << "Enter price: "; cin >> X.price;
    cout << "Enter model: "; cin >> X.model;

    return is;
    }



int main()
{
    Car A;// default ki aise function all hoti hai aur parametrised ki niche wale ki tarah

    //A.name = "BMW";
    strcpy(A.name,"BMW");
    A.price = 10;
    A.model = 2020;

    A.print();

    return 0;
}