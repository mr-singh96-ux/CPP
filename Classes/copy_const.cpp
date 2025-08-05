#include <iostream>
using namespace std;
class Player{
    string name;
    int xp;
    int health;
    public:
    string get_name(){ return name;}
    int get_xp(){ return xp;}
    int get_health(){ return health;}
    Player(string name_val="None", int xp_val=0, int health_val=0);
    Player(const Player &source);
    ~Player(){cout<<"Destructor is called!\n";} 
};
Player::Player(string name_val, int xp_val, int health_val)
    :name{name_val}, xp{xp_val}, health{health_val} {
        cout<<"Three args are called with name "+name<<endl;
}
Player::Player(const Player &source)
    :Player{source.name, source.xp, source.health}{
        cout<<"Copy constructor made of- by name "+source.name<<endl;
    }
void display_det(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"xp: "<<p.get_xp()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;    
}
int main(){
    Player hero{"KiratHero", 99, 24};
    Player Kirat{hero};
    display_det(hero);
}