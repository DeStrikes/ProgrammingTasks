#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c2 = 0, c3 = 0, c5 = 0;
    while(n != 0) {
        if(n % 2 == 0)
            c2++;
        if(n % 3 == 0)
            c3++;
        if(n % 5 == 0)
            c5++;
        cin >> n;
    }
    cout << c2 << " " << c3 << " " << c5;
}