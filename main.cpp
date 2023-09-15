#include <iostream>

using namespace std;

void area(int w, int l){
    int answerArea = w * l;
    cout << "The area is " << answerArea << endl;
}

void cubesSq(int w, int l, int h){
    int cube = w * l * h;
    cout << "Cubes Squared is " << cube << endl;
}

void people(string name, int age){
    cout << "Your name is " << name << " and you are " << age << " years old!" << endl;
}

int main() {
    int width = 5;
    int length = 7;
    int height = 9;

    area(width, length);
    cubesSq (width, length, height);

    string person;
    int personAge;
    cout << "What is your name? " << endl;
    cin >> person;
    cout << "What is your age? " << endl;
    cin >> personAge;
    people(person , personAge);

    return 0;
}
