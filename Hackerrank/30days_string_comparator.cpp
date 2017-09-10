#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
    
   bool operator >(const Player& player2) const {
       if(score == player2.score){
           return (name.compare(player2.name) < 0);
       }
       return score > player2.score;
   }
    
}; 

vector<Player> comparator(vector<Player> players) {
    
    std::sort(players.begin(),players.end(), greater<Player>());
    return players;
   
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}

