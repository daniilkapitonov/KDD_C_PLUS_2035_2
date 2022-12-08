#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int mn = 9;
    for (int i=1;i<10;i++){
        // cout << mn <<"*"<<i<<"="<<mn*i<< endl;
        for (int j=1;j<10;j++){
            cout << i <<"*"<<j<<"="<<i*j<< " ";
        } 
        cout << endl;
    }
}
