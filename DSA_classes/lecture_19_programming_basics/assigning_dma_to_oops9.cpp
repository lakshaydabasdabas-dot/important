#include<iostream>
#include<cstring>
using namespace std;
class Car{
    private:
    int price;
    public:
    char *name;
    int model;

    void print(){
        cout << "Name: "<< name<<endl;
        cout << "Price: "<< price<<endl;
        cout << "Model: "<< model<<endl;
    }
    //1. Constructor
    Car(){
        name=NULL;
        cout << "Inside default constructor\n";
    }
    //2. Parameterised Constructor
    Car(char* n , int p , int m){
        cout << "Inside Parameterised constructor"<<endl;
        name= new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        model=m;
    }
    //3.
    Car( int p , int m,char* n){
        cout << "Inside Parameterised constructor 2"<<endl;
        name= new char[strlen(n)+1];
        strcpy(name,n);
        price=p;
        model=m;
    }
    //4. Copy Constructor
    Car(Car &X){//& IS NECESSARY WARNA INFINITE RECURSION HOJAYEGA
        cout << "Inside copy constructor"<< endl;
        name= new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
    }
    //Copy Assignment Operator
    //Car D;
    //D=A;
    void operator=(Car &X){
        cout << "Inside copy assignment operator"<< endl;
        if(name!=NULL){
            delete []name;
        }
        name=new char[strlen(X.name)+1];
        strcpy(name,X.name);
        price=X.price;
        model=X.model;
    }
    //Destructor
    ~Car(){
        cout<< "Deleting car "<< name << endl;
    }
    //Getter and setter
    void setPrice(int p){
        if(p>=120 && p <=200){
        price=p;
        }else{
            price=150;
        }
    }
    int getPrice(){
        return price;
    }
    void setName(char* n){
        if(name!=NULL){
            delete []name;
        }
        name=new char[strlen(n)+1];
        strcpy(name,n);
    }
    
};
int main(){
    Car A;
    // A.name="BMW";
    A.setName("Audi");
    A.setPrice(10);
    A.model=2020;
    
    cout << A.getPrice()<<endl;
    A.print();
   

    Car B("Audi", 20 , 2022);
    // B.print();

    Car C(10,2023,"Maruti");
    // C.print();
    //Copy Constructor
    Car D(A);// Car D=A;
    D=B;//Copy assignment operator
    // D.print();
    return 0;
}