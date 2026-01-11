#include <iostream>
#include <cstring>
using namespace std;


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

    // 1. constructor
    Car(){
        cout << "inside Default Constructor\n";
    }
    // 2. parametrised constructor
    Car(char *n, int  p, int m)
    {
        cout << "inside parametrised Constructor\n";
        strcpy(name, n);
        price = p;
        model = m;
    }

    // 3. parameterised constructor - 2
    Car(int  p, int m, char *n) // change the oreder otherwise it will show error
    {
        cout << "inside parametrised Constructor\n";
        strcpy(name, n);
        price = p;
        model = m;
    }

    //copy constructor
    // Car D = A; (Another method to call copy constructor)
    Car(Car &X) //& is important to point out the original one(so the bucket of A and X become same(Call by reference))
    {
        cout << "inside copy Constructor\n";
        strcpy(name, X.name);
        price = X.price;
        model = X.model;
    }

    // copy assignment operator
    // Car D;
    // D = B;
    void operator = (Car &X)
    {
        cout << "inside copy assignment operator\n";
        strcpy(name, X.name);
        price = X.price;
        model = X.model;

    }
};


int main()
{
    Car A;// default ki aise function all hoti hai aur parametrised ki niche wale ki tarah

    // A.name = 'BMW';
    strcpy(A.name,"BMW");
    A.price = 10;
    A.model = 2020;

    
    Car B("Audi",20,2022);
    
    
    Car C("Maruti",5,2021);
    
    //4. copy constructor
    Car D(A);//also Car D = A;
    //5. copy assignment operator
    D = B;

    A.print();
    B.print();
    C.print();
    D.print();

    return 0;
}