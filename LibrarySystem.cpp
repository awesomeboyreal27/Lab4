/////////////////////////////////////////////////////////////////////
// Name: Jacob Cantu
// Date: 9/30/26
// Class: CSCI 1470.0X
// Semester: Fall 2026
// CSCI 1470 Instructor: Dr. Jonatan Reyes
// Program Description: This program simulates a public library system.
/////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip>
#include <fstream> 

using namespace std;
// GLOBAL VARIABLE:
static int totalBooks = 0;
// CALLING PROTOTYPES:
int generateUserID();
int borrowBook(int& Bcount);
void log(int userID, int Bcount);
void report();
int main(){
    int uid, bookCount;

    // Simulating book checkouts for a user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Simulating book checkouts for another user
    bookCount = 0;
    uid = generateUserID();
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    borrowBook(bookCount);
    log(uid, bookCount);

    // Reporting end-of-day transactions
    report();

    return 0;
}
int generateUserID() {
    static int NewID = 0;
    return ++NewID;
}
int borrowBook(int& Bcount) {
    Bcount = Bcount + 1;
    totalBooks = totalBooks + 1;
    return Bcount;
}


void log(int userID,int Bcount) {
    ofstream fout("CsLab4.txt", ios::app);
    fout << "User ID " << setw(19) << setfill('.') << userID << endl;
    fout << "Books Borrowed " << setw(12) << setfill('.') << Bcount << endl;
    fout << endl;
    fout.close();
}
void report() {
    cout << "A total of " << totalBooks << " were checked out today.";
    ofstream fout("CsLab4.txt", ios::app);
    fout << endl;
    fout << "A total of " << totalBooks << " were checked out today.";
    fout << endl;
    fout << endl;
    fout.close(); 
}