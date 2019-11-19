// Word Pyramid

#include <iostream>
#include <string>

using namespace std;

int main(){

    string letters {};
    
    cout << "Enter a string of letters so I can create a Word Pyramid from it: ";
    getline(cin, letters);
    
    size_t num_letters = letters.length();
    int position {0};
    
    // For each letter in the string:
    for (char c: letters){
        
        size_t num_spaces = num_letters - position;
        while (num_spaces > 0){
            cout << " ";
            --num_spaces;
        }
        
        // Display in order up to the current character
        for (size_t j = 0; j < position; j++)
            cout << letters.at(j);
            
        // Display the current 'center' character
        cout << c;
        
        //Display the remaining characters in reverse order
        for (int j = position - 1; j >= 0; --j){
            auto k = static_cast<size_t>(j);
            cout << letters.at(k);
        }
        
        cout << endl;
        ++position;
    }
    
    return 0;
}