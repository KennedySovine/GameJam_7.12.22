// GameJam_7.12.22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "GameObject.h"

const int boardHeight = 20;
const int boardWidth = 50;
char gameBoard[boardHeight][boardWidth];

void createGameBoard();
void displayGameBoard();
void addObjects();

int main(){
	createGameBoard();
	displayGameBoard();

}


void createGameBoard() {
	for (int row = 0; row < boardHeight; row++) {
		for (int col = 0; col < boardWidth; col++) {

			if (row == 0 || row == boardHeight - 1) {
				gameBoard[row][col] = '=';
			}
			else {
				if (col == 0 || col == boardWidth - 1) {
					gameBoard[row][col] = '|';
				}
				else {
					gameBoard[row][col] = '-';
				}
			}
		}
	}
}

void displayGameBoard() {
	for (int row = 0; row < boardHeight; row++) {
		for (int col = 0; col < boardWidth; col++) {
			cout << gameBoard[row][col];
		}
		cout << endl;
	}

}

void addObjects() {
	char randObjects[5] = {'L', 'R'};
}