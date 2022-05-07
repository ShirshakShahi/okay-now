#include <iostream>
using namespace std;
class Test
{
    int a;

public:
    Test()
    {
        a = 0;
    }
    Test(int x)
    {
        a = x;
    }
    void display()
    {
        cout << "Number = " << a << endl;
    }
    void operator++()
    {
        ++a;
        // return a;
        display();
    }
    void operator--()
    {
        --a;
        // return a;
        display();
    }
};
int main()
{
    Test T1(5);
    T1.display();
    cout << "after increment: " << endl;
     ++T1;
    cout << "after decrement: " << endl;
     --T1;
    return 0;
}