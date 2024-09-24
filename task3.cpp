#include <iostream>
using namespace std;
const int rows = 10;
const int seats_row = 15;
void displaySeating(int seats[rows][seats_row])
 {
    cout << "Current Seating Arrangement 0 = Available, 1 = Occupied): "<<endl;
    for (int i = 0; i <rows; ++i) 
    {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < seats_row; ++j) 
        {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}
void bookSeat(int seats[rows][seats_row])
 {
    int row, seat;
    cout << "Enter row number (1-" <<rows<< "): ";
    cin >> row;
    cout << "Enter seat number (1-" <<seats_row<< "): ";
    cin >> seat;
    row -= 1;
    seat -= 1;
    
    if (row >= 0 && row <rows&& seat >= 0 && seat <seats_row) 
    {
        if (seats[row][seat] == 0) 
        {
            seats[row][seat] = 1;
            cout << "Seat successfully booked!\n";
        }
         else 
         {
            cout<<"Seat already occupied. Please choose another seat.\n";
        }
    }
     else 
     {
        cout << "Invalid row or seat number. Please try again.\n";
    }
}
int main() 
{
    int seats[rows][seats_row] = {0};

    int choice;
    do
     {
        cout << "\nCinema Seat Booking System\n";
        cout << "1. Display seating arrangement\n";
        cout << "2. Book a seat\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                displaySeating(seats);
                break;
            case 2:
                bookSeat(seats);
                break;
            case 3:
                cout << "Exiting the system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } 
    while (choice != 3);
    return 0;
}
