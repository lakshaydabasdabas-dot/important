#include <iostream>
#include <vector>
using namespace std;

class Vector {
public:
    int *a;
    int cs;
    int ts;
    Vector(int s = 5)
    {
        a = new int[s];
        cs = 0;ts = s;
    }

    void push_back(int d)
    {
        if (cs == ts)
        {
            int * olda = a;
            int oldts = ts;
            ts *= 2;
            a = new int[ts];
            for (int i = 0; i < oldts; ++i)
            {
                a[i] = olda[i];
            }

            delete []olda;
        }

        a[cs++] = d;
    }

    void pop_back(int d)
    {
        if (cs > 0)
        {
            cs--;
        }
    }

    int size()
    {
        return cs;
    }

    int capacity() {
        return ts;
    }

    //operator overloading
    int operator [](int idx){
        return a[idx];
    }
};

int main()
{
   Vector v;
   for (int i = 1; i <= 5; ++i)
   {
       v.push_back(i);
   }

   cout << "size: " << v.size() << ", capacity : " << v.capacity() << endl;
   for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}