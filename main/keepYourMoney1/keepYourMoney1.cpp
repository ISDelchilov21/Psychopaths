#include <iostream> 
#include <random>
#include <ctime>
#include <string>
using namespace std;

int questionNumber = 1;
int correctAnswesrs = 0;
int wrongAnswers = 0;
bool ask[10] = { true, true, true, true, true, true, true, true, true, true };
long long int sumInTheBank, temp;

void display();
void randomQuestion();
void question(string question, string a, string b, string c, string d, char correctAnswer);
void result();





int main()
{
	cout << "1. Play"<< endl;
	cout << "2. Story" << endl;
	cout << "3. Exit"<< endl;
	
	int playOrNot;
	cout << "Enter 1, 2 or 3: ";
	cin >> playOrNot;
	if (playOrNot != 1 && playOrNot != 2 && playOrNot != 3)
	{
		cout << "Incorrect input!";
	}
	else
	{
		if (playOrNot == 1)
		{
			system("cls");
			cout << "Hello, let's get started!";
			int firstFour, secondFour;
			cout << "Enter your card number or you will die (it has to looks like these number 1234 5678): ";
			cin >> firstFour >> secondFour;
			sumInTheBank = firstFour * secondFour;
			temp = sumInTheBank;
			display();
		}
		if (playOrNot == 2) 
		{
			cout << "Hello, you are a millionaire who has been kidnapped by psychopaths who don't like that you have so much money"<< endl<<"you have to answer a few questions in order to sell your fortune." << endl  << "After many wrong answers psyhopats will burn in fire a certain amount of money. Enjoy the game and Keep Your Money!"<<endl;
			cout <<"If you want to Play or Exit enter accordingly 1 and "<< endl;
			cout << "Enter 1 or 3: ";
			cin >> playOrNot;
			if (playOrNot == 1)
			{
				system("cls");
				cout << "Hello, let's get started!"<<endl;
				int firstFour, secondFour;
				cout << "Enter your card number or we will burn you (it has to looks like these number 1234 5678): ";
				cin >> firstFour >> secondFour;
				sumInTheBank = firstFour * secondFour;
				temp = sumInTheBank;
				display();
			}
			if (playOrNot == 3)
			{
				cout << "Buy";
			}
		
		}
		if (playOrNot == 3)
		{
			cout << "Buy";
		}
	}
	
}



// whith this function we will display questionNumber correctAnswer and wrongAnswer and will be the mainfunction
void display()
{
	//That will make sure that our screen is clear
	system("cls"); 
	cout << "Question number: " << questionNumber << "\t\tCorrect Answers: " << correctAnswesrs << "\t\tWrong Answers: " << wrongAnswers << endl << endl;
	randomQuestion();
}

// function which will pick up random question in the console
void randomQuestion() 
{
	srand(time(0));
	bool isQuestionRemaining = false;
	for (int i = 0; i < 10; i++)
	{
		if (ask[i])
		{
			isQuestionRemaining = true;
			break;
		}
	}
	while (isQuestionRemaining)
	{
		int randomNumber = rand() % 10;
		
		//we make sure that question every time is different
		if (ask[randomNumber])
		{
			ask[randomNumber] = false;
			switch (randomNumber)
			{
			case 0:
				question("What club did astronaut Alan Shepard use to make his famous golf shot on the moon?", "9 iron", "Sand wedge", "6 iron", "7 iron", 'c');
					break;
			case 1:
				question("What letter must appear on the beginning of the registration number of all nonmilitary aircraft in the US?", "N", "A", "U", "L", 'a');
				break;
			case 2:
				question("People who have a marked physical reaction to beautiful art are said to suffer from what syndrome?", "Proust syndrome", "Jerusalem syndrome", "Stenhal's syndrome", "Beckett's syndrome", 'c');
				break;
			case 3:
				question("The most watched TV episode of all time, the final episode of M*A*S*H, aired at 8:30 p.m. on Feb. 28, 1983, following what sitcom?", "Private Benjamin", "Newhart", "Square Pegs", "Alice", 'd');
				break;
			case 4:
				question("Which of the following men does not have a chemical element named for him?", "Albert Einstein", "Niels Bohr", "Isaac Newton", "Enrico Fermi", 'c');
				break;
			case 5:
				question("Before the American colonies switched to the Gregorian calendar, on what date did their new year start?", "Sept. 25", "Dec. 1", "July 1", "March 25", 'd');
				break;
			case 6:
				question("What first lady was a ninth-generation descendant of Pocahontas?", "Helen Taft", "Edith Wilson", "Bess Truman", "Mamie Eisenhower", 'b');
				break;
			case 7:
				question("In what country are all US major league baseballs currently manufactured?", "Costa Rica", "Haiti", "Dominican Republic", "Cuba", 'a');
				break;
			case 8:
				question("According to the Population Reference Bureau, what is the approximate number of people who have ever lived on Earth?", "50 billion", "100 billion", "1 trillion", "5 trillion", 'b');
				break;
			case 9:
				question("Who delivered the less famous two-hour speech that preceded Abraham Lincoln's two-minute Gettysburg Address?", "Wendell Phillips", "Daniel Webster", "Robert G.Ingersoll", "Edward Everett laanguage", 'd');
				break;
			
			}
		}
	}
	result();

}
//this function which will return the result of the game
void result()
{
	system("cls");
	cout << "Your correct answers are " << correctAnswesrs << endl;
	cout << "Your wrong answers are " << wrongAnswers << endl;

	cout << "Well, you had " << temp<<endl;
	cout << "But now you have " << sumInTheBank<<". ";

	if (sumInTheBank < temp / 2)
	{
		cout << "You are one of those individuals who cannot think."<<endl;
	}
	if (sumInTheBank > temp / 2)
	{
		cout << "Lol! You аre smarter than we expected.";
	}
	if (sumInTheBank == temp / 2)
	{
		cout << "We can't say anything!";
	}
}

// we pass five arguments
void question(string question, string a, string b, string c, string d, char correctAnswer) {
	cout << question << endl;
	cout << "A. \t" << a<< endl; 
	cout << "B. \t" << b << endl;
	cout << "C. \t" << c<< endl; 
	cout << "D. \t" << d << endl;

	// this char will collect the correct answer
	char answer;
	cout << "Enter your answer : ";
	cin >> answer;
	
	if (answer == correctAnswer) 
	{
		correctAnswesrs++;
	}
	else
	{
		wrongAnswers++;
		sumInTheBank -= 100000;
	}
	
	
	questionNumber++;
	display();
}
