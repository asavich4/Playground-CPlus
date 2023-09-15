#include <iostream>

using namespace std;

void area(double w, double l){
    double answerArea = w * l;
    cout << "The area is " << answerArea << endl;
}

void cubesSq(double w, double l, double h){
    double cube = w * l * h;
    cout << "Cubes Squared is " << cube << endl;
}

double powerRule(double num, double power) {
    double answer = 1.0;

    for (int i = 0; i < power; i++) {
        answer *= num;
    }

    return answer;
}




int main() {
    double width = 5;
    double length = 7;
    double height = 9;
    area(width, length);
    cubesSq (width, length, height);

    double num, power;
    cout << "Choose a num and power:" << endl;
    cin >> num;
    cin >> power;
    double math = powerRule(num, power);
    cout << math;



    return 0;
}
