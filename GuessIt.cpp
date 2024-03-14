#include <bits/stdc++.h>

using namespace std;

int GetRandowNumber();
int GetPlayerGuess();
void printAnswer(int guess, int secretNumber);
void GetPlay();

int main()
{
	srand(time(0));
	GetPlay();
	
	return 0;
} 

int GetRandowNumber ()
{
	return rand() % 100 + 1 ;
}

int GetPlayerGuess()
{
	int guess;
	cout<<"Enter your answer: ";
	cin>>guess;
	return guess;
}

void printAnswer(int guess, int secretNumber)
{
	if(guess< secretNumber) cout <<"your number is smaller than our number";
	else if(guess > secretNumber) cout<<"your number is bigger than our number";
	else 
	{
		cout<<"CONGRATULATION!"<<endl;
	}
}



void GetPlay()
{
	int secretNumber = GetRandowNumber();
	int guess;
	int mark=100;
	do 
	{
		guess= GetPlayerGuess();
		printAnswer(guess, secretNumber);
		mark--;
	}
	while (guess!=secretNumber&&mark!=0);
	if (guess!=secretNumber&&mark==0) cout<<"you lose"<<endl;
	else 
	{
		cout<<mark<<endl;
		cout<<"DO YOU WANNA PLAY IT ONE MORE TIME?";
		string s;
		cin>>s;
		if(s=="NO")
		{
			
		}
		else if(s=="YES")
		{
			GetPlay();
		}
	}
}
