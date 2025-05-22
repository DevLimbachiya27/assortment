#include <iostream> 
using namespace std;

int main() {
    int size;
     cout << "Enter how many elements: ";
     cin >> size;
     int a[size];
     cout << "Enter " << size << " numbers:\n";
    
     for (int i = 0; i < size; i++) {
        cin >> a[i]; 
    }
    cout << "Negative numbers are: ";
    
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) { 
            cout << a[i] << " "; 
        }
    }
    return 0;
}

    
   

    
    

    
    

    
    

    