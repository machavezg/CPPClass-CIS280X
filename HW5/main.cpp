#include <iostream>
#include "Measurement.h"

using namespace std;

int main() {
    Measurement h1(4,10);
    Measurement h2(4,11);
    cout << "\nHeight 1: " << h1 << " Height 2: "  << h2 << endl;
    if (h2 == h1)
        cout << "Height 1 and Height 2 are the Same Height" << endl;
    else
        cout << "Height 1 and Height 2 are Different Height" << endl;

    if (h2 != h1)
        cout << "Height 1 and Height 2 are Different Height" << endl;
    else
        cout << "Height 1 and Height 2 are the Same Height" << endl;
    cout << endl;
    
    cout << "Height: " << h1 << endl;
    h1 + 1;
    cout << "Using + to add 1: " << h1 << endl;
    h1 * 2;
    cout << "Using * to multiply inches by 2: " << h1 << endl;
    h1 - 15;
    cout << "Using - to subtract height by 15 inches: " << h1 << endl;
    
    cout << "\nHeight 1: " << h1 << " (>) Height 2: "  << h2 << endl;
    if (h1 > h2)
        cout << "Height 1 is Larger Thank Height 2" << endl;
    else
        cout << "Height 1 is Smaller Than Height 2" << endl;

    cout << "\nHeight 1: " << h1 << " (>=) Height 2: "  << h2 << endl;
    if (h1 >= h2)
        cout << "Height 1 is Larger or Equal to Height 2" << endl;
    else
        cout << "Height 1 is Smaller Than Height 2" << endl;
    
    cout << "\nHeight 1: " << h1 << " (<) Height 2: "  << h2 << endl;
    if (h1 < h2)
        cout << "Height 1 is Smaller Than Height 2" << endl;
    else
        cout << "Height 1 is Larger Than Height 2" << endl;

    cout << "\nHeight 1: " << h1 << " (<=) Height 2: "  << h2 << endl;
    if (h1 <= h2)
        cout << "Height 1 is Smaller or Equal to Height 2" << endl;
    else
        cout << "Height 1 is Larger Than Height 2" << endl;

    h1 = h2;
    cout << "\nHeight 1: " << h1 << " (=) Height 2: "  << h2 << endl;
    
    Measurement h3;
    cout << "\nEnter a height (feet,inches): ";
    //cin >> h3;
    //cout << "Using stream insertion >> & extraction <<: " << h3 << endl;
    
    return 0;
}

