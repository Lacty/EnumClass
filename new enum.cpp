
#include <iostream>

// enum(�񋓑�)


// C++11
enum class Team {
  RED,
  BLUE
};

// �Փ˂��N���Ȃ�
enum class Color {
  RED,
  BLUE,
  GREEN,
};

// �^�w��
enum class Button : char {
  UP    = 'W',
  LEFT  = 'A',
  DOWN  = 'S',
  RIGHT = 'D'
};


int main(){
  Button button = Button::UP;

}