#include <iostream>
#include "Date.h"

using namespace std;

int main() {
    Date today(4,19,2015);
    Date tomorrow(4,30,2015);
    if (tomorrow == today)
        cout << "Same Day" << endl;
    else
        cout << "Different Day" << endl;
    cout << "Today: " << today << endl;
    today + 1;
    cout << "Using +: " << today << endl;
    today += 1;
    cout << "Using += " << today << endl;
    today - 1;
    cout << "Using -: " << today << endl;
    today -= 1;
    cout << "Using -=: " << today << endl << endl;

    ++today;
    cout << "Using pre ++: " << today << endl;
    today++;
    cout << "Using post ++: " << today << endl;
    --today;
    cout << "Using pre --: " << today << endl;
    today--;
    cout << "Using post --: " << today << endl;
    
    if (tomorrow > today)
        cout << "Later Day" << endl;
    else
        cout << "Earlier Day" << endl;
    
    today = tomorrow;
    if (tomorrow >= today)
        cout << "Later or Same Day" << endl;
    else
        cout << "Earlier Day" << endl;
    
    today = tomorrow;
    tomorrow - 1;
    if (tomorrow < today)
        cout << "Earlier" << endl;
    else
        cout << "Later Day" << endl;
    
    today = tomorrow;
    if (tomorrow <= today)
        cout << "Earlier or Same Day" << endl;
    else
        cout << "Later Day" << endl;
    
    Date yesterday;
    cout << "\nEnter yesterday's date (MM/DD/YYYY): ";
    cin >> yesterday;
    cout << "Using stream insertion >> & extraction <<: " << yesterday << endl;
    
    return 0;
}

