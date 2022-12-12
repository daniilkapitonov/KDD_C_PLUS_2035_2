#include <iostream>

using namespace std;

float sm_to_metr(float sm){
    return sm/100;
}

float sm_to_km(float sm){
    return sm_to_metr(sm)/1000; //return sm/100000;
}

int main(int argc, char const *argv[])
{
    float x;
    cin >> x;
    cout << "В метрах - "<< sm_to_metr(x)<< endl;
    cout << "В километрах - "<< sm_to_km(x)<< endl;    
}
