#include <iostream>
using namespace std;

void quickSort(int arr[], int low, int high){
    if(low >= high) return;

    int pivot = arr[(low+high)/2];
    int i = low, j = high;

    while(i <= j){
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i <= j){
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }

    quickSort(arr, low, j);
    quickSort(arr, i, high);
}

int main(){
    int data[] = {78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6};
    int n = 16;

    quickSort(data, 0, n-1);

    cout << "Hasil: ";
    for(int i=0;i<n;i++) cout << data[i] << " ";
}