#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename Comparable>
const Comparable & findMax (const vector<Comparable> & a) {
    int maxIndex = 0;

    for (int i = 0; i < a.size(); i++) {
        if (a[maxIndex] < a[i])
            maxIndex = i;
    }

    return a[maxIndex];
}

int main() {

    vector<int> list1 {1, 5, 17, 2, 99, 85, 16};
    int max1 = findMax(list1);
    cout << "Max value is " << max1 << endl;

    vector<float> list2 {1.5, 5.9, 17.13, 2, 99.75, 99.65, 16.0};
    float max2 = findMax(list2);
    cout << "Max value is " << max2 << endl;
    
// A-Z finds greatest letter/word in alphabetical order
    vector<string> list3 {"alpha", "zeta", "beta", "epsilon", "theta"};
    string max3 = findMax(list3);
    cout << "Max value is " << max3 << endl;
}