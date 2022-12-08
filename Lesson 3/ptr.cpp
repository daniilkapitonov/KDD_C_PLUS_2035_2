#include <iostream>
#include <iomanip>
#include <string.h>
#include <fstream>
// #include <typeinfo>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=8;
    cout << a<<"  "<<&a<<"  "<<*(&a);
    int *ptr=&a;
    cout << endl<< ptr<<"  "<< *ptr;
    *ptr = 841;
    cout <<endl<< a<<"  "<<&a<<"  "<<*(&a);

    int *n=NULL;
}
