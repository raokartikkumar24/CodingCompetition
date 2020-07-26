#include <iostream>
#include <vector>
#include <string>


std::string multipleStrings(std::string num1, std::string num2) {

	//std::string result;
	if(num1.empty()) return num2;
	if(num2.empty()) return num1;


	int arr1[3] = {0};
	int arr2[3] = {0};


	for(int i = 0 ; i < num1.length(); i++)
		arr1[i] = (int)(num1[i] - '0');



	for(int i = 0 ; i < num2.length(); i++)
		arr2[i] = (int)(num2[i] - '0');

	int result[100] = {0};

	int sum = 0;
	int carry = 0;
	int c = 99;
	for(int i = 2; i>=0 ; i--) {
		for(int j = 2; j >=0; j--) {
		result[c] = (arr1[i] * arr2[j]) + carry;
		std::cout << result[c] << "\t";
		carry = result[c] / 10;
		result[c] %=10;
		std::cout << result[c];
		c--;
		std::cout << "\n";
		}
	}


	std::cout << "\n";

	return "";

}

int main() {

	std::string n1, n2;
	std::cin >> n1 >> n2;

	multipleStrings(n1,n2);

	return 0;

}
