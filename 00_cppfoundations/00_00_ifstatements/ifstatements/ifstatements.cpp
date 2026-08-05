// 
// In this project I am learning about the syntacs of if statements in C++. I already know the basics of C++ (variables, data types, functions, arrays). 
// Now I will try to get used to the syntax of if statements in C++ and how to use them in my code. I am using the C++ tutorial for beginners by freeCodeCamp.org on YouTube.

#include <iostream>

using namespace std; 


int main()
{

    bool isVegetarian = true;

	double price = 15.50;

	string vegmenu[] = {"Mango Curry", "Veggi Burger", "Avocado Salad"};

	string regmenu[] = { "Chicken Curry", "Beef Burger", "Caesar Salad" };



	cout << "Welcome to our restaurant, are you a vegetarian? If yes, please enter 1. If no, please enter 0." << endl;

	cin >> isVegetarian;



	if (isVegetarian){

		cout << "Here is a vegetarian menu for you!" << endl;
		cout << "Please choose between " << vegmenu[0] << ", " << vegmenu[1] << " and " << vegmenu[2] << "." << endl;
	}

	// Because our bool is set to true, the bool call in the if statement will evaluate to true and the code inside the if statement will be executed.

	else {

		cout << "This is our regular menu." << endl;
		cout << "Please choose between " << regmenu[0] << ", " << regmenu[1] << " and " << regmenu[2] << "." << endl;
	}
	
	// To avoid nothing happening in case the bool is set to false, we can use an else statement which will execute the code inside it if the bool evaluates to false.

	cout << "Do that by typing 1, 2 or 3." << endl; // As the amount of meals for both menus are the same, we can use the same input for both menus.


	
	int mealchoice;

	cin >> mealchoice;


	if (mealchoice ==1) {

		price = price; // This is the regular price of the meal.
	}

	else if (mealchoice == 2) {

		price = price * 1.3; // This is the more expensive option.
	}

	else {

		price = price * 0.8; // This is the cheaper option.
	}

	cout << "Your total for your meal is " << price << "$." << endl;



	return 0;
}

