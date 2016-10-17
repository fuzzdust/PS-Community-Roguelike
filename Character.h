#ifndef CHARACTER_H
#define CHARACTER_H

class character {
	private:
		char body = '@';
		int x = 1;
		int y = 1;
		int hits = 12;
		int level = 1;
		int gold = 0;
		int armor = 5;
		int exp = 1;
		int expToNextLevel = 2;
		
	public:
		char GetCharBody();
		int GetX();
		int GetY();
		int GetHits;
		int GetLevel;
		int GetGold;
		int GetArmor;
		int GetExp;
		int GetExpToNextLevel;
		
		character(int,int);
		~character();		
};

#endif
