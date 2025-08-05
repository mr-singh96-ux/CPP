#include <iostream>
using namespace std;
class Player{
    string name;
    int xp;
    int health;
    public:
    Player();
    Player(string name_val);
    Player(string name_val, int xp_val, int health_val);
};

Player::Player()
    :Player{"None",0,0}{
cout<<"No args constructor!\n";
}
Player::Player(string name_val)
    :Player{"Kiratbir Singh", 23, 1}{
    cout<<"One arg constructor!\n";
}
Player::Player(std::string name_val, int xp_val, int health_val)
    :    name{name_val}, health{health_val}, xp{xp_val}{
    cout<<"Three args constructor!\n";
};
int main(){
    Player hero;
    Player frank{"Kiratbir Singh"};
    Player villian{"Kirat", 100, 4};
}