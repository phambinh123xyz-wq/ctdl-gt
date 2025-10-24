#include<iostream>
using namespace std;

void selectionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int min_val = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[min_val]){
                min_val = j;
            }
        }
        swap(a[i] , a[min_val]);
        for(int k = 0; k < n; k++) cout << a[k] << " ";
        cout << endl;
    }
}

int main(){
    int a[10] = {3 , 10 , 1, 23, 103, 34 , 17, 53, 64, 71};
    selectionSort(a , 10);
    system("pause"); 
    return 0;
}