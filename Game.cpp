#include<iostream>
#include<string>
#include<conio.h>

#include "Game.h"

void Board::initialiseBoard()//create the board
{
	

	for(int i = 0;i!=40;i++)
	{
		for(int j = 0;j!= 40;j++)
		{
			board[i][j] = 32 ;//the board is made of spaces, it is 40x40 square
		}
	}

}
void Board::displayBoard()//display an array
{

	
	for(int i = 0;i!=40;i++)
	{
		for(int j = 0;j!= 40;j++)
		{
			std::cout<<board[i][j]<<" ";
		
		}
		std::cout<<std::endl;
	}
	for(int i = 0;i!= 40;i++)
		std::cout<<"- ";
	std::cout<<"\n";
}

void Game::createMenu()
{
	
	
	std::cout<<"Welcome to the snake game\nWrite your username: ";
	std::cin>>username;
	
	system("CLS");
	std::cout<<""<<username<<"\n\n\n";
}
void Game::move()
{
		score = 0;
	/*	if(directionKey==224)
		{
			std::cout<<"arrowKeyPressed";
			int d = getch();
			//d is for holding the direction 
			//if an arrow key is pressed
			
			if(d==72)
			moveUp();
			/*else if(d == 77)
			moveRight();
			else if(d == 75)
			moveLeft();
			else
			moveDown();
		}*/ // else
		
		if(directionKey == 119)
		{
			moveUp();
		}else if(directionKey ==115)
		{
			moveDown();
		}else if(directionKey == 100)
		{
			moveRight();
		}else if(directionKey == 97 )
		{
			moveLeft();
		}else
		{
			gameOver();
		}
	
}
void Game::moveUp()
{
	std::cout<<"Moving up";
	posPlayerY++;
}
void Game::moveDown()
{
	std::cout<<"Moving down";
	posPlayerY--;
}
void Game::moveRight()
{
	std::cout<<"Moving right";	
	posPlayerX++;
}

void Game::moveLeft()
{
	posPlayerX--;
}

void Game::gameOver()
{
	system("CLS");
	std::cout<<username<<"														score:"<<score;
	std::cout<<"\n\n\n		GAME OVER\n\n\n";
	exit(0);
}
