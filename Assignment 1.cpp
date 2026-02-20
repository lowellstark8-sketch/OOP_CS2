#include <bits/stdc++.h>
using namespace std;

void swapVal (int *a, int *b){
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main() {
    int n1, n2;
    
    cout << "x = ";
    cin >> n1;
    
    cout << "y = ";
    cin >> n2;
    cout << endl; 

    cout << "Before Swapping:\n";
    cout << "x = " << n1 << endl;
    cout << "y = " << n2 << endl;

    int *a = &n1;
    int *b = &n2;
    
    swapVal(&n1, &n2);

    cout << "\nAfter Swapping:\n";
    cout << "x = " << n1 << endl;
    cout << "y = " << n2 << endl;

    return 0;
}
