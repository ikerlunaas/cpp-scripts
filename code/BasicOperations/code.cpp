#include <iostream>

using namespace std;

int main() {
    float n1, n2, sum, rest, mult, div;

    cout<<"Insert the first number: ";
    cin >> n1;

    cout<<"Insert the second number: ";
    cin >> n2;

    sum = n1 + n2;
    rest = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    cout<<"Addition: "<<sum<<", Subtraction: "<<rest<<", Multiplication: "<<mult<<", Division: "<<div<<endl;
    

    return 0;
}