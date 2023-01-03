#include <iostream>

using namespace std;

class CatClass{
    public:
        void setSound(string inputNoise) {
            noise = inputNoise;
        }
        string makeSound() {
            return noise;
        }
        

    private:
        string noise;
};


int main() {
    CatClass myCat;
    myCat.setSound("purr");
    cout << myCat.makeSound() << endl;
    return 0;
}
