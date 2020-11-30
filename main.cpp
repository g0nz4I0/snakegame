#include<iostream>
#include<conio.h>
#include "Game.h"


int main()
{
	Game snake;
	Board board;
	snake.createMenu();
	
	
	board.initialiseBoard();
	board.displayBoard();
	
	
	while(snake.isGameFinished != true)
	{
	
		snake.directionKey = getch();//wait for a key to be pressed but dont wait for enter
		snake.move();
		
	}

}



