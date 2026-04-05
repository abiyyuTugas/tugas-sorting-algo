#include <iostream>
using namespace std;

int main() {
    int data[] = {78,48,10,3,36,37,43,16,34,45,25,38,72,36,53,6};
    int n = 16;

    for(int i=0;i<n;i++){
        int min_idx = i;
        for(int j=i+1;j<n;j++){
            if(data[j] < data[min_idx])
                min_idx = j;
        }
        swap(data[i], data[min_idx]);

        cout << "Iterasi " << i+1 << ": ";
        for(int k=0;k<n;k++) cout << data[k] << " ";
        cout << endl;
    }
}