// GameJam_7.12.22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;
#include "GameObject.h"

bool gameOver;

void createGameBoard();
void displayGameBoard();
void addObjects();
void movePC();

int main(){
	createGameBoard();
	gameOver = false;
	while (!gameOver) {
		string direction;
		displayGameBoard();
		cin >> direction;
		movePC();

		//hello
		//Hello
		//hello
	}
	
}


