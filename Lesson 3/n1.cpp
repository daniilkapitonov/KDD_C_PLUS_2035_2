#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=10;
    int& b=a;
    int *c=&b;
    cout << &a<<"  "<<&b<<"  "<<&(*c);
    int a[4];
}
