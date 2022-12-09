#include <iostream> 
#include <random>
#include <ctime>
#include <string>
using namespace std;

int questionNumber = 1;
int correctAnswesrs = 0;
int wrongAnswers = 0;
bool ask[10] = { true, true, true, true, true, true, true, true, true, true };
int sumInTheBank;

void display();
void randomQuestion();
void question(string question, string a, string b, string c, string d, char correctAnswer);
void result();





int main()
{
	cout << "Zdrasti ti si otvelchen milioner i trqbva da otgoworish na nqkolko wyprosa za da si zapajish bogatstvata."<<endl << "Sled veski gre[en otgowor ti se maha opredelena suma ot parite.Priqtna igra and Keep Your Money!"<<endl;
	int firstFour, secondFour, thirdFour, lastFour;
	cout << "Enter your card number or you will die: ";
	cin >> firstFour>> secondFour>> thirdFour>> lastFour;
	sumInTheBank = firstFour* secondFour + thirdFour * lastFour;
	/*cout << "Ok you have in your bank account: "<< sumInTheBank/4 <<endl;
	cout << "Let's get strat";*/
	display();
	
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
	cout << "Total questions = " << questionNumber - 1 << endl;
	cout << "Correct answers = " << correctAnswesrs << endl;
	cout << "Wrong answers = " << wrongAnswers << endl;

	cout << sumInTheBank;
	/*if (correctAnswesrs >wrongAnswers)
	{
		cout << "Pass"<<endl;
	}
	else if (correctAnswesrs > wrongAnswers)
	{
		cout << "You lost your preshers like smigyl" << endl;

	}
	else if (correctAnswesrs == wrongAnswers)
	{
		cout << "50/50" << endl;

	}*/
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
	cout << "Enter your nswer : ";
	cin >> answer;
	
		if (answer == correctAnswer) {
			correctAnswesrs++;
		}
		else
		{
			wrongAnswers++;
			if ((sumInTheBank <= 49990000) && (sumInTheBank >= 39990000));
			{
				sumInTheBank -= 3600000;
			}
			if ((sumInTheBank <= 39990000) && (sumInTheBank >= 29900000));
			{
				sumInTheBank -= 2800000;
			}
			if ((sumInTheBank <= 29990000) && (sumInTheBank >= 19900000));
			{
				sumInTheBank -= 2500000;
			}
			if ((sumInTheBank <= 19990000) && (sumInTheBank >= 9900000));
			{
				sumInTheBank -= 1400000;
			}
			if ((sumInTheBank <= 9990000) && (sumInTheBank >= 5900000));
			{
				sumInTheBank -= 1400000;
			}
			if ((sumInTheBank <= 5900000) && (sumInTheBank >= 1900000));
			{
				sumInTheBank -= 1100000;
			}
			if ((sumInTheBank <= 1900000) && (sumInTheBank >= 900000));
			{
				sumInTheBank -= 170000;
			}
			if ((sumInTheBank <= 900000) && (sumInTheBank >= 500000));
			{
				sumInTheBank -= 100000;
			}
			if ((sumInTheBank <= 500000) && (sumInTheBank >= 100000));
			{
				sumInTheBank -= 10500;
			}
			if ((sumInTheBank <= 100000) && (sumInTheBank >= 50000));
			{
				sumInTheBank -= 1999;
			}
		}
	
	
	questionNumber++;
	display();
}
