//This code should:
//Prompt user to enter their name
//Read the user's name 
//Output a personalized greeting like "It is nice to meet you ____"

#include <iostream>
#include <string>
using namespace std;

int main() {

string inputName; //Initializes variable for the name input

cout << "Enter name here:"; 
getline(cin, inputName); //Gets the name entered by user

cout << "It's nice to meet you " << inputName << "." << endl; //Outputs a greeting with the input name

return 0;

}