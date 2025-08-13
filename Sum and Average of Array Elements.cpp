#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int sum = 0; 
    double ave;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    ave = sum / 5.0; 

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << ave << endl;

    return 0;
}
