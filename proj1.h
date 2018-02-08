#include <iostream>//standard Input/Output streams libary.
#include <string>//header file for class string.
//Gaurds
#ifndef PROJ1_H
#define PROJ1_H
using namespace std;//standard namespace
template<class S>//using template header type
//class defination/declaration
class Student
{
	//private members
	private:
		static const int SIZE = 5;
		string name;
		S score[SIZE];//S is the type given to template, it can be int,float or double.
		int counter;
		void print();
		int isFull() const;
		int isEmpty() const;
	//public members
	public:
		//members function
		Student();
		bool add(const S&);
		bool remove();
		void clear();
		~Student();
};
//Gaurds
#endif
