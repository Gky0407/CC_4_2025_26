//2180/A   Carnival Wheel

#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while (n--) {
        int size, start, step;
        cin >> size >> start >> step;
        int index = start;
        int maxPrize = index;
        for (int i = 0; i < size; i++) {
            if (index > maxPrize)
                maxPrize = index;
            index = (index + step) % size;
        }
        cout << maxPrize << endl;
    }
    return 0;
}
