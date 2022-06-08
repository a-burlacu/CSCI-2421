#include <iostream>
#include <string>
#include <vector>
using namespace std;

float findMax (vector<float> a) {
    float maxIndex = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }

    return a[maxIndex];
}

int main() {

    vector<float> list {1.5, 5.9, 17.13, 2, 99.75, 99.65, 16.0};

    float max = findMax(list);

    cout << "Max value is " << max << endl;
}