#include "Ex 4/Vehicle.cpp"
#include "Ex 4/Cars.cpp"
#include "Ex 4/PickupTruck.cpp"
#include "Ex 4/SUV.cpp"
int main(){
    Vehicle *v[3] = {new Cars(2011, 300, 999, "Nissan", 5),
                     new SUV(2020, 500, 100, "Mercedes", 10),
                     new PickupTruck(200,33,445,"Land Rover",1)};

    for (int i = 0; i < 3; i++) {
        v[i]->Display();
        cout << "___________________\n";
    }

}