/*
     Name:      Krishna rana 
     Course:    CIS 260 ME1
     Date:      03/30/2017
     Program:   exposing to class objects, templates, member functions, and multiple files
     Description: This program accept a student’s name (string) and maintains an array of test scores (float).
	  It adds a score at the first available position. If the array is empty, add at the first position.
	  If the array is full, then the score cannot be add and must indicate that. If there are scores in the array,
	  you can remove the last score; scores in the middle or front may not be removed. If the array is empty,
	  then the score cannot be remove and must indicate that. it clears the array of all the scores,
	  but before doing that print the name and contents of the array backward.
*/
#include <iostream>//standard Input/Output streams libary.
#include <iomanip>//standard file for Input/Output manipulation.
#include <string>//header file for class string.
#include "proj1.cpp"//implementation file for class Student called proj1.cpp
using namespace std;//standard namespace.
//main() function defination
//This function runs the whole program with step by step instructions written below.
//main() has calls and parameters of other function in the program.
int main()
{   
	//local definations/ declarations
	Student <int> stud1;// a student using template in this case "integer".
    char choice, answer;// handles input from menu and controls loop
    int score;// the item to be added to the end of the array
    do{
    system("CLS");// clears the screen
    cout<<endl;
    cout <<setw(30)<< " Main Menu\n\n";// menu of options to add/remove or clear
    cout << setw(15)<< " "<< "(1)- (A)dd\n";
    cout << setw(15)<< " "<< "(2)- (R)emove\n";
    cout << setw(15)<< " "<< "(3)- (C)lear\n";
    cout << setw(35)<< "Enter your Choice: ";cin >> choice;
    choice = toupper(choice);
    switch (choice)
    {   case '1':
        case 'A':
                cout << "\nAdd the Score:  "; cin >> score;
                if (stud1.add(score))// call to the add method
                    cout << score << " <-- Added\n\n";
                break;
        case '2':
        case 'R':
                if(stud1.remove())//call to the remove method
                    cout <<"The last score has been removed\n\n";
                break;
       	case '3':
        case 'C':
               stud1.clear();// call to the clear method
                break;
     }
     cout << "Another Operation:  "; cin >> answer; answer = toupper(answer);
    }     while (answer == 'Y');  
cin.get();
return 0;   
}//end of main()
