
// Math Quiz
// Christian Hegner

//Please ensure "questions.txt" is located in the C:\temp folder for app to work correctly.
//Please provide all answers in the form of an integer (whole number)

#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string questions = "C:\\temp\\questions.txt"; //the text document that stores all the possible questions that can be asked
	string quizResults = "C:\\temp\\QuizResults.txt"; //the file the questions asked and answers input get output to for grading
	string questionAsked; //Stores the last question the user was asked in the form of a string. Changes during program runtime.
	int userInput; //the number the user input as their answer

	// call this once before you call rand()
	srand(time(NULL)); // initialize the random number generator

	// get a random number between 1 & 10
	cout << "Welcome to the Math Quiz! \n";

	ofstream ofs(quizResults);

	for (int i = 0; i < 3; i++) { cout << "Question " << i+1 << "\n";
		ifstream ifs(questions);
		int lineCount = 0;
		int randomNumber = rand() % 10 + 1;

		for (lineCount; lineCount < randomNumber; lineCount++) 	
		{
			getline(ifs, questionAsked);	
		}
		cout << questionAsked << " = ";
		cin >> userInput;

		ofs << questionAsked << " = " << userInput << "\n";
		
	}

	ofs.close();

	(void)_getch();
	return 0;
}
