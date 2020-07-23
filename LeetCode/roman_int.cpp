#include <iostream>
#include <string>
#include <map>

using namespace std;

	int edgecase(string s) {

		if (s == "IV") return 4;
		if (s == "IX") return 9;
		if (s == "XL") return 40;
		if (s == "XC") return 90;
		if (s == "CD") return 400;
		if (s == "CM") return 900;

		return -1;

	}

	int romanToInt(string s) {
		map<char, int> symbol_values;
		symbol_values['I'] = 1;
		symbol_values['V'] = 5;
		symbol_values['X'] = 10;
		symbol_values['L'] = 50;
		symbol_values['C'] = 100;
		symbol_values['D'] = 500;
		symbol_values['M'] = 1000;


		int numeric = 0;
		int edge = 0;
		if (s.length() == 2) {
			edge = edgecase(s);
			if (edge != -1) return edge;
		}

		int edcase = -1;
		if (s.find("IV") != std::string::npos ||
			s.find("IX") != std::string::npos ||
			s.find("XL") != std::string::npos ||
			s.find("XC") != std::string::npos ||
			s.find("CD") != std::string::npos ||
			s.find("CM") != std::string::npos) {
			string substring = s.substr(s.size() - 2);
			edcase = edgecase(substring);
		}
		string remain;
		if (edcase != -1) {
			numeric = edge;
			remain = s.substr(0, s.length() - 2);
		}
		else {
			remain = s;
		}
		for (int i = 0; i < remain.length(); i++) {

			numeric = numeric + symbol_values[remain[i]];
		}

		return numeric;
	}

int romanToIntNew(string s) {
		map<char, int> symbol_values;
		symbol_values['I'] = 1;
		symbol_values['V'] = 5;
		symbol_values['X'] = 10;
		symbol_values['L'] = 50;
		symbol_values['C'] = 100;
		symbol_values['D'] = 500;
		symbol_values['M'] = 1000;

		int decimal = 0;
		for (int i = 0; i < s.length(); i++) {

			int val = symbol_values[s[i]];

			if (i + 1 < s.length()) {
				int val2 = symbol_values[s[i + 1]];
				if (val >= val2) {
					decimal = decimal + val;
				}
				else {
					decimal = decimal + (val2 - val);
					i++;
				}
			}
			else {
				decimal = decimal + val;
			}

		}
		return decimal;
	}

int main()
{
	int r = romanToIntNew("MCMXCIV");
	std::cout << "MCMXCIV is \t" << r << "\n";
	int r2 = romanToIntNew("III");
	std::cout << "III is \t" << r2 << "\n";

	return 0;
}