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
    area(2, 5);
    cubesSq (3, 7, 9);

    return 0;
}
