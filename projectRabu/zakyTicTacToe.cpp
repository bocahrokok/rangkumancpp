#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int lives = 3;
char a[10][10];
int opt;
char choice;
int x1,y1;

display() {
	//title
	cout << "     ========================\n";
	cout << "     =                      =\n";
	cout << "     =      WAIFU HUNT!     =\n";
	cout << "     =                      =\n";
	cout << "     ========================\n";
	
	cout << endl;
	cout << "Hey you no-life hikikomori! Yes, I'm talking to you." << endl;
	cout << "You're bored, huh? Well then, go on and play this game!" << endl;
	cout << "The game objective is to find your waifu among the 9x9 tiles." << endl;
	cout << "Input a value of x and a value of y and you can find your waifu!" << endl;
	cout << "But be aware, among the waifus lie... TRAPS." << endl;
	
	cout << "\nLives = " << lives << endl << endl;
	
	//block
	int i, n=1;
	cout << "    1  2  3  4  5  6  7  8  9   " << endl;
	cout << "    __ __ __ __ __ __ __ __ __  " << endl;
	for (i=0; i<9; i++) {
		cout << n++;
		cout << "  |" << a[i][0] << " |" << a[i][1] << " |" << a[i][2] << " |" << a[i][3] << " |" << a[i][4] << " |" << a[i][5] << " |" << a[i][6] << " |" << a[i][7] << " |" << a[i][8] << " |" << a[i][9];
		cout << "\n";
		cout << "   |__|__|__|__|__|__|__|__|__|\n";
	}
}



void play () {
	int x,y;
	
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y; 

	if (x1==x&&y1==y)
	{
		cout << "\nCONGRATULATIONS! YOU FOUND YOUR WAIFU! \n";
		lives = 8;
	}
	else {
		cout << "\nNO WAIFU, IT'S A TRAP!\n";
		cout << "1. TRY AGAIN (-1 LIVES)\n";
		cout << "2. TAKE A HINT (-2 LIVES)\n";
		cout << "YOUR CHOICE : ";
		cin >> opt;
	
		if (opt == 2) {
			lives -=1;
			cout << "x or y : ";
			cin >> choice;
		
			if (choice == 'x' || choice == 'X') {
			cout << "x = " << x1;
			}
			else if (choice == 'y' || choice == 'Y') {
			cout << "y = " << y1;
			}
		}	
	}
}

int main(int argc, char** argv) {
	char b;
	srand (time(NULL));
	x1 =rand()%9+1;
	y1 =rand()%9+1;
	do {
		system("CLS");
		display();
		cout << "\n\nTHERE IS 1 HIDDEN WAIFU AMONG THESE TRAPS. FIND HER! \n";
		cout << "\n\nENTER ANY INDEX BETWEEN (1,1) TO (9,9)\n";
		play();
		if (lives > 0) {
			cout << "\nPRESS 'P' TO PLAY AGAIN\n";
			lives -=1;
			cin >> b;
		}
		else if (lives <= 0) {
			system ("CLS");
			cout << "Game Over";
			cout << "\nPRESS 'P' TO PLAY AGAIN\n";
			cin >> b;
		}

	}
	while(b=='p'||b=='P');
	getch ();
	return 0;
}

