#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> list {};
    char selection {};
    
    do {
        // Display menu
        cout << "\nP - Print numbers." << endl;
        cout << "A - Add a number." << endl;
        cout << "M - Display mean of numbers." << endl;
        cout << "S - Display the smallest number." << endl;
        cout << "L - Display the largest number." << endl;
        cout << "Q - Quit." << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        if (selection == 'p' || selection == 'P'){
            if (list.size() == 0)
                cout << "[] - The list is empty." << endl;
            else {
                cout << "[ ";
                for (auto num: list)
                    cout << num << " ";
                cout << "]" << endl;
            }
        }
        else if (selection == 'a' || selection == 'A'){
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            list.push_back(num_to_add);
            cout << num_to_add << " has been added to the list." << endl;
        }
        else if (selection == 'm' || selection == 'M'){
            if (list.size() == 0)
                cout << "Unable to calculate the mean - list is empty." << endl;
            else {
                double total {};
                for (auto num: list)
                    total += num;
                cout << "The mean value of your list is " << (total/list.size()) << "." << endl;
            }
        }
        else if (selection == 's' || selection == 'S'){
            if (list.size() == 0)
                cout << "Unable to determine smallest number - list is empty." << endl;
            else {
                int smallest {list.at(0)};
                for (auto num: list)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << "." << endl; 
            }
            
        }
        else if (selection == 'l' || selection == 'L'){
            if (list.size() == 0)
                cout << "Unable to determine largest number - list is empty." << endl;
            else {
                int largest {list.at(0)};
                for (auto num: list)
                    if (num > largest)
                        largest = num;
                cout << "The largest number is: " << largest << "." << endl;
            }
        }
        else if (selection == 'q' || selection == 'Q'){
            cout << "Thank you for using our program. Goodbye!" << endl;
        }
        else{
            cout << "Invalid selection. Please try again." << endl;
        }
    } while (selection != 'q' && selection != 'Q');
    
    return 0;
}