#pragma once
#include <iostream>
#include <limits>
#include "functions.h"

using namespace std;

void printMenu(char &selection){
  cout << endl << "Assignment 3 Menu" << endl;
  cout << "q - Queue (Question 1)" << endl;
  cout << "p - Palindrome (Question 2)" << endl;
  cout << "m - Maps (Question 5)" << endl;
  cout << "e - Exit Program" << endl << endl;
  cout << "What would you like to run?: ";
  cin >> selection; //takes in and saves user input
}

void q_selected(queue<string> &q){
  cout << "The Current Queue is:" << endl;
  printQueue(q);
  cout << endl << "The front element is moved to the back!" << endl;
  move_to_rear(q);
  cout << endl << "The New Queue is now:" << endl;
  printQueue(q);
}

void p_selected(string i, string &r, int n){
  cout << endl << "NOTE: This is case sensitive!" << endl;
  cout << "Please provide a string: ";
  cin >> i;
  palindrome_question_mark(i, r, i.length());
  cout << endl;
}

void m_selected(map<string, string> &m, string i){
  printMap(m);
  cout << endl << "Changing the capital of California.." << endl;
  switchCapital(m);
  cout << "California's new capital is: Los Angeles" << endl; 
  cout << endl << "Please type in a State: ";
  cin >> i;
  capitalNameSearch(m, i);
}

void e_selected(){
  cout << "Thank you for trying out my program!!! :)) - JG" << endl;
  return 0;
}

void default_case(){
  cout << "Please select a menu option!" << endl;
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
}