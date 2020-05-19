#pragma once
#include <iostream>
#include <vector>
/*
	An array-based stack.
		- Time complexity to pop items is O(1) or constant time
		- Time complexity to push items is O(1) at the best case or
		  O(n) at the worst case. O(n) time to push happens when
		  an overflow occurs, and the elements are copied into the
		  new array

	Stack Functionality
		- Push(x) - Add x to the top of stack
		- Pop() - Remove and return the top object
		- Peek() - Return the top object without remove it from the stack
		- isEmpty() - is the stack empty?
*/

template <typename T>
class Stack {

	int arraySize = 1000; //> Starting array size
		
	int length; //>The amount of stack frames in the stack.

	T *objects; //> Creating a pointer to allocate a dynamic array

	int top; //>Keep track of the top of the stack

	

public:

	Stack();
	~Stack();

	//Push an item onto the stack.
	void push(T x);

	//Pop an item off the stack, and return it
	T pop();

	//return the item on the top
	T peek();

	//Is the stack empty?
	bool isEmpty();
	
	

};




template<typename T>
inline Stack<T>::Stack()
{
	//Initialize varaibles for the stack
	length = 0;
	objects = new T[arraySize]; //> Dynamically allocated array
	top = -1;
}



template<typename T>
inline void Stack<T>::push(T x)
{
	//Update the top position
	top++;

	//Is the top position outside the array?
	//If so create a new array double the size of the current array
	if(top == arraySize)
	{ 
		arraySize *= 2;
		T *temp = new T[arraySize]; //> New bigger array, to copy old array into

		//Copy elements from old array to new array
		for (int i = 0; i < (arraySize/2);i++)
			temp[i] = objects[i];
		
		
		T *temp2 = objects; //> temp variable to keep link to old array
		objects = temp; //> old array pointer points the new array

		//Free the memory of the old array
		delete[] temp2;
	}

	//Put the object ontop of the stack, and update the lenght of the stack
	objects[top] = x;
	length++;
}

template<typename T>
inline T Stack<T>::pop()
{
	try
	{
		//If the stack is empty throw an error
		if (isEmpty())
		{
			throw -1;
		}
		
		//Update the top position
		top--;

		//Return object removed
		return objects[top + 1];
	}
	catch (int x)
	{
		std::cout << "[!]ERROR: Stack Is Empty\n";
	}
}

template<typename T>
inline T Stack<T>::peek()
{
	try
	{
		//If stack is empty throw an error
		if (isEmpty())
		{
			throw -1;
		}

		//Return object on the top of stack
		return objects[top]; 
	}
	catch (int x)
	{
		std::cout << "[!]ERROR: Stack Is Empty\n";
	}
}

template<typename T>
inline bool Stack<T>::isEmpty()
{
	if (top < 0)
		return true;
	else
		return false;


}
template<typename T>
inline Stack<T>::~Stack()
{
	//make sure to delete the array in memory when object is destroyed
	delete[] objects;
}
