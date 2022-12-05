#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int number = 45;
    int input =0;
    int count =0;
    while (input!=number){
        cout << "Введите число - ";
        cin >> input;
        if (number==input){
            cout << "Ура, победа!";
        }else if (input-number < 10 && input-number > -10){
            cout << "hot";
        }else{
            cout <<"cold";
        }
        cout << endl;
        count++;
    }
    cout << "Понадобилось попыток - " << count;
}
