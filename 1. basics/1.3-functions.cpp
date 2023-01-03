#include <iostream>

using namespace std;

void printSomething();

int add(int a, int b) {
    return a + b;
};

int main() 
{
    // printSomething();
    cout << add(1,2) << endl;
    return 0;
}

void printSomething() {
    cout << "Ay let's go!" <<  endl;
}

