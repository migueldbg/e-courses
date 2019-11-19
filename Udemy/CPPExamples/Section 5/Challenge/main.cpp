#include <iostream>

using namespace std;

int main(){
    
    cout << "Welcome to Sid's Carpet Cleaning Service!" << endl;
    
    int small_rooms {0};
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;
    
    int large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    
    const double small_room_price {25};
    const double large_room_price {35};
    
    const double tax {0.06};
    const int estimate_expiry {30}; //days.
    
    cout << "\nEstimate for carpet cleaning service:" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    
    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;
    
    cout << "Cost: $" << (small_rooms * small_room_price) + 
                         (large_rooms * large_room_price) 
                      << endl;
    
    cout << "Tax: $" << ((small_rooms * small_room_price) +
                         (large_rooms * large_room_price)) * tax 
                     << endl;
    
    cout << "=====================================" << endl;
    cout << "Total estimate: $" 
         << ((small_rooms*small_room_price) + (large_rooms*large_room_price)) + 
            (((small_rooms*small_room_price) + (large_rooms*large_room_price))*tax) 
         << endl;
         
    cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
    
    return 0;
}