#include <iostream>

using namespace std;

class MyClass{
    public:
        void coolSaying() {
            cout << "preaching to the choir" << endl;
        }
};


int main() {
    MyClass myObject;
    myObject.coolSaying();
    return 0;
}
