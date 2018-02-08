#include <iostream>//standard Input/Output streams libary.
#include <string>//header file for class string.
#include "proj1.h"//header file for class Student to link class to implementation
using namespace std;//standard namespace
//Student() function defination
//This function is a default constructor, it initializes counter to zero(0) and 
//asks the user to input name using keyborad.
//does not have a return type or void its a constructor
template<class S>//using template header type
Student<S>::Student()
{
	counter = 0;//setting counter to zero(0)
	cout<<"Please enter the name: ";
	getline(cin,name);//getting name from keyboard
	
}//end of default construtor

//isFull() function defination
//This function keeps track of the counter to check if the array is full 
//based on the size of array.
//it is used in add() as a condition everytime a new entry is added
//its return type is integer, it return the when counter is equal to size.
template<class S>//using template header type
int Student<S>::isFull() const
{
	//check everytime the function is called if
	//counter is eqaul to size
	return counter == SIZE;
		
}//end of isFull()

//isEmpty() function defination
//This function keeps track of the counter to check if the array is empty
//when the counter is zero(0).
//it is used in remove() as a condition everytime a last entry is removed
//its return type is integer, it return the when counter is equal to 0
template<class S>//using template header type
int Student<S>::isEmpty() const
{
	//checks everytime, the function is called if
	//counter is equal to zero(0, the array is empty
	return counter == 0;
}//end of isEmpty()

//add() function defination
//This function check if there is room to add score,if the room is available
//the score is added at the first available position.
//if the array is full, it outputs the message list is full cannot add and indicates it.
//its return type is boolean, it return true or flase based on the condition
template<class S>//using template header type
bool Student<S>::add(const S& Newentry)
{
	//if full do this
	if(isFull())//check if array is full 
	{
		cout<<"Score list is full, cannont add scores anymore."<<endl;
		return false;
	}
	//if not full, add in first available position
	else
	{
		score[counter++] = Newentry;
		return true;
	}
}//end of add()

//remove() function defination
//This function check if there are score in array, and removes the last score.
//if the array is empty, there is nothing to remove and is indicated with a message.
//its return type is boolean, it return -1 or temp based on the condition
template<class S>//using template header type
bool Student<S>::remove() 
{
	//local declaration
	S temp;
	//if the array is empty, do this
	if(isEmpty())
	{
		cout<<"Score list is empty, nothing to remove."<<endl;
		return -1;
	}
	//if not, remove the last entry.
	else
	{
		temp = score[counter--];
		return temp;
	}
}//end of remove()

//clear() function defination
//this function clears the array of all scores with assist of print()
//its return type os void.
template<class S>//using template header type
void Student<S>::clear()
{
	print();
}//end of clear()

//print() function defination
//This function is a subfunction of clear().
//The functions prints the name and prints the list of score backwards.
//before clearing the list.
template<class S>
void Student<S>::print() 
{
	cout<<"Name: "<<name<<endl;
	cout<<"Score: "<<endl;
	while(counter > 0)
	{
		cout<<score[counter-1]<<endl;
		counter--;
	}
}//end of print()

//Student() function defination
//this is a NULL destructor.
//does not have a return type or void, its a destructor
template<class S>//using template header type
Student<S>::~Student()
{

}//end of null destructor
