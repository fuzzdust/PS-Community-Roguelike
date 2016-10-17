#include <iostream>

#include "Character.h"

using namespace std;

character Player(1,2);

struct map{
	
	char game_map[12][12] = {{'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},
						     {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '+', '+', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '/', '\\', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '|', '|', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#',},
                             {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',},};
    
    void display_map(){
        // maybe we shouldn't use hard-coded values for the loops' upper bounds?
        for(int x=0; x<12; ++x){
            for(int y=0; y<12; ++y){
                cout << game_map[x][y] << " ";
            }
            cout << endl;
        }    
    }
    
    void draw_character() {
    	int x = Player.GetX();
    	int y = Player.GetY();
        game_map[x][y] = Player.GetCharBody();
    }
}handle;

void draw_world() {
    system("cls");
    handle.draw_character();
    handle.display_map();
}

int main() {
    // intro message
    
    cout << "\n\t\t Welcome To Mission impossible Rogue !" << endl
         << "Start the game: y" << endl 
         << "Quit: q" << endl;
    
    cin.ignore();
    char start;  // user's choice to start game
    char choice; // user's choice of action
    
    start = cin.get();
    if(start == 'n' || start == 'N') {
        exit(0);
    } else {
        
        system("cls");
        while(true) { // main game loop
            draw_world();
            cout << endl << "What will you do?" << endl;
            
            cin.ignore();
            choice = cin.get();
            
            switch(choice) {
                
                case 'q': // quit
                case 'Q':
                    exit(0); 
                    break;
                
                // movement commands:
                case 'w': // up
                case 'W':
                    break;
                case 'a': // left
                case 'A':
                    break;
                case 's': // down
                case 'S':
                    break;
                case 'd': // right
                case 'D':
                    break;
                
                default:
                    cout << "\n Wrong key pressed";
                    continue;    
            }
        }
    }
    return 0;
}

