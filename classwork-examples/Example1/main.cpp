#include <iostream>
#include <string>
#include <vector>
using namespace std;

int findMax (vector<int> a) {
    int maxIndex = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }

    return a[maxIndex];
}

int main() {

    vector<int> list {1, 5, 17, 2, 99, 85, 16};

    int max = findMax(list);

    cout << "Max value is " << max << endl;
}