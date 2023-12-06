#include <iostream>

using namespace std;

int main() {
    int usercount;

    cout<<"How many times?: ";
    cin >> usercount;

    for ( int i = 0; i < usercount+1; i++) {
        cout<<i<<endl;
    }

    return 0;
}