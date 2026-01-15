#include<iostream>
using namespace std;
int binarysearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        if (arr[mid] == key) {
            return mid; 
        }
        else if (arr[mid] < key) {
            start = mid + 1; 
        }
        else {
            end = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " elements in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = binarysearch(arr, size, key);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    }
    else {
        cout << "Element not found in the array." << endl;
    }
    delete[] arr; 
    return 0;
}