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
}


Trie* insert(Trie *root, string str){
	Trie *nextNode = root;
	for(int i =0; i < str.length(); i++){
		if(nextNode->alpha[str[i] -'a'] == NULL) {
			nextNode->alpha[str[i] -'a'] = new Trie;
		}

		nextNode = nextNode->alpha[str[i] -'a'];

	}

	nextNode->end = true;
	return root;
}




Trie* searchPrefix(Trie *root, string str){
	Trie *nextNode = root;
	for(int i =0; i < str.length(); i++) {

		if(str[i] == '.') continue;
		
		else if(nextNode->alpha[str[i] -'a'] == NULL) {
			return NULL;
		}
		nextNode = nextNode->alpha[str[i] -'a'];
	}

	return nextNode;
}


bool search(Trie *root, string str) {

	Trie *node = searchPrefix(root, str);
	return node != NULL && node->end;

}

bool startsWith(Trie *root, string str) {

	Trie *node = searchPrefix(root, str);

	return node != NULL;

}

private:

bool end;
char c;
Trie *alpha[26];
};

int main()
{
	Trie *obj = new Trie();
	
	obj = obj->insert(obj,"hello");
	obj = obj->insert(obj,"world");
	obj = obj->insert(obj,"linkin");
	obj = obj->insert(obj,"park");

	cout << obj->search(obj,"park") << endl;
	cout << obj->search(obj,"qwertt") << endl;

	cout << obj->startsWith(obj, "wor");
	
	return 0;
	
}

