//============================================================================
// Name        : 4.cpp
// Author      : Shil
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
using namespace std;

class Child;

class Parent {
public:
    shared_ptr<Child> p;

    ~Parent() {
        cout << "Parent Destructor..." << endl;
    }
};

class Child {
public:
    shared_ptr<Parent> c; // Changed from weak_ptr to shared_ptr

    ~Child() {
        cout << "Child Destructor..." << endl;
    }
};

int main() {
    auto parent = make_shared<Parent>();
    auto child = make_shared<Child>();

    // Create the circular dependency cycle
    parent->p = child; // Parent points to Child (Child ref count = 2)
    child->c = parent; // Child points to Parent (Parent ref count = 2)

    cout << "Exiting main..." << endl;
    return 0;
}
