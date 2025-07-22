#include <iostream>
using namespace std;

class Player{
private:
string name;
int health;
int xp;
public:
void get_name(string n){
    name=n;
}
Player(){
    cout<<"No arg passed"<<endl;
}

Player(string name){
    cout<<"String arg passed"<<endl;
}
Player(string name, int health, int xp){
    cout<<"All three arg passed"<<endl;
}
~Player(){
    cout<<"Destructor is called "<<name<<endl;
}
};

int main(){
    {
    Player();
    Player("Kiratbir Singh");
    Player("Kiratbir Singh",100,30);
}
    {
        Player frank;
        frank.get_name("Kiratbir Singh");
        Player hero("Hero");
        hero.get_name("Hero");
        Player Villian("Villian", 100, 30);
        Villian.get_name("Villian");
    }

    {
        Player *enemy = new Player;
        enemy->get_name("Kiratbir Singh");
        delete enemy;    
    }
    return 0;
}