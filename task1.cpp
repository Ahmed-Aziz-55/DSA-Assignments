#include <iostream>
using namespace std;
int main()
{
    cout << "Library Management System" << endl;
    int books[100];
    for (int i = 0; i < 100; i++)
     {
        books[i] = 0; 
    }
    int newBookIndex = 0; 
    books[newBookIndex] = 5;
    cout << "\nAdded a new book at index " << newBookIndex << " with 5 copies." << endl;
    cout << "\nCurrent Number of Copies for Books: " << endl;
    for (int i = 0; i < 10; i++) 
    { 
        cout << "Book #" << i + 1 << " Copies: " << books[i] << endl;
    }
    int borrowIndex;
    cout << "\nEnter the book index to borrow (0-99): ";
    cin >> borrowIndex;
    if (books[borrowIndex] > 0)
     {
        books[borrowIndex]--;
        cout << "One copy borrowed from Book #" << borrowIndex + 1 << ". Remaining copies: " << books[borrowIndex] << endl;
    } 
    else 
    {
        cout << "No copies available for Book #" << borrowIndex + 1 << endl;
    }
    int returnIndex;
    cout << "\nEnter the book index to return (0-99): ";
    cin >> returnIndex;
    books[returnIndex]++;
    cout << "One copy returned to Book #" << returnIndex + 1 << ". Total copies: " << books[returnIndex] << endl;
    cout << "\nUpdated Number of Copies for Books: " << endl;
    for (int i = 0; i < 10; i++) 
    { 
        cout << "Book #" << i + 1 << " Copies: " << books[i] << endl;
    }
    return 0;
}