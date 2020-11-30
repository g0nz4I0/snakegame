#include<iostream>
#include<conio.h>
#include "Game.h"


int main()
{
	Game snake;
	snake.createMenu();
	
	
	snake.initialiseBoard();
	snake.displayBoard();
	
	
	while(snake.isGameFinished != true)
	{
	
		snake.directionKey = getch();//wait for a key to be pressed but dont wait for enter
		snake.move();
		snake.displayBoard();
		
	}

}



