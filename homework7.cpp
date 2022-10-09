//----------------------------------------------------------
//  Name: Robert Bennethum
//  E-mail Address: rmb6287@psu.edu
//  Class: CMPSC 121   
//  Project # homework 7
//  Due Date: December 10, 2021
//  Brief Project Description: FREE Thanksgiving Day Smorgasbord program that tracks orders.
//----------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
int answerCheck(int, int);
void printMenu(string []);
void addToCart(string[], string[], int, int);
void printCart(string[], int);

//Functions
int main()
{
	static string MENU[16] = { "Turkey", "Ham", "Salmon", "Vegetarian Lasagna", "Mashed Potatoes", "Stuffing", "Creamed Corn", "Tossed Salad", "Pumpkin Pie", "Apple Pie", "Choclate Cake", "Ice Cream", "Coffee", "Tea", "Water", "Soda" }; // Array list of items
	//create dynamic array
	string *userCart = nullptr;
	int totalItems;

	cout << "*********************************************************\n\n FREE Thanksgiving Day Smorgasbord! \n\n*********************************************************"<<endl;
	printMenu(MENU); //print the menu
	totalItems = answerCheck(0, 0); //check if user's answer is valid
	userCart = new string[totalItems]; //set size of dynamic array

	//let user pick their items
	cout << endl << "Enter your selected menu items below: " << endl;
	for (int runningTotal = 1; runningTotal < totalItems+1; runningTotal++)
	{
		addToCart(MENU, userCart, runningTotal, answerCheck(1, runningTotal));
	}

	printCart(userCart, totalItems); //print what they have in their cart

	//free memory
	delete [] userCart;
	userCart = nullptr;
	
	return 0;
}

//see if answer is valid and return vaild answer
int answerCheck(int option, int runningTotal) 
{
	int answer;
	bool run = true;
	while (run == true)
	{
		//ask for answer
		if (option == 0) //item 0 for how many items user wants only
			cout << "How many items would you like to order?: ";
		else
			cout << "Item " << runningTotal << "#: ";
		cin >> answer;
		
		//check if answer is valid
		if (answer <= 16 && answer >= 1)
			return answer;
		else
			cout << answer << " is not a valid answer. Please enter a number from 1 to 16.\n";
	}
}

//Print the menu array and add catagories
void printMenu(string MENU[])
{
	cout << endl << "Entrees:" << endl;
	for (int i = 0; i < 4; i++)
		cout << i+1 << ") " << MENU[i] << endl;
	cout << endl << "Side Dishes:" << endl;
	for (int i = 4; i < 8; i++)
		cout << i+1 << ") " << MENU[i] << endl;
	cout << endl << "Desserts:" << endl;
	for (int i = 8; i < 12; i++)
		cout << i+1 << ") " << MENU[i] << endl;
	cout << endl << "Beverages:" << endl;
	for (int i = 12; i < 16; i++)
		cout << i+1 << ") " << MENU[i] << endl;
	cout << endl << endl;
}

//Add item picked by user to their cart by pulling name from the menu and assiging it to their cart
void addToCart(string MENU[], string userCart[], int runningTotal, int itemNumber)
{
	//correct index
	itemNumber -= 1;
	runningTotal -= 1;

	//assign to cart
	userCart[runningTotal] = MENU[itemNumber];
}

//Print everything user has in cart
void printCart(string userCart[], int totalItems)
{
	cout << endl << endl << "Order Summary: " << endl;
	for (int i = 0; i < totalItems; i++)
		cout << "1 " << userCart[i] << endl;
	cout << endl << "!!! Enjoy !!!" << endl << endl;
}