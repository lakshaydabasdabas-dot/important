#include <iostream>
#include <cstring>
using namespace std;


class Car {
public:
    char name[100];
    int model;
    int price;

    void print()
    {
        cout << "name : " << name << endl;
        cout << "Price : " << price << endl;
        cout << "model : " << model << endl;
    }

    Car(){
        cout << "inside Default Constructor\n";
    }
    Car(char *n, int  p, int m)
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
    Car A;

    cin >> A;
    
    Car B("Audi",20,2022);
    
    Car C = A;

    cout << A << endl;
    return 0;
}