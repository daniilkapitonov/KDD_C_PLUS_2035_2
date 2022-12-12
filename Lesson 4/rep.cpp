#include <iostream>

using namespace std;

void func(int *a){
    (*a)++;
}

int main(int argc, char const *argv[])
{
    int m[2];
    m[0] = 1;
    m[1] = 2;
    // m[4] = 3;
    int a;
    cout << a;
    char c[2];
    c[0] = '1';
    c[1] = '2';
    char *cp = "Hello";
    cout << endl<< c;
    int q1=10;
    float q2=4;
    cout << q2/q1;

    q2=q1;cout << q2;
    cout << endl;
    func(&q1);
    cout << q1;
    cout << endl;
    char *str = "Hello";
    cout << &str << endl;
    while (*str){
        cout << *str++;
        cout << bool(*str);
    }
    cout << endl<< &str << endl;
    const int n=10;
    int mass[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << "i - "<< i<< " j - "<< j<< endl;
            mass[i][j] =i+j;
        }
    }
    cout << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout << mass[i][j]<< " "; 
        }
        cout << endl;
    }
}
