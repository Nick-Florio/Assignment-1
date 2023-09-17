//
//  main.cpp
//  Homework 1
//
//  Created by Nicholas Florio on 9/11/23.
//

#include <iostream>

using namespace std;

double growthRate(int birth_Rate, int death_Rate) {
    return birth_Rate - death_Rate;
}

double estPopulation(int birth_Rate, int population, int death_Rate) {
    return population + (birth_Rate * population) / 100 - (death_Rate * population) / 100;
}

int main()
{
    double birth_Rate;
    double population;
    double death_Rate;
    int num_Years;
    
    cout << "Enter the Birth Rate " << endl;
    cin  >> birth_Rate;
    
    cout << "Enter the Population " << endl;
    cin  >> population;
    
    cout << "Enter the Death Rate " << endl;
    cin >> death_Rate;
    
    cout << "Enter the number of years to project: ";
    cin >> num_Years;
    
    // Check for invalid inputs
    if (population < 2 || birth_Rate < 0 || death_Rate < 0) {
        cout << "Invalid input. Population must be >= 2, and birth and death rates must be non-negative." << endl;
        return 1;
    }
    
    // Calculate and display the population growth rate
    double growth = growthRate(birth_Rate, death_Rate);
    cout << "Population growth rate: " << growth << "% per year" << endl;
    
    // Calculate and display estimated population for each year
    for (int year = 1; year <= num_Years; year++) {
        population = estPopulation(population, birth_Rate, death_Rate);
        cout << "Estimated population after year " << year << ": " << (int)(population) << endl;
    }
    
    return 0;
    
}
/*popRate = getPopRate(birth_Rate,death_Rate);
 cout << " The Population Growth Rate is " << popRate << endl;*/

/*float getPopRate(int birth_Rate,int death_Rate)
 {
 float popRate;
 popRate = birth_Rate - death_Rate;
 return popRate;
 }*/

