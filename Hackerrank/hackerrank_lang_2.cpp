#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	 map<string,int> language;
	 language.insert(pair<string,int>("C",1));
	 language.insert(pair<string,int>("CPP",2));
	 language.insert(pair<string,int>("JAVA",3));
	 language.insert(pair<string,int>("PYTHON",4));
	 language.insert(pair<string,int>("PERL",5));
	 language.insert(pair<string,int>("RUBY",6));
	 language.insert(pair<string,int>("PHP",7));
	 language.insert(pair<string,int>("RUBY",8));
	 language.insert(pair<string,int>("CSHARP",9));
	 language.insert(pair<string,int>("HASKELL",10));
	 language.insert(pair<string,int>("CLOJURE",11));
	 language.insert(pair<string,int>("BASH",12));
	 language.insert(pair<string,int>("SCALA",13));
	 language.insert(pair<string,int>("ERLANG",14));
	 language.insert(pair<string,int>("LISP",15));
	 language.insert(pair<string,int>("CLISP",16));
	 language.insert(pair<string,int>("LUA",17));
	 language.insert(pair<string,int>("BRAINFUCK",18));
	 language.insert(pair<string,int>("JAVASCRIPT",19));
	 language.insert(pair<string,int>("GO",20));
	 language.insert(pair<string,int>("D",21));
	 language.insert(pair<string,int>("OCAML",22));
	 language.insert(pair<string,int>("R",23));
	 language.insert(pair<string,int>("PASCAL",24));
	 language.insert(pair<string,int>("SBCL",25));
	 language.insert(pair<string,int>("DART",26));
	 language.insert(pair<string,int>("GROOVY",27));
	 language.insert(pair<string,int>("OBJECTIVEC",28));
	
	
		
	int testcases;
	cin>>testcases;
	
	while( testcases--)
	{
			string lang;
			long api_id;
			cin>>api_id;
			cin>>lang;
			
			map<string,int>::const_iterator search = language.find( lang );
			if( search != language.end() )
				cout<<"VALID"<<endl;
			else
				cout<<"INVALID"<<endl;
			
			
			
	
	}
	
	return 0;

}