#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;


int main(){
    int x = 4;
    cout << x << endl;
    cout << &x << endl;

    int *y = &x;
    cout << y << endl;
    cout << *y << endl;

    *y = 2;
    cout << y << endl;
    cout << *y << endl;
    cout << x << endl;
    cout << &y << endl;
}
