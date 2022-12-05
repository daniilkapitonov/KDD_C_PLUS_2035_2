#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a=25;
    if (a!=-20){
        cout << "a!=-20"; //true
    }else if(a>20){
        cout << "a>20";
    }else if(a>30){
        cout << "a>30";
    }else{
        cout << "-";
    }
    if (a!=-20){
        cout << "a!=-20"; //true
    }
    if(a>20){
        cout << "a>20";
    }

    if(a>30){
        cout << "a>30";
    }else{
        cout << "-";
    }

    cout << endl;
    bool tr=true;
    if (!tr){
        cout << "tr+";
    }
    int height = 187;
    if ((height > 100 && height < 180)){
        cout <<"welcome";
    }else if(height < 100 && height > 80){
        cout << "just with patents";
    } else{
        cout << "go out!";
    }


    cout<< endl;
}
