#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m[]={11,32,43,54,56,76,87,98};
    // cout << sizeof(m)/sizeof(m[0]);
    int size = sizeof(m)/sizeof(m[0]);
    for (int i=0;i<size;i++){
        cout << m[i]<<"  ";
    }
    int m2[10];
    for (int i=0;i<10;i++){
        cout << "Введите значение "<<i<<" - ";
        cin >> m2[i];
    }
    
}
