#include <iostream>
#include <cstdlib>

using namespace std;

void showMenu() {
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an operation: ";
}

int main() {
    int choice;
    double num1, num2, result;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please choose a valid operation." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}

