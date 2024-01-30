							//task 1
						//NUMBER GUESSING GAME


#include<iostream>
#include<process.h>
#include<cstdlib>   //used to generate the randam numbers
#include<ctime>   //includes the time function which is going to return the current time
using namespace std;
class guess_number
{
	int guess;
	public:
		void get()
		{
			cout<<"guess a number between 0 to 100\n";
		}
		void game()
		{ 
			srand((unsigned int )time(NULL));
 			int number= rand() %100+1;
			do 
			{
				cin>>guess;
				if (guess> number)
				{
					
					cout<<"you are guessing high...think something low        ";
				}
				else if(guess<number)
				{
					cout<<"you are guessing low...think something high        ";
				}
				else
				{
					cout<<"YOU WON!! number is : "<<guess;
				}
			}while(guess!=number);
		}
};
int main()
{
	guess_number A;
	int choice;
	cout<<"\t---------GUESS THE NUMBER-------\n";
	cout<<"Press 1 to start the game and 0 to exit\n";
	cin>>choice;
	while(choice==1)
	{ 	
		cout<<"\nlets start the game -----\n\ncomputer has picked a number lets see if you can guess it :) \n\n";
		A.get();
		A.game();
		cout<<"\n\n--------WANT TO PLAY ONE MORE TIME!! PRESS 1 TO CONTINUE-----------\n";
		cin>>choice;
	};
	return 0;
}

