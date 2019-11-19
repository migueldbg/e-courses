#include <iostream>
#include <vector>

using namespace std;

void display_menu ();
char get_selection ();
void handle_display (const vector<int> &v);
void handle_add (vector<int> &v);
void handle_mean (const vector<int> &v);
void handle_smallest (const vector<int> &v);
void handle_largest (const vector<int> &v);
void handle_find (const vector<int> &v);

void display_list (const vector<int> &v);
double calculate_mean (const vector<int> &v);
bool find (const vector<int> &v, int target);

int main(){
    
    vector<int> numbers;
    char selection {}; 
    
    do {
        display_menu();
        selection = get_selection();
        switch(selection){
            case 'P':
                handle_display(numbers);
                break;
            case 'A':
                handle_add(numbers);
                break;
            case 'M':
                handle_mean(numbers);
                break;
            case 'S':
                handle_smallest(numbers);
                break;
            case 'L':
                handle_largest(numbers);
                break;
            case 'F':
                handle_find(numbers);
                break;
            case 'Q':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Unknown selection, try again." << endl;
        }
    } while (selection != 'Q');
    cout << endl;
    
    return 0;
}

/*****************************************************************
 * This function displays the menu to the console.
*****************************************************************/
void display_menu (){
    cout << "\nP - Print numbers." << endl;
    cout << "A - Add a number." << endl;
    cout << "M - Display mean of the numbers." << endl;
    cout << "S - Display the smallest number." << endl;
    cout << "L - Display the largest number." << endl;
    cout << "F - Find a number." << endl;
    cout << "Q - Quit." << endl;
    cout << "\nEnter your choice: ";
}


/*****************************************************************
 * This function simply reads a character selection from stdin
 * and returns it as upper case.
*****************************************************************/
char get_selection (){
    char selection;
    cin >> selection;
    return toupper(selection);
}


/*****************************************************************
 * This function is called when the user selects the display list
 * option from the main menu.
*****************************************************************/
void handle_display (const vector<int> &v){
    if (v.size() == 0)
        cout << "[] - The list is empty." << endl;
    else
        display_list(v);
}


/*****************************************************************
 * This function is called when the user selects the add a number
 * to the list option from the main menu.
*****************************************************************/
void handle_add (vector<int> &v){
    int num_to_add;
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added to the list." << endl;
}


/*****************************************************************
 * This function is called when the user selects the calculate
 * the mean option from the main menu.
*****************************************************************/
void handle_mean (const vector<int> &v){
    if (v.size() == 0)
        cout << "Unable to calculate mean - the list is empty." << endl;
    else
        cout << "The mean is" << calculate_mean(v) << endl;
}

 
/*****************************************************************
 * This function is called when the user selects the display the
 * smallest number option from the menu.
*****************************************************************/
void handle_smallest (const vector<int> &v){
    int smallest {v.at(0)};
    if (v.size() == 0)
        cout << "Unable to determinte the smallest number - list is empty." << endl;
    else {
        for (auto num: v)
            if (num < smallest)
                smallest = num;
        cout << "The smallest number is: " << smallest << "." << endl; 
    }
}


/*****************************************************************
 * This function is called when the user selects the display the
 * smallest number option from the menu.
*****************************************************************/
void handle_largest (const vector<int> &v){
    int largest {v.at(0)};    
    if (v.size() == 0)
        cout << "Unable to determine largest number - list is empty." << endl;
    else {
        for (auto num: v)
            if (num > largest)
                largest = num;
        cout << "The largest number is: " << largest << "." << endl;
    }
}


/*****************************************************************
*****************************************************************/
void handle_find (const vector<int> &v){
    int target {};
    cout << "Enter the number you wish to find. ";
    cin >> target;
    if (find(v, target))
        cout << target << " was found." << endl;
    else
        cout << target << " was not found." << endl;
}


/*****************************************************************
 * This function expects a list of integers as a vector and
 * displays all the integers in the list inside square brackets.
*****************************************************************/
void display_list (const vector<int> &v){
    cout << "[ ";
    for (auto num: v)
        cout << num << " ";
    cout << "]" << endl;
}


/*****************************************************************
 * This function expects a list of integers as a vector and
 * returns the calculated mean.
*****************************************************************/
double calculate_mean (const vector <int> &v){
    double total {};
    for (auto num: v)
        total += num;
    return (total/v.size());
}


/*****************************************************************
*****************************************************************/
bool find (const vector<int> &v, int target){
    for (auto num: v)
        if (num == target)
            return true;
    return false;
}