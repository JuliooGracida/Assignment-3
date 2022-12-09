#include <iostream>
#include "functions.h"

using namespace std;

void move_to_rear(queue<string> &q){
  q.push(q.front()); //Copies front element to back
  q.pop(); //Removes front element
}

void printQueue(queue<string> q){ //prints out the queue from the front
  while(q.size()){
    cout << q.front() << endl;
    q.pop();
  }
}

void palindrome_question_mark(string &i, string r, int n){
  if(n == 0){ //base case is when the length becomes 0
    //ternary operator provides results for both palindrome and non palindrome
    (i == r) ? cout << i << " is a Palindrome!" : cout << i << " is not a Palindrome!";
    return;
  }
  r.append(i.substr(n-1, 1)); //we add the nth character to the reversed string
  palindrome_question_mark(i, r, (n-1)); //repeat but n is subtracted by 1
}

void printMap (map<string, string> m){ //prints out map with an iterator
  cout << endl << "Printing out State Map:" << endl;
  cout << setw(15) << left << "STATES" << "CAPITALS" << endl;
  for(auto it = m.cbegin(); it != m.cend(); ++it){
    cout << setw(15) << left << it->first << it->second << endl;
  }
}

void switchCapital (map<string, string> &m){
  //statement that changes the capital to Los Angeles
  m["California"] = "Los Angeles";
}

void capitalNameSearch (map<string, string> m, string s){
  //iterates through to see if there is a match
  for(auto it = m.cbegin(); it != m.cend(); ++it) {
    if (it->first == s){
      cout << "The capital of " << s << " is: " << it->second << endl; 
      return;
    }
  }
  //if there is no match then user will see this message
  cout << "We do not have that state in our map!" << endl;
}