#include <bits/stdc++.h>

using namespace std;

string acidNaming(string acid_name) {
    string hydro ="hydro\0";
    string ic = "ic\0";
    
    bool bhydro = false;
    bool bic = false;
    
    string hd;
    string iic;
    for(int i = 0 ; i < hydro.length(); i++)
        hd += acid_name[i];
    for(int i =(int) acid_name.length() - 1; i > acid_name.length() - 3 ; i--)
        iic += acid_name[i];
    
    reverse(iic.begin(),iic.end());
    
    if(hd == hydro) bhydro = true;
    if(iic == ic) bic = true;
    
    if(bhydro && bic) return "non-metal acid";
    else if(bic) return "polyatomic acid";
    else return "not an acid";
    
}

int main() {
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string acid_name;
        cin >> acid_name;
        string result = acidNaming(acid_name);
        cout << result << endl;
    }
    return 0;
}

