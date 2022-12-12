#include <iostream>

using namespace std;

// void rec(){
//     int *p = new int;
//     *p=4;
//     cout << "1" << endl;
//     delete p;
//     rec();    
//     while (1){
        
//     }
// }

int main(int argc, char const *argv[])
{
    int *p = new int;
    *p=4;
    cout << *p<<" "<< p<< endl;
    delete p;
    cout << *p<<" "<< p<< endl;
    // rec();

    int x=0;
    cin >> x;
    int *m = new int[x];

    
}
