#include <iostream>
using namespace std;
class Player{
    private:
    string name;
    int health;
    int score;
    int level;
    public:
    Player(string n, int h, int s, int l) { // Parameterized constructor
        name = n;
        health = h;
        score = s;
        level = l;
    }
friend class GameManager; // Friend Class Declaration
};
class GameManager{
   public:
    void DisplayDetail(Player pla1){
     cout << "Player Name: " << pla1.name << endl;
        cout << "Player Health: " << pla1.health << endl;
        cout << "Player Score: " << pla1.score << endl;
    }
    void PlayerAlive(Player pla1){
        if(pla1.health > 0){
            cout << pla1.name << " is alive." << endl;
        } else {
            cout << pla1.name << " is dead." << endl;
        }
    }
    void CurrentLevel(Player pla1){
        cout << pla1.name << " is at level " << pla1.level << endl;
    }
};
int main(){
    Player player1("Player 1", 100, 2000, 5);
    GameManager gameManager;
    gameManager.DisplayDetail(player1);
    gameManager.PlayerAlive(player1);
    gameManager.CurrentLevel(player1);
    return 0;
};