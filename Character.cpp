#include "Character.h"

character::character(int nx, int ny){
	x = nx;
	y = ny;
}

character::~character(void){
}

char character::GetCharBody(void){
	return body;
}

int character::GetX(void){
	return x;
}

int character::GetY(void){
	return y;
}

/* 
int GetHits;	//Next to implement
int GetLevel;
int GetGold;
int GetArmor;
int GetExp;
int GetExpToNextLevel;
*/
