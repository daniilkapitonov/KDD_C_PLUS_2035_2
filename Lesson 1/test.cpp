
#include <iostream>
using namespace std;
int i2 = 5;
int main()
{
    extern int i3; // объявили
    cout << i2<< i3;
    float c = 0.123;
    cout<< endl << int(i3*c);
}
int i3 =5; //определили объявили
