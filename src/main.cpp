#include <iostream>
using namespace std;

int main(){
    int customers, tickets, adults, children, seniors, admin, login, password;

    // Display welcome message and login/create account options
    cout << "Welcome to Sail Check!" << endl;
    cout << "Please login/create account to continue." << endl;
    cout << "1. Login" << endl;
    cout << "2. Create Account" << endl;
    cout << "3. Exit" << endl;
    cout << "Please select an option: ";
    int option;
    cin >> option;
    // Handle user selection for login, account creation, or exit
    if (option == 1) {  
    cout << "log in selected." << endl;
    cout << "Please enter your login credentials." << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    if (options == 2) {
    cout << "Create account selected." << endl;
    cout << "Please enter your desired login credentials." << endl;
    cout << "Login: ";
    cin >> login;
    cout << "Password: ";
    cin >> password;
    }
    else if (option == 3) {
    cout << "Exiting program. Thank you, Goodbye see you soon!" << endl;
    }

    // After login or account creation, proceed to ticket purchasing

    cout << "Welcome to Sail Check!" << endl;
    cout << "How many tickets do you want to avail? ";
    cin >> customers;
    cout << "How many adults? ";
    cin >> adults;
    cout << "How many children? ";
    cin >> children;
    cout << "How many seniors? ";
    cin >> seniors;
// confirmation of the user's selection before finalizing the purchase
    cout << "are you sure about your selection? (1 for yes, 2 for no) ";
    int confirm;
    cin >> confirm;
    if (confirm == 1) {
        cout << "Thank you for your purchase! Enjoy your trip!" << endl;
    }
    else if (confirm == 2) {
        cout << "Please restart the program to make a new selection." << endl;
    }
cout << "Thank you for using Sail Check! Goodbye! See you soon!" << endl;

    return 0;
}
