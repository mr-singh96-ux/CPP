#include <iostream>
using namespace std;
class Player{
    string name;
    int xp;
    int health;
    public:
    Player(std::string name_val="None", int xp_val=0, int health_val=0);
};
Player::Player(string name_val, int xp_val, int health_val)
    :name{name_val}, xp{xp_val}, health{health_val}
    {
        cout<<"Three args construted!";
}
int main(){
    Player empty;
    Player hero{"Hero",0};
    Player frank{"Kiratbir Singh"};
    Player villian{"Kirat", 100, 4};
}