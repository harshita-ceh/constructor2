#include <iostream>
using namespace std;

class Player{
private:
int score=0;
int health=100;
string name="outscal";
public:
Player(){
  cout<<"creating object using default constructor"<<"\n";
  health=100;
}
Player(int hp,int sc){
  cout<<"creating object using custom constructor"<<"\n";
  health=100;
  score=sc;
}

int GetHealth(){
  return health;
}
int Getscore(){
  return score;
}
string Getname(){
  return name="outscal" ;
}
void SetHealth(int hp){
  health=hp;
}
void Getscore(int sc){
  score=sc;
}
protected:
bool IsAlive(){
  if(health>0)
    return true;

    return false;
}
};

int main() {
  Player player;
  cout<<player.GetHealth()<<"\n";
  cout<<player.Getscore()<<"\n";
  cout<<player.Getname()<<"\n";
  Player player2;
  player2.SetHealth(50);
  cout<<player2.GetHealth()<<"\n";
}