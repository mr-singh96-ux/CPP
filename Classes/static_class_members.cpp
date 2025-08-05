#include <iostream>
using namespace std;
class Player{
    static int num_player;
    string name;
    int health;
    int xp;
    public:
    string get_name(){
        return name;}
    int get_health(){
        return health;}
    int get_xp(){
        return xp;}
        Player();
        Player(string name_val);
        Player(const Player& source);
        Player(string name_val, int health_val, int xp_val);
        ~Player();
        static int get_num_player();
    
    };
    int Player::num_player{0};
    Player::Player(): Player{"None",0,0}{};
    Player::Player(string name_val): Player{name_val,0,0}{};
    Player::Player(const Player& source): Player{source.name,source.health,source.xp}{};
    Player::Player(string name_val,int health_val,int xp_val): name{name_val},health{health_val},xp{xp_val}{++num_player;};
    Player::~Player(){
        --num_player;
    }
int Player::get_num_player() {
    return num_player;
}
void display_pla(){
    cout<<"Active players: "<<Player::get_num_player()<<endl;
}
int main(){
    display_pla();
    Player villian("Villian");
    Player villian1("Villian1");
    Player villian2("Villian2");
    display_pla();
    return 0;
}