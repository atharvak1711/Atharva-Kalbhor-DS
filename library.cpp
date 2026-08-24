#include <iostream>
using namespace std;
int main()
{
int id1, id2, id3;
string title1, title2, title3;
//book1
cout<< "Enter book 1 id: ";
cin>> id1;

cin.ignore();
cout<< "Enter Book 1 title: ";
getline(cin, title1);

//book2
cout<<"Enter Book 2 id: ";
cin>> id2;

cin.ignore();
cout<<"enter book 2 Title: ";
getline(cin, title2);

//book3
cout<<"Enter Book 3 id: ";
cin>> id3;

cin.ignore();
cout<<"enter book 3 Title: ";
getline(cin, title3);
// Display Books
cout<< "\n===== Library Books =====";

cout<<"\nbook ID: "<<id1;
cout<<"\nbook title: "<<title1;

cout<<"\nbook ID: "<<id2;
cout<<"\nbook title: "<<title2;

cout<<"\nbook ID: "<<id3;
cout<<"\nbook title: "<<title3;

return 0;
}
