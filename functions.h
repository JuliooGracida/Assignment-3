#pragma once
#include <iostream>
#include <iomanip>
#include <queue>
#include <map>

using namespace std;

void move_to_rear(queue<string> &q);
//Pre: Takes in queue by reference
//Post: Front element is now located in the back

void printQueue(queue<string> q);
//Pre: Recieves queue
//Post: Prints out queue in order into the console

void palindrome_question_mark(string &i, string r, int n);
//Pre: Recieves input, placeholder for reverse of input, and the length of the input
//Post: It alerts the user of the results via the console whether it's a palindrome or not.

void printMap (map<string, string> m);
//Pre: Recieves map
//Post: Prints out its contents into the console

void switchCapital (map<string, string> &m);
//Pre: Recieves map by reference because we are going to edit it
//Post: Capital of California changes to Los Angeles (not true btw)

void capitalNameSearch (map<string, string> m, string s);
//Pre: Recieves the map and a string
//Post: If a key matches the string then the associated capital will be read.
// If there is no matching key then the user will know.