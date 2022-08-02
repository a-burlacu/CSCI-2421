#include <iostream>
using namespace std;

void insertionSort (int * list, int size);


int main() {
    int list[] = { 2, 4, 6, 8, 10, 1, 3, 5,
                   7, 9};
    int size = 10;
    insertionSort(list, size);

    for (int i =0; i < size; i++) {
        cout << list[i] << endl;
    }


    return 0;
}

void insertionSort (int * list, int size) {
    int temp, index;

    for (int nextPos = 1; nextPos <= size - 1; nextPos++) {
        index = nextPos;
        temp = list[nextPos];
        while (index > 0 && list[index - 1] > temp) {
            list[index] = list[index - 1];
            index--;
        }
        list[index] = temp;
    }
}

