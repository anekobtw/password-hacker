#include <iostream>

using namespace std;

int main() {
    // get the password
    string password;
    cout << "Enter the password: ";
    getline(cin, password);

    // trying to guess it
    char keyboardCharacters[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
                                 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P',
                                 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',
                                 'Z', 'X', 'C', 'V', 'B', 'N', 'M',
                                 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p',
                                 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l',
                                 'z', 'x', 'c', 'v', 'b', 'n', 'm',
                                 '!', '@', '#', '$', '%', '^', '&', '*', '(', ')',
                                 '-', '_', '=', '+',
                                 '[', ']', '{', '}', ';', ':', '\'', '"',
                                 ',', '<', '.', '>', '/', '?',
                                 '\\', '|', '`', '~', ' '};
    
    string guessed_password = "";
    for (char letter : password) {
        int i = 0;
        while (keyboardCharacters[i] != letter) {
            system("cls"); // Remove the following line if you don't want to clear the console in each iteration
            cout << "Enter the password: " << password << "\n";
            cout << guessed_password + keyboardCharacters[i+1] << "\n";

            i++;
        }

        guessed_password += keyboardCharacters[i];
    }

    cout << "\nYour password has been guessed! " << guessed_password;
    
    return 0;
}