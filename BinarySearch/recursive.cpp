#include <iostream>
#include <vector>
using namespace std;

// Recursive helper
int binarySearchHelper(vector<int> &arr, int tar, int st, int end) {
    if (st > end) return -1;

    int mid = st + (end - st) / 2;

    if (tar > arr[mid])
        return binarySearchHelper(arr, tar, mid + 1, end);
    else if (tar < arr[mid])
        return binarySearchHelper(arr, tar, st, mid - 1);
    else
        return mid;
}

// Wrapper function (clean call)
int BinarySearch(vector<int> &arr, int tar) {
    return binarySearchHelper(arr, tar, 0, arr.size() - 1);
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int tar = 12;

    cout << BinarySearch(arr, tar);
}