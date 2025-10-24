#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
               swap(a[j], a[j + 1]);
            }
            for(int k = 0; k < n; k++) cout << a[k] << " ";
            cout << endl;
        }      
    }
}

int main(){
    int a[10] = {3 , 10 , 1, 23, 103, 34 , 17, 53, 64, 71};
    bubbleSort(a , 10);
    system("pause"); 
    return 0;
}