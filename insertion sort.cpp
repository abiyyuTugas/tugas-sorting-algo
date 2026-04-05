#include <iostream>
using namespace std;

int main() {
    int data[] = {78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6};
    int n = 16;

    for(int i=1;i<n;i++){
        int key = data[i];
        int j = i-1;

        while(j >= 0 && data[j] > key){
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = key;

        cout << "Iterasi " << i << ": ";
        for(int k=0;k<n;k++) cout << data[k] << " ";
        cout << endl;
    }
}