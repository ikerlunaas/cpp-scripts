#include <iostream>
#include <climits>

using namespace std;

int main() {
    const int size = 5;
    int numbers[size];

    cout<<"Enter "<<size<<" numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }

        if (numbers[i]<min) {
            min = numbers[i];
        }
    }

    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;

    return 0;
}