/*
 * Class: CMSC140 CRN : 34203
 * Instructor: Rabiha J Kayed
 * Project 1
 * Description: we are going to be writing a program to show a greeting script for a robot. Robot will ask a couple of questions and play a small game.
 * Due Date:
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Luis E. Ventura Perez


 * Pseudocode:
 
 1. get the visitors name:
 2. introduce small game
 3.play small game
 4.game 1 results
 5.
 6. introduce second game
 7.play second game
 8.game 2 results
 9.
 10.thank you and exit
*/



#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	string visitorName;
	string robotName = "Nao";

	cout << "******************** Robot Prototype Scripting ****************************" "\n";
	cout << endl;

	cout << "Hello, Welcome to Montgomery College! My name is " << robotName << "." << " May I have your name?"  "\n";
	getline(cin, visitorName);
	cout << endl;

	cout << "Nice to have you with us today, " << visitorName << "!" << "\n";
	cout << endl;
	cout << "Let me impress you with a small game.";
	cout << endl;
	
	double age;
	cout << "Give me the age of an important person or pet to you.";
	cout << endl;
	cout << "Please give me only a number: " "\n";
	cin >> age;
	cout << endl;
	
	cout << "You have entered " << age << ".";
	cout << endl;

	cout << "If this is for a person, the age can be expressed as:" "\n";
	
	cout << endl;

	const int Months_Per_Year = 12 * age;
	const int Days_Per_Year = 360 * age;
	const int Hours_Per_year = 8640 * age;
	const int Minutes_Per_Year = 518400 * age;
	const int Seconds_Per_Year = 31104000 * age;
	 
	cout << age << " Years" "\n";
	cout << "or " << Months_Per_Year << " Months";
	cout << endl;
	cout << "or about " << Days_Per_Year << " Days";
	cout << endl;
	cout << "or about " << Hours_Per_year << " Hours";
	cout << endl;
	cout << "or about " << Minutes_Per_Year << " Minutes";
	cout << endl;
	cout << "or about " << Seconds_Per_Year << " Seconds";
	cout << endl;

	const int ONE_DOG_YEAR = 7 * age;
	cout << "\n" "If this for a dog, it is " << ONE_DOG_YEAR << " years old in human age. " "\n";
	cout << endl;

	const int ONE_GOLDFISH_AGE = 5 * age;
	cout << "If this for a gold fish, it is " << ONE_GOLDFISH_AGE << " years old human age. " "\n";
	cout << endl;

	double number1;
	cout << "Let's play another game, " << visitorName << "." << " Give me another whole number." "\n";
	cin >> number1;
	cout << endl;

	double number2;
	cout << "Very well. Give me another whole number." "\n";
	cin >> number2;
	cout << endl;
	
	int result;
	result = number1 + number2;
	cout << "Using the operator '+' in C++, the result of " << number1 << " + " << number2 << " is " << result << "." << "\n";
	cout << endl;

	int result2;
	result2 = number1 / number2;
	cout << "Using the operator '/', the result is " << number1 << " / " << number2 << " is " << result2 << "." << "\n";
	cout << endl;

	double result3;
	result3 = number1 / number2; 

	cout << "however the result of " << number1 <<  " / " << number2 << " is about " << result3 << "." << "\n";
	cout << endl;


	cout << "Thank you for testing my program!!" "\n";
	cout << "PROGRAMMER: LUIS E. VENTURA PEREZ" "\n";
	cout << "CMSC140 Common Project 1" "\n";
	cout << "Due Date: 2/22" "\n";

	system("pause");
	return 0;
}