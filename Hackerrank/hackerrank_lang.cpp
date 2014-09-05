#include<iostream>
#include<string>


using namespace std;

int main()
{
	
	
	string language = "C:CPP:JAVA:PYTHON:PERL:PHP:RUBY:CSHARP:HASKELL:CLOJURE:BASH:SCALA:ERLANG:CLISP:LUA:BRAINFUCK:JAVASCRIPT:GO:D:OCAML:R:PASCAL:SBCL:DART:GROOVY:OBJECTIVEC";
	
	
	
	int testcases;
	cin>>testcases;
	
	while( testcases--)
	{
			string lang;
			long api_id;
			cin>>api_id;
			cin>>lang;
			size_t location = language.find(lang);
			cout<<location<<endl;
			if( location != std::string::npos )
				cout<<"VALID"<<endl;
			else
				cout<<"INVALID"<<endl;
			
			
			
	
	}
	
	return 0;

}