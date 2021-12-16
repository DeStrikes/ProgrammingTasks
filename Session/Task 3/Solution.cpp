#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int c = 0;
    for(int i = 0; i < n - 1; i++) {
        int sum = a[i] + a[i + 1];
        if(sum % a[i] == 0 || sum % a[i+1] == 0)
            c++;
    }
    cout << c;
}