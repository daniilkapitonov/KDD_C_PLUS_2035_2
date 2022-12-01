
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a1, a2;
    cin >> a1>>a2;
    int c = a1/a2;
    cout << "Деление - "<< c<< endl;
    cout << "Остаток - "<< int(a1)%int(a2);
}
