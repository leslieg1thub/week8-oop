//cpp
//
// ACTIVITY 2: STACK VS HEAP OBJECTS
// Learning Outcome: Analyse stack vs heap memory allocation
//

#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        string model;

        // Constructor
        Car(string m) {
            model = m;
            cout << "Car created: " << model << endl;
        }

        // Destructor: Automatically runs when a Car object is destroyed.
        ~Car() {
            cout << "Car destroyed: " << model << endl;
        }

};

int main() {
    cout << "   Creating Stack Object   " << endl;
    // STACK ALLOCATION: Memory is automatically managed. The object is destroyed when it goes out of scope.
    Car stackCar("Toyota");

    cout << "\n   Creating Heap Object   " << endl;
    // HEAP ALLOCATION: Memory must be manually managed using 'new'. The object persists until we delete it.
    // Note: We use a pointer (*) to hold the memory address.
    Car* heapCar = new Car("Honda");

    // To access the heap object's members, we use the arrow operator (->) because heapCar is a pointer.
    cout << "Heap Car Model: " << heapCar->model << endl;

    cout << "\n   End of main function   " << endl;

    // We MUST manually delete the heap object to avoid memory leaks. This calls the destructor for the heap object.
    delete heapCar;

    // The stackCar object will be automatically destroyed when it goes out of scope at the end of main().
    return 0;
}
