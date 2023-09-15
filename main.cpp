#include <iostream>

using namespace std;

void area(int w, int l){
    int answerArea = w * l;
    cout << "The area is " << answerArea << endl;
}

void cubesSq(int w, int l, int h){
    int cube = w * l * h;
    cout << "Cubes Squared is " << cube;
}

int main() {
    int width;
    int length;
    int height;
    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the height: ";
    cin >> height;

    area(width, length);
    cubesSq (width, length, height);

    return 0;
}
