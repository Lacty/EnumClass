
#include <iostream>

// enum(—ñ‹“‘Ì)


// ]—ˆ‚Ìenum
enum HP {
  Player = 200,
  Enemy  = 50
};

void CreateObj(const int&);

int main(){
  const int player = 1;
  const int enemy  = 2;
  CreateObj(player);

  // ®”‚ÖŸè‚É•ÏŠ·‚³‚ê‚é
  CreateObj(Player); // ?
}