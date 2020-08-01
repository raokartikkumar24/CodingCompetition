#include <iostream>
#include <vector>
#include <string>
#include <stack>

 using namespace std;


 string reverseWords(string s) {

 		int len = s.length();
 		int i = 0, j = 0;
 		string allWords = "";
 		stack<string> wordStack;
 		bool gotWord = false;
 		while( i < len) {

 				string word = "";
 				j = i;
 				while((s[j] != ' ') && (j < len)) {
 					//allWords += s[j];
 					word += s[j];
 					j++;
 					gotWord = true;
 				}
 				if(gotWord) {
 					wordStack.push(word);
 					//allWords += ' ';
 				}
 				gotWord = false;
 				i = j + 1;
 		}

 		while(!wordStack.empty()) {
 			allWords += wordStack.top();
 			allWords += ' ';
 			wordStack.pop();
 		}

 		return allWords.substr(0,allWords.length() -1);
 }


 int main() {

 	string ins;
 	getline(cin, ins);

 	string rev = reverseWords(ins);

 	cout << rev << "\n";

 	return 0;

 }