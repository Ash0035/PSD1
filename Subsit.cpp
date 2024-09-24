#include <iostream>
#include <string>

int main() {
    
    char original[] = "abcdefghijklmnopqrstuvwxyz"; 
    char substitute[] = "mnopqrstuvwxyzabcdefghijkl";

    std::string inputText;
    std::cout << "Enter your text (lowercase letters only): ";
    std::getline(std::cin, inputText); 

    std::string modifiedText = ""; 

    
    for (char ch : inputText) {
       
        bool found = false;
        for (int i = 0; i < 26; ++i) { 
            if (ch == original[i]) { 
                modifiedText += substitute[i];
                found = true;
                break;
            }
        }
        
        if (!found) {
            modifiedText += ch; 
        }
    }

   
    std::cout << "Modified text: " << modifiedText << std::endl;

    return 0;
}
