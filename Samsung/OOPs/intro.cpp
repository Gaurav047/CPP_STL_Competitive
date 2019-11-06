#include <iostream>
using namespace std;

class car {
    public:
        int car_id;
        double distance;

        void distance_travelled();

        void display( int a, int b){
            cout << "Car id is = \t" << a << "\nDistance Travelled is :" << b+5 << endl;
        }
};

int main(){
    car c1; // declare an object of class car.
    c1.car_id = 321;
    c1.distance = 12;
    c1.display(321, 12);

    return 0;
}