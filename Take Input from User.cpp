#include <iostream>
using namespace std;

int main() {
    int marks[5];

    cout << "Enter the Marks: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        cout << "You entered: " << marks[i] << endl;
    }
    return 0;
}
