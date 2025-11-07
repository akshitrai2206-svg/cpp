//Basic Pointer Operations
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in pointer ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    *ptr = 25;
    cout << "Updated value of a using pointer: " << a << endl;
    return 0;
}
//Pointer and Arrays
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  // Points to first element

    cout << "Array elements using pointer: ";
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    return 0;
}
// Pointer to Pointer
#include <iostream>
using namespace std;

int main() {
    int var = 100;
    int *ptr = &var;
    int **pptr = &ptr;

    cout << "Value of var: " << var << endl;
    cout << "Value using single pointer: " << *ptr << endl;
    cout << "Value using double pointer: " << **pptr << endl;
    return 0;
}
