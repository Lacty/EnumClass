
#include <iostream>

// enum(列挙体)


// C++11からのenum
enum class HP {
  Player = 200,
  Enemy  = 50
};

void CreateObj(const int&);

int main(){
  const int player = 1;
  const int enemy  = 2;
  CreateObj(player);


  // スコープで指定しないとエラー
  CreateObj(Player);     // error

  // 整数へ勝手に変換されない
  CreateObj(HP::Player); // error
}