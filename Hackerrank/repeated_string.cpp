#include <iostream>
#include <string>
typedef long long LL;
using namespace std;

int main()
{

	string input;
	cin >> input;

	LL n;
	cin >> n;

	LL len = input.length();

	LL array[26] = {0};

	for(LL i = 0 ; i < len; i++)
		array[input[i]-'a']++;

	LL quo = n / len;
	LL remain = n % len;

	LL count = 0 ;

	count = quo * array[0];

	while(remain--)
	{
		if(input[remain] == 'a') count++;

	}
        

        if(remain == 0) 
        {
                if(input[0] == 'a') count++;
        }
	cout << count << endl;

	return 0;
}
