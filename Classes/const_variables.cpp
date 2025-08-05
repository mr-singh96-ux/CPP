#include <iostream>
using namespace std;
class Player{
    string name;
    int health;
    int xp;
    public:
    void set_name(string name_val){
        name=name_val;}
    string get_name() const {
        return name;}
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
    
    };
    Player::Player(): Player{"None",0,0}{};
    Player::Player(string name_val): Player{name,0,0}{};
    Player::Player(string name_val,int health_val,int xp_val): name{name_val},health{health_val},xp{xp_val}{};
int main(){
    const Player villian{"Villian",100,24};
    cout<<villian.get_name();
    return 0;
}