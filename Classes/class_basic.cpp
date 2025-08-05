#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player{
    public:
    string name;
    int health;
    int xp;

    void talk(string text){
        cout<<name<<" says "<<text;
    }
};
int main(){
    Player kirat;
    kirat.name="Kiratbir Singh";
    kirat.health=100;
    kirat.xp=15;
    kirat.talk("Hi there!");

    Player *enemy=new Player();
    enemy->name="Vansh";
    enemy->health=99;
    (*enemy).xp=20;
    (*enemy).talk("I will destroy you!");
    return 0;
}