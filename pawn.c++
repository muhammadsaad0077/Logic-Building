// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isValidMove(int fr,int fc,int tr,int tc, bool isWhite){
    if(isWhite){
        if(fc == tc && tr == fr - 1){
            return true;
        }
        else if(fr == 6 && tr == fr -2){
            return true;
        }
        else{
            false;
        }
    }
    else{
        if(fc == tc && tr == fr +1){
            return true;
        }
        else if(fr == 1 && tr == fr + 2){
            return true;
        }
    }
    return false;
}

int main() {
    int startRow, startCol, endRow, endCol;
    bool isWhite;
    
    cout << "Enter starting row (0-7): ";
    cin >> startRow;
    cout << "Enter starting column (0-7): ";
    cin >> startCol;
    cout << "Enter ending row (0-7): ";
    cin >> endRow;
    cout << "Enter ending column (0-7): ";
    cin >> endCol;
    cout << "Is the pawn white? (1 for Yes, 0 for No): ";
    cin >> isWhite;
    
    if(isValidMove(startRow, startCol, endRow, endCol, isWhite)){
        cout<<"Valid Move";
    }
    else{
        cout<<"Invalid move";
    }
    

    return 0;
}