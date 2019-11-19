#include <iostream>

using namespace std;

int main(){
    
    int number_cents {0};
    
    cout << "Enter an amount in cents: ";
    cin >> number_cents;
    
    const int dollar {100}, quarter {25}, dime {10}, nickel {5};
    
    int number_dollars {0}, number_quarters {0}, number_dimes {0}, number_nickels {0}, number_pennies {0};
    number_dollars = number_cents/dollar;
    
    // Remaining cents afterwards:
    number_cents %= dollar;
    
    // Repeat the logic above for quarters, dimes, nickels and pennies.
    number_quarters = number_cents / quarter;
    number_cents %= quarter;
    
    number_dimes = number_cents / dime;
    number_cents %= dime;
    
    number_nickels = number_cents / nickel;
    number_cents %= nickel;
    
    // Number of pennies equal the remainning number of cents.
    number_pennies = number_cents;
    
    cout << "You can provide this change as follows:" << endl;
    cout << "Dollars: " << number_dollars << endl;
    cout << "Quarters: " << number_quarters  << endl;
    cout << "Dimes: " << number_dimes  << endl;
    cout << "Nickels: " << number_nickels  << endl;
    cout << "Pennies: " << number_pennies  << endl;
    
    return 0;
}