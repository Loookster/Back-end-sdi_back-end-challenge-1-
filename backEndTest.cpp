#include <iostream>
#include <map>
#include <climits> 

using namespace std;

int main() {
   
    map<int, int> carInfo = {
        {5, 5000},  // Small (S)
        {10, 8000}, // Medium (M)	
        {15, 12000} // Large (L)
    };

    int seats;
    cout << "Please input number of seats: ";
    cin >> seats;

    int minCost = INT_MAX; 
    int carCount = 0; 


    for (auto i = carInfo.begin(); i != carInfo.end(); ++i) {
        int carSize = i->first;
        int costPerCar = i->second;
        
        int numOfCars = (seats + carSize - 1) / carSize; 

        if (numOfCars * costPerCar < minCost) {
            minCost = numOfCars * costPerCar;
            carCount = numOfCars;
        }
    }
    
        cout << "Total = PHP " << minCost << endl;
    return 0;
}
