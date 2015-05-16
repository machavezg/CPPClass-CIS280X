#include <iostream>
#include "Measurement.h"

using namespace std;

int main() {
    Measurement h1(4,2);
    Measurement h2(4,5);
    if (h2 == h1)
        cout << "Same Height" << endl;
    else
        cout << "Different Height" << endl;

    if (h2 != h1)
        cout << "Different Height" << endl;
    else
        cout << "Same Height" << endl;
    
    cout << "Height: " << h1 << endl;
    h1 + 1;
    cout << "Using +: " << h1 << endl;
    h1 * 2;
    cout << "Using *: " << h1 << endl;
    h1 - 1;
    cout << "Using -: " << h1 << endl;
    
    if (h2 > h1)
        cout << "Larger Height" << endl;
    else
        cout << "Smaller Height" << endl;
    
    h1 = h2;
    if (h2 >= h1)
        cout << "Larger or Same Height" << endl;
    else
        cout << "Smaller Height" << endl;
    
    h1 = h2;
    h2 - 1;
    if (h2 < h1)
        cout << "Smaller" << endl;
    else
        cout << "Larger Height" << endl;
    
    h1 = h2;
    if (h2 <= h1)
        cout << "Smaller or Same Height" << endl;
    else
        cout << "Larger Height" << endl;
    
    Measurement h3;
    cout << "\nEnter a height (feet,inches): ";
    cin >> h3;
    cout << "Using stream insertion >> & extraction <<: " << h3 << endl;
    
    return 0;
}

