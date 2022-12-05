#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cin >> number;
    switch (number)
    {
    case 0:
        cout << "Ноль";
        break;
    case 1:
        cout << "Один";
        break;
    case 2:
        cout << "Два";
        break;
    case 3:
        cout << "Три";
        break;
    
    default:
        cout << "Такого числа нет";
    }
    char ch = '9';
    cout << ch;
    ch = 'a';
    cin >> ch;
    string st = "Hello!";
    cout << endl<<st<< endl;
    st+=" I am Daniil";
    cout << endl<<st<< endl;
    cin >> st;
}
