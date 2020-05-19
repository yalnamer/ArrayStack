#include "Stack.h"


int main()
{

	Stack<int> stack;

	


	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;


	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;


	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;


	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	stack.push(5);
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;


	std::cout << "PEEK: " << stack.peek() <<  "\n";




	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;


	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;



	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;




	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;




	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;




	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;



	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;



	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;




	stack.pop();
	std::cout << "TOP: " << stack.top << " + " << stack.isEmpty() << std::endl;

	std::cout << "PEEK\n";
	stack.peek();







}