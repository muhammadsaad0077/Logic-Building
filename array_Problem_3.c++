#include<iostream>
using namespace std;

float calculateRent(int, int);

/*

A car rental company charges a base fee of $25.00 per day, plus
$0.15 per mile driven. Write a function that takes the number of days
the car is rented and the number of miles driven as parameters, and
returns the total cost of the rental. If the number of days is more than
30 the user gets a 20% discount, however, if the days are less than
15 extra $1.99 is charged per day.


*/

int main(){

    int no_of_day, per_mile;

    cin>>no_of_day>>per_mile;

    float total_rent = calculateRent(no_of_day, per_mile);

    cout<<"Your car rent is "<<total_rent;


}

float calculateRent(int no_of_day, int per_mile){
    float total_rent;

    total_rent = (no_of_day * 25) + (per_mile * 0.15);

    if(no_of_day > 30){
        float discout = 0.2 * total_rent;
        total_rent -= discout;
        return total_rent;
    }

    else if(no_of_day < 15){
        float extra_charges = 1.99 * no_of_day;
        total_rent += extra_charges;
        return total_rent;
    }

    else{
        return total_rent;
    }
}