#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

int main() {
  greet();
  
  std::string codeword = "codecademy";
  std::string answer = "__________";
  int misses = 0;
  vector<char> incorrect;
  char letter;
  bool guess = false;
  while (answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(answer, incorrect);
    cout << "Please enter your guess: " << endl;
    cin >> letter;
    for (int i=0; i < codeword.size(); i++) {
      if (codeword[i] == letter) {
        answer[i] = letter;
        guess = true;
      };
    }
    if (guess) {
        cout << "Correct Guess!" << endl;
    } else {
        misses++;
        cout << "Incorrect! The tractor beam pulls the person in further." << endl;
        incorrect.push_back(letter);
    }

    guess = false;

  };
  end_game(answer, codeword);
}

