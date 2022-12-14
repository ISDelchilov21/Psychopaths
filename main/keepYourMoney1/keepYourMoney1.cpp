#include <iostream> 
#include <random>
#include <ctime>
#include <string>

using namespace std;

int questionNumber = 1;
int correctAnswers = 0;
int wrongAnswers = 0;
bool ask[15] = { true, true, true, true, true, true, true, true, true, true, true, true, true, true, true };
long long int sumInTheBank;

void display();
void randomQuestion();
void question(string question, string A, string B, string C, string D, char correctAnswer);
void result();



//This is our main function.
int main()
{
	cout << "Welcome to Keep Your Money!" << endl << endl;
	cout << "1. Play" << endl;
	cout << "2. Story and rules" << endl;
	cout << "3. Exit" << endl;

	int playOrNot;

	cout << "Enter 1, 2 or 3: ";
	cin >> playOrNot;
	if (playOrNot != 1 && playOrNot != 2 && playOrNot != 3)
		cout << "Incorrect input!";
	else
	{
		if (playOrNot == 1)
		{
			system("cls");
			cout << "Hello, let's get started!";

			long long int firstFour, secondFour;
			cout << "Enter your card here (it should look like this - 1234 5678): ";
			cin >> firstFour >> secondFour;
			sumInTheBank = firstFour * secondFour;

			display();
		}

		if (playOrNot == 2)
		{
			system("cls");
			cout << "Hello, you have been kidnapped by us - The Psyhopaths -. And the reason is your amount of money. " << endl << "We don't like rich people because most of them are greedy and selfish. " << endl;
			cout << "So we decided to make this game called KeepYourMoney" << endl << "The rules are simple. " << endl << "We  will give you 15 questions and you have to answer. You have unlimited time for every question." << endl<<"If you enter the number card like this 1b4a 24h2, any character other than the numbers 0 to 9 will be counted as a wrong answer be careful.";
			cout << "" << endl;
			cout << "If you want to Play or Exit enter 1 and " << endl;
			cout << "Enter 1 or 3: ";

			cin >> playOrNot;

			if (playOrNot == 1)
			{
				system("cls");
				cout << "Hello, let's get started!" << endl;

				long long int firstFour, secondFour;
				cout << "Enter your card number or we will burn you (your card number should look like this - 1234 5678): ";
				cin >> firstFour >> secondFour;
				sumInTheBank = firstFour * secondFour;

				display();
			}

			if (playOrNot == 3)
				cout << "Buy!";

		}

		if (playOrNot == 3)
			cout << "Buy!";

	}
}

//This function displays, if questionNumber is correctAnswer or if it is wrongAnswer.
void display()
{
	//This checks if our screen is clear.
	system("cls");
	cout << "? ? ? ? ? ? ? ? ? ? ?" << " \t\t? ? ? ? ? ? ? ? ? ? ?" << "\t\t? ? ? ? ? ? ? ? ? ?" << endl;
	cout << " Question number: " << questionNumber << "\t\t Correct Answers: " << correctAnswers << "\t\t Wrong Answers: " << wrongAnswers << endl;
	cout << "? ? ? ? ? ? ? ? ? ? ?" << " \t\t? ? ? ? ? ? ? ? ? ? ?" << "\t\t? ? ? ? ? ? ? ? ? ?" << endl << endl << endl;
	randomQuestion();
}

//This function picks up random question in the console
void randomQuestion()
{
	srand(time(0));
	bool isQuestionRemaining = false;
	for (int i = 0; i < 15; i++)
	{
		if (ask[i])
		{
			isQuestionRemaining = true;
			break;
		}
	}
	while (isQuestionRemaining)
	{
		int randomNumber = rand() % 15;

		//We make sure the question is different every time.
		if (ask[randomNumber])
		{
			ask[randomNumber] = false;
			switch (randomNumber)
			{
			case 0:
				question("What club did astronaut Alan Shepard use to make his famous golf shot on the moon?", "9 iron", "Sand wedge", "6 iron", "7 iron", 'C');
				break;
			case 1:
				question("What letter must appear on the beginning of the registration number of all nonmilitary aircraft in the US?", "N", "A", "U", "L", 'A');
				break;
			case 2:
				question("People who have a marked physical reaction to beautiful art are said to suffer from what syndrome?", "Proust syndrome", "Jerusalem syndrome", "Stenhal's syndrome", "Beckett's syndrome", 'C');
				break;
			case 3:
				question("The most watched TV episode of all time, the final episode of M*A*S*H, aired at 8:30 p.m. on Feb. 28, 1983, following what sitcom?", "Private Benjamin", "Newhart", "Square Pegs", "Alice", 'D');
				break;
			case 4:
				question("Which of the following men does not have a chemical element named for him?", "Albert Einstein", "Niels Bohr", "Isaac Newton", "Enrico Fermi", 'C');
				break;
			case 5:
				question("Before the American colonies switched to the Gregorian calendar, on what date did their new year start?", "Sept. 25", "Dec. 1", "July 1", "March 25", 'D');
				break;
			case 6:
				question("What first lady was a ninth-generation descendant of Pocahontas?", "Helen Taft", "Edith Wilson", "Bess Truman", "Mamie Eisenhower", 'B');
				break;
			case 7:
				question("In what country are all US major league baseballs currently manufactured?", "Costa Rica", "Haiti", "Dominican Republic", "Cuba", 'A');
				break;
			case 8:
				question("According to the Population Reference Bureau, what is the approximate number of people who have ever lived on Earth?", "50 billion", "100 billion", "1 trillion", "5 trillion", 'B');
				break;
			case 9:
				question("Who delivered the less famous two-hour speech that preceded Abraham Lincoln's two-minute Gettysburg Address?", "Wendell Phillips", "Daniel Webster", "Robert G.Ingersoll", "Edward Everett laanguage", 'D');
				break;
			case 10:
				question("The Earth is approximately how many miles away from the Sun?", "9.3 million", "39 million", "93 million", "193 million", 'A');
				break;
			case 11:
				question("Which insect shorted out an early supercomputer and inspired the term 'computer bug'?", "Moth", "Roach", "Fly", "Japanase beetle", 'A');
				break;
			case 12:
				question("Which of the following landlocked countries is entirely contained within another country?", "Mongolia", "Burkina Faso", "Lesotho", "Luxembourg", 'C');
				break;
			case 13:
				question("In the children’s book series, where is Paddington Bear originally from?", "India", "Peru", "Canada", "Iceland", 'B');
				break;
			case 14:
				question("Who is credited with inventing the first mass-produced helicopter?", "Ferdinand von Zeppelin", "Elmer Sperry", "Gottlieb Daimler", "Igor Sikorsky", 'D');
				break;
			}
		}
	}
	result();
}

//This function will return the result of the game
void result()
{
	system("cls");
	cout << "You have " << correctAnswers << " correct answers." << endl;
	cout << "And " << wrongAnswers << " wrong answers." << endl;
	cout << "That makes it " << correctAnswers << " out of " << questionNumber - 1 << endl;

	cout << "Before we started you had " << sumInTheBank << " bucks." << endl;
	if (correctAnswers == 10)
	{
		cout << "And now you have " << sumInTheBank << "." << endl;
		cout << "You are smarter than we expected." << endl;
		cout << "You didn't lost anything." << endl;
	}

	if (correctAnswers < 10 && correctAnswers >= 5)
	{
		cout << "And now you have " << sumInTheBank / 2 << " bucks." << endl;
		cout << "You have left with half of your money." << endl;
	}

	if (correctAnswers < 5)
	{
		cout << "And now you have " << 0 << " bucks." << endl;
		cout << "You are one of those individuals who cannot think." << endl;
	}
}

//We pass five arguments
void question(string question, string A, string B, string C, string D, char correctAnswer)
{
	cout << question << endl;

	cout << "$A. " << A << endl;
	cout << "$B. " << B << endl;
	cout << "$C. " << C << endl;
	cout << "$D. " << D << endl;

	// This char collects the correct answer
	char answer;
	cout << "Enter your answer : ";
	cin >> answer;

	if (answer == correctAnswer)
	{
		correctAnswers++;
	}
	else
	{
		wrongAnswers++;
	}

	questionNumber++;
	display();
}
