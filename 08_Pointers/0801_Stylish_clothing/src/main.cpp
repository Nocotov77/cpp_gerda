#include <iostream>
using namespace std;

int main() {
    int sizeShirt = 0, sizeTrousers = 0, diff = 0, min = 1000000, n1 = 0, n2 = 0;

    cin >> sizeShirt;
    int* arrShirt = new int[sizeShirt];
    
    for (int i = 0; i < sizeShirt; i++) {
        cin >> arrShirt[i];
    }

    cin >> sizeTrousers;
    int* arrTrousers = new int[sizeTrousers];

    for (int i = 0; i < sizeTrousers; i++) {
        cin >> arrTrousers[i];
    }

    for (int i = 0; i < sizeShirt; i++) {
        for (int j = 0; j < sizeTrousers; j++) {
            diff = abs(arrShirt[i] - arrTrousers[j]);
            if (diff <= min)
            {
                min = diff;
                n1 = arrShirt[i];
                n2 = arrTrousers[j];
            }
        }
    }
    cout << n1 << " " << n2;

    return 0;
}