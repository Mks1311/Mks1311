#include <iostream>
using namespace std;
class Y;

class X
{
    int a;
    friend void swap(X &a, Y &b);

public:
    void set(void){
        int x;
        cout<<"Enter first num: "<<endl;
        cin>>x;
        a=x;
    }

    void disp(void)
    {
        cout << "1st num=" << a;
    }
};

class Y
{
    int b;
    friend void swap(X &a, Y &b);

public:
    void set(void)
    {
        int x;
        cout << "Enter Second num: " << endl;
        cin >> x;
        b = x;
    }
    void disp(void)
    {
        cout << "2nd num=" << b;
    }
};

void swap(X &a, Y &y)
{
    int temp = a.a;
    a.a = y.b;
    y.b = temp;
}
int main()
{
    X a;
    Y b;
    a.set();
    b.set();

    cout << "Before Swap: ";
    a.disp();
    cout << " and ";
    b.disp();

    swap(a, b);

    cout << endl
         << "After Swap: ";
    a.disp();
    cout << " and ";
    b.disp();

    return 0;
}