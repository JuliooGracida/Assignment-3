#include <iostream>
#include <limits>
#include <queue>
#include <map>

using namespace std;

void move_to_rear(queue<string> &q){
  string front = q.front();
  q.pop();
  q.push(front);
}

void printQueue(queue<string> q){
  while(q.size()){
    cout << q.front() << endl;
    q.pop();
  }
}

void palindrome_question_mark(string &i, string &r, int n){
  if(n == 0){
    (i == r) ? cout << "a Palindrome!" : cout << "not a Palindrome!";
    return;
  }
  r.append(i.substr(n-1, 1));
  palindrome_question_mark(i, r, (n-1));
}

void printMenu(char &selection){
  cout << endl << "q - queue" << endl;
  cout << "p - palindrome" << endl;
  cout << "m - maps" << endl;
  cout << "f - finish running the program" << endl << endl;
  cout << "What is your choice?: ";
  cin >> selection; //takes in and saves user input
}

void printMap (map<string, string> m){
  cout << "States - Capitals" << endl;
  for(auto it = m.cbegin(); it != m.cend(); ++it){
    cout << it->first << " " << it->second << endl;
  }
}

void switchCapital (map<string, string> &m){
    m["California"] = "Los Angeles";
}

void capitalNameSearch (map<string, string> &m, string s){
  for(auto it = m.cbegin(); it != m.cend(); ++it) {
    if (it->first == s)
      cout << it->second << endl; 
  }
}

int main() {
  char selection;
  string input;
  string reversed;
  int n;
  queue<string> q;
  q.push("first");
  q.push("second");
  q.push("third");
  map<string, string> states;
  states["Nebraska"] = "Lincoln";
  states["New York"] = "Albany";
  states["Ohio"] = "Columbus";
  states["California"] = "Sacramento";
  states["Massachusetts"] = "Boston";
  states["Texas"] = "Austin";

  while(selection != 'f'){
    printMenu(selection);
    switch(selection){ //switch recieves input
      case 'q':
        printQueue(q);
        move_to_rear(q);
        printQueue(q);
        break;
      case 'p': //dialoge and function to modify an integer
        input = "majam";
        palindrome_question_mark(input, reversed, input.length());
        break;
      case 'm': //dialoge and function to wipe an integer
        printMap(states);
        switchCapital(states);
        printMap(states);
        break;
      case 'f': //this ends the program
        cout << "Thank you for trying my program!!! :)" << endl;
        return 0;
      default:
        cout << "Naaah, try again\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
  } 
}