#include <iostream>

using namespace std;

int main() {
    //STATIC ARRAYS
    //Initialize
    int myNumbers[5] = {3,4,5};

    //Access
    cout << myNumbers[0] << endl;
    cout << myNumbers[1] << endl;
    cout << myNumbers[2] << endl;
    cout << myNumbers[3] << endl;
    cout << myNumbers[4] << endl;

    //Modify
    myNumbers[4] = 8;
    cout << myNumbers[4] << endl;

    //MULTIDIMENSIONAL ARRAYS
    //Initialize
    int board[2][3] = {{0,1,2},{3,4,5}};

    //Access
    cout << board[1][2] << endl; // 5

    //Modify
    board[1][2] = 8;
    cout << board[1][2] << endl;

    //DYNAMIC ARRAYS
    //VECTORS
    
    



}