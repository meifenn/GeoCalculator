#include <iostream>
#include "Shape.hpp"

using namespace std;

int main() {
    int choice;
    Shape* shape = nullptr;

    do {
        cout << "===== Geometry Calculator =====" << endl;
        cout << "1. Circle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "0. Exit" << endl;
        cout << "Select a shape: ";
        cin >> choice;

        switch (choice) {
        case 1: shape = new Circle(); break;
        case 2: shape = new Rectangle(); break;
        case 3: shape = new Triangle(); break;
        case 0: cout << "Goodbye!" << endl; continue;
        default: cout << "Invalid option." << endl; break;
        }

        shape->getInput();
        shape->display();
        delete shape;

        cout << endl << "Press Enter to continue...";
        cin.ignore(); cin.get();

    } while (choice != 0);

    return 0;
}
