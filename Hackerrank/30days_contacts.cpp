#include <iostream>
#include <string>
using namespace std;


class Trie
{

public:

Trie() {
for(int i = 0 ; i < 26; i++)
	alpha[i] = NULL;
end = false;
count = 0;
}


Trie* insert(Trie *root, string str){
	Trie *nextNode = root;
	for(int i =0; i < str.length(); i++){
		if(nextNode->alpha[str[i] -'a'] == NULL) {
			nextNode->alpha[str[i] -'a'] = new Trie;
		}
		nextNode->count++;
		nextNode = nextNode->alpha[str[i] -'a'];

	}

	nextNode->end = true;
	return root;
}




int search(Trie *root, string str){
	Trie *nextNode = root;
	for(int i =0; i < str.length(); i++){
		if(nextNode->alpha[str[i] -'a'] == NULL) {
			return 0;
		}
		nextNode = nextNode->alpha[str[i] -'a'];
	}

	if(nextNode != NULL ) 
		return nextNode->count;
    return 0;
}

private:

bool end;
int count;
Trie *alpha[26];
};

int main()
{
	int N;
	cin >> N;
	Trie *obj = new Trie();
	for(int i = 0 ; i < N; i++) {
	string input;
	getline(cin,input);
	if(input.compare(0,3,"add") == 0){
		string element = input.substr(4,input.length()-4);
		obj = obj->insert(obj,element);
	}

	else if(input.compare(0,4,"find") == 0){
		string element = input.substr(5,input.length()-5);
		int count  = obj->search(obj,element);
		cout << count << endl;
	}
	
}

	
	return 0;
	
}
