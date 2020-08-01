#include <iostream>
#include <vector>
#include <string>
#include <stack>

 using namespace std;


string reverseWords2(string s) {

	string result = "";
	vector<string> allWords;
	int len = s.length();
	int  j = len -1;
	int i = 0;
	while( j > 0) {
		i = j;
		while(s[i] != ' ' && i >= 0) {
			i--;
		}
		string substring = s.substr(i+1, j-i);
		if(substring.length() > 0)
			result += substring + ' ';
		if( i >= 0) {	
			j = i - 1;
		}
		else {
			break;
		}

	}

	return result.substr(0, result.length()-1);
}

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

 	//string rev = reverseWords(ins);
 	string rev = reverseWords2(ins);
 	cout << rev << "\n";

 	return 0;

 }