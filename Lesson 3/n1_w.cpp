#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int m[5];
    for (int i=0;i<5;i++){
        cin >> m[i];
    }
    int summ=0;
    int sr = 0;
    for (int i=0;i<5;i++){
        summ+=m[i];
    }
    cout << summ<< endl<<summ/5;
}
