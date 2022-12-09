#include <iostream>
#include "dialogue.h"
#include "functions.h"

using namespace std;

int main() {
  char selection;
  string input, reversed;
  int n;
  queue<string> q; //initializing queue
  q.push("first");
  q.push("second");
  q.push("third");
  map<string, string> states; //initializing map
  states["Nebraska"] = "Lincoln";
  states["New York"] = "Albany";
  states["Ohio"] = "Columbus";
  states["California"] = "Sacramento";
  states["Massachusetts"] = "Boston";
  states["Texas"] = "Austin";

  while(selection != 'e'){
    printMenu(selection);
    switch(selection){ //switch recieves input
      case 'q': //Queue Selection
        q_selected(q);
        break;
      case 'p': //Palindrome Selection
        p_selected(input, reversed, input.length());
        break;
      case 'm': //Map Selection
        m_selected(states, input);
        break;
      case 'e': //End of the program
        e_selected();
        break;
      default:
        default_case();
        break;
    }
  } 
}