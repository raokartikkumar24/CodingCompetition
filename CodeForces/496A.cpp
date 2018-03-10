

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
   
    int R,C;
    cin >> R >> C;
    
    char pasture[R+2][C+2] ;
    
    
    for(int i = 0 ; i <= R+1; i++)
        for(int j = 0 ; j <= C+1; j++)
            pasture[i][j] = 'x';
    
    for(int i = 1 ; i <= R; i++)
        for(int j = 1 ; j <= C; j++)
            cin >> pasture[i][j];
    
    bool addedDog = false;
    for(int i = 1 ; i <= R; i++) {
        for(int j = 1 ; j <= C; j++) {
            
            if((pasture[i][j] == 'S') || (pasture[i][j] == 'W') ) {
                if(pasture[i-1][j] != 'x' && pasture[i-1][j] == '.') {
                    pasture[i-1][j] = 'D';
                    addedDog = true;
                }
                if(pasture[i+1][j] != 'x' && pasture[i+1][j] == '.') {
                    pasture[i+1][j] = 'D';
                    addedDog = true;
                }
                if(pasture[i][j-1] != 'x' && pasture[i][j-1] == '.') {
                    pasture[i][j-1] = 'D';
                    addedDog = true;
                }
                if(pasture[i][j+1] != 'x' && pasture[i][j+1] == '.') {
                    pasture[i][j+1] = 'D';
                    addedDog = true;
                }
                
            }
           
        }
    }
    
    if(addedDog) {
        for(int i = 1 ; i <= R; i++) {
            for(int j = 1 ; j <= C; j++) {
                cout  << pasture[i][j];
            }
        cout << "\n";
        }
    }
    else {
        cout << "No \n";
    }
    
    
    return 0;
}

