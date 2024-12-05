#include <iostream>
using namespace std;

void displayDescending(int *arr, int size);

int main() {
    int scores[25];       // Array to store valid scores
    int count = 0;        // Counter for valid scores

    cout << "Enter scores for 25 participants (0-100):\n";

    while (count < 25) { // Loop until we have 25 valid scores
        int score;
        bool isUnique = true;

        cout << "Enter score " << count + 1 << ": ";
        cin >> score;

        // Check if score is valid (0-100 and above 50)
        if (score > 50 && score <= 100) {
            // Check for duplicates in the scores array
            for (int j = 0; j < count; j++) {
                if (scores[j] == score) {
                    isUnique = false;
                    break;
                }
            }

            // If unique, store the score
            if (isUnique) {
                scores[count] = score;
                count++;
            } else {
                cout << "Duplicate score! Enter a different score.\n";
            }
        } else {
            cout << "Invalid score! Enter a value above 50 and up to 100.\n";
        }
    }

    // Display the scores in descending order
    cout << "\nUnique scores above 50 in descending order:\n";
    displayDescending(scores, count);

    return 0;
}

void displayDescending(int *arr, int size) {
    // Sort in descending order using bubble sort
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted scores
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
