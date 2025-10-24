#include<iostream>
using namespace std;

void insertionSort(int a[] , int n){
    for(int i = 1; i < n; i++){
        int pos = i - 1, x = a[i];
        while(pos >= 0 && a[pos] > x){
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos + 1] = x;
        for(int j = 0; j < n; j++) cout << a[j] << " ";
        cout << endl;
    }
}

int main(){
    int a[10] = {3 , 10 , 1, 23, 103, 34 , 17, 53, 64, 71};
    insertionSort(a , 10);
    system("pause"); 
    return 0;
}