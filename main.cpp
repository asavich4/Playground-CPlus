#include <iostream>

using namespace std;

void function(){
    cout << "play";
}

int main() {
    int test[] = {1,2,3,5,6, 7, 4,3,3,5};
    int size = sizeof(test) / sizeof(test[0]);

    for(int i; i < size; i++){
        function();
        cout << " " << test[i] << " ";
    }

    cout << " the size is " << size;
    return 0;
}
