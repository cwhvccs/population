/*Program file name: Population.cpp
Programer: Christopher Hicks
Date: 4/26
Requirements: Write a program that predicts the population of organisms given the starting number, average daily population increase, and number of days.*/

#include <iostream>
using namespace std;

int main() {
    int startingPopulation, days;
    double dailyIncrease;

    //starting population
    cout << "Enter the starting number of organisms: ";
    cin >> startingPopulation;
    while (startingPopulation < 2) {
        cout << "Starting population must be at least 2. Try again: ";
        cin >> startingPopulation;
    }

    //daily increase (>= 0)
    cout << "Enter the average daily population increase (in %): ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0) {
        cout << "Percentage cannot be negative. Try again: ";
        cin >> dailyIncrease;
    }

    //number of days
    cout << "Enter the number of days they will multiply: ";
    cin >> days;
    while (days < 1) {
        cout << "Days must be at least 1. Try again: ";
        cin >> days;
    }

    int population = startingPopulation;

    cout << "\nDay\tPopulation\n";

    for (int day = 1; day <= days; day++) {
        cout << day << "\t" << population << endl;
        population += population * (dailyIncrease / 100);
    }

    return 0;
}