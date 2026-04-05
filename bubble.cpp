#include <iostream>
using namespace std;

int main() {
    int data[] = {78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6};
    int n = 16;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(data[j] > data[j+1]){
                swap(data[j], data[j+1]);
            }
        }
        cout << "Iterasi " << i+1 << ": ";
        for(int k=0;k<n;k++) cout << data[k] << " ";
        cout << endl;
    }
}