#include <iostream>

using namespace std;

void displaySeats(int** seats, int rows, int cols) {
    cout << "Current Seating Chart (0 = Available, 1 = Reserved):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows in the theater: ";
    cin >> rows;
    cout << "Enter the number of seats per row: ";
    cin >> cols;

    int** seats = new int*[rows];
    for (int i = 0; i < rows; i++) {
        seats[i] = new int[cols]{0}; 
    }

    int reservedCount = 0;
    char choice;

    do {
        int row, col;
        displaySeats(seats, rows, cols); 

        cout << "Enter row (0-" << rows - 1 << ") and seat (0-" << cols - 1 << ") to reserve: ";
        cin >> row >> col;

        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            if (seats[row][col] == 0) { 
                seats[row][col] = 1; 
                reservedCount++;
                cout << "Seat successfully reserved!\n";
            } else {
                cout << "Sorry, this seat is already taken. Choose another.\n";
            }
        } else {
            cout << "Invalid input. Please enter a valid seat number.\n";
        }

        cout << "Do you want to reserve another seat? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); 

    
    cout << "Total seats reserved: " << reservedCount << endl;
    displaySeats(seats, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] seats[i];
    }
    delete[] seats;
    seats = NULL;

    return 0;
}

