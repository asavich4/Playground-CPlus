#include <iostream>

using namespace std;

int main() {
    int test[] = {1,2,3,5,6, 7, 4,3,3,5};
    int size = sizeof(test) / sizeof(test[0]);

    cout << size;
    return 0;
}
