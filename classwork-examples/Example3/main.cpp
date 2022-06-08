#include <iostream>
#include <string>
#include <vector>
using namespace std;

string findMax (vector<string> a) {
    int maxIndex = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }

    return a[maxIndex];
}

int main() {

    vector<string> list {"alpha", "zeta", "beta", "zebra", "crocodile"};

    string max = findMax(list);

    cout << "Max value is " << max << endl;
}