#include <iostream>
using namespace std;

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << endl;
}

int partition(int a[], int l, int r, int n) {
    int pivot = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++) {
        if (a[j] <= pivot) {
            ++i;
            swap(a[i], a[j]);
        }
    }
    ++i;
    swap(a[i], a[r]);

    printArray(a, n); 
    return i;
}

void quicksort(int a[], int l, int r, int n) {
    if (l < r) {
        int p = partition(a, l, r, n);
        quicksort(a, l, p - 1, n);
        quicksort(a, p + 1, r, n);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    quicksort(a, 0, n - 1, n);
}