
#include <iostream>

// enum(—ñ‹“‘Ì)


// C++11
enum class Team {
  RED,
  BLUE
};

// Õ“Ë‚ª‹N‚«‚È‚¢
enum class Color {
  RED,
  BLUE,
  GREEN,
};

// Œ^w’è
enum class Button : char {
  UP    = 'W',
  LEFT  = 'A',
  DOWN  = 'S',
  RIGHT = 'D'
};


int main(){
  Button button = Button::UP;

}