
#include <iostream>

// enum(�񋓑�)


// C++11�����enum
enum class HP {
  Player = 200,
  Enemy  = 50
};

void CreateObj(const int&);

int main(){
  const int player = 1;
  const int enemy  = 2;
  CreateObj(player);

  // �����֏���ɕϊ�����Ȃ�
  CreateObj(Player);     // error
  CreateObj(HP::Player); // error
}