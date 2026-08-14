#include <iostream>
#include <string>
using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// Function to check prime number
bool isPrime(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Function to calculate sum of array
int arraySum(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

// Function to find largest number
int findLargest(int arr[], int size) {
    int largest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main() {

    string name;
    int choice;

    cout << "=====================================\n";
    cout << "       WELCOME TO C++ PROGRAM\n";
    cout << "=====================================\n";

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nHello, " << name << "! Welcome.\n";

    do {
        cout << "\n----------- MAIN MENU -----------\n";
        cout << "1. Factorial\n";
        cout << "2. Check Prime Number\n";
        cout << "3. Array Operations\n";
        cout << "4. Multiplication Table\n";
        cout << "5. Number Pattern\n";
        cout << "6. Exit\n";
        cout << "---------------------------------\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: {
                int n;

                cout << "\nEnter a number: ";
                cin >> n;

                if (n < 0) {
                    cout << "Factorial of negative number is not possible.\n";
                } else {
                    cout << "Factorial of " << n << " = "
                         << factorial(n) << endl;
                }

                break;
            }

            case 2: {
                int n;

                cout << "\nEnter a number: ";
                cin >> n;

                if (isPrime(n))
                    cout << n << " is a Prime Number.\n";
                else
                    cout << n << " is not a Prime Number.\n";

                break;
            }

            case 3: {
                int arr[10];

                cout << "\nEnter 10 numbers:\n";

                for (int i = 0; i < 10; i++) {
                    cout << "Number " << i + 1 << ": ";
                    cin >> arr[i];
                }

                cout << "\nArray Elements: ";

                for (int i = 0; i < 10; i++) {
                    cout << arr[i] << " ";
                }

                cout << "\n";

                cout << "Sum = "
                     << arraySum(arr, 10) << endl;

                cout << "Largest = "
                     << findLargest(arr, 10) << endl;

                break;
            }

            case 4: {
                int n;

                cout << "\nEnter a number: ";
                cin >> n;

                cout << "\nMultiplication Table of "
                     << n << ":\n";

                for (int i = 1; i <= 10; i++) {
                    cout << n << " x " << i
                         << " = " << n * i << endl;
                }

                break;
            }

            case 5: {
                int rows;

                cout << "\nEnter number of rows: ";
                cin >> rows;

                cout << "\nPattern:\n";

                for (int i = 1; i <= rows; i++) {

                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }

                    cout << endl;
                }

                break;
            }

            case 6:
                cout << "\nThank you, " << name << "!\n";
                cout << "Program ended successfully.\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
