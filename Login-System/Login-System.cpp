#include <iostream>
#include <fstream>
#include <string>

// Check user Logged-In

//Function to return true if user details are correct and matching what is in file
//Else, return false

bool IsLoggedIn() {

    //Gather username + Password into variables
    std::string username, password, un, pw;
    std::cout << "Enter Username: ";
    std::cin >> username; 
    std::cout << "Enter Password: ";
    std::cin >> password;

    //Read from logins.txt

    std::ifstream read("E:\Coding_Projects\C++\LoginSystem\Login-System\logins.txt");
    std::getline(read, un);
    std::getline(read, pw);

    //Check if the read line for username / password matches the provided username and password above

    if (un == username && pw == password) {
        return true;
    }
    else {
        return false;
    }

}


int main()
{
    IsLoggedIn();

    if (IsLoggedIn) {
        std::cout << "You have been signed in.";
        std::cin;
        return 1;
    }
    else {
        std::cout << "Incorrect login.";
        std::cin;
        return 0;
    }
}