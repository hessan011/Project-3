#include <iostream>
using namespace std;
int sumArray(int arr[], int size) {
    if(size <= 0) {
        return 0;
    }
    return arr[size - 1] + sumArray(arr, size - 1);
}
int main() {
    int arr[] = {2, 4, 6, 8};
    int size = 4;
    cout << "Sum: " << sumArray(arr, size) << endl;
    return 0;
}