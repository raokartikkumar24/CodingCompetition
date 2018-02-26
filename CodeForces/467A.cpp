#include <iostream>
#include <vector>

using namespace std;


int main()
{
    
    int N;
    cin >> N;
    vector<int> scores(601);
    for(int i = 0 ; i < 601; i++)
        scores[i] = 0;
    
    for(int i = 0 ; i < N ; i++) {
        int num;
        cin >> num;
        scores[num]++;
    }
    
    int diplomas = 0;
    for(int i = 1; i < 601; i++) {
        if(scores[i] > 0)
            diplomas++;
    }
    
    cout << diplomas << "\n";
    
    return 0;
}


