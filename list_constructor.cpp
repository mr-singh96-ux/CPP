#include <iostream>
using namespace std;

class Player{
    string name;
    int xp;
    int health;
    public:
    //overloading constructors
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int xp_val, int health_val);
};

Player::Player(): name{"None"}, xp{0}, health{0}{
    cout<<"No args constructor!\n";
};
Player::Player(std::string name_val): name{name_val}, xp{0}, health{0}{
    cout<<"One arg constructor!\n";
};
Player::Player(std::string name_val, int xp_val, int health_val): name{name_val}, health{health_val}, xp{xp_val}{
    cout<<"Three args constructor!\n";
};

int main(){
    Player hero;
    Player frank{"Kiratbir Singh"};
    Player villian{"Kirat", 100, 4};
}