#include<iostream>
#include<conio.h>
#include<string>

class Game
{
	
	public:
		
		bool isGameFinished = false;
		void createMenu();
		std::string username;
		int posPlayerX = 0;
		int posPlayerY = 0;
		char board [40][40];
		
		int score = 0;
		
		char directionKey; // wait for a key to be pressed
		
		//conditions for the keys, if 'w' is pressed  ........ do moveUp
		void move();
		void moveUp();
		void moveLeft();
		void moveRight();
		void moveDown();
		
		void gameOver();
		
		
	

	
};

class Board : public Game
{
	public:
		void initialiseBoard();
		void displayBoard();
	
	
};
