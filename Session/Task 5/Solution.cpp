#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector <int> a;

void solution(int m) {
    if(m > n) {
        for(auto x : a)
            cout << x << " ";
        cout << '\n';
        return;
    }
    for(int i = 1; i <= k; i++) {
        a.push_back(i);
        solution(m + 1);
        a.pop_back();
    }
}

int main() {
    cin >> n >> k;
    solution(1);
}