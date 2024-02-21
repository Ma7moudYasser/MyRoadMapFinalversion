#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

void game_logic(int n, string s){
    int anton_count = 0;
    int danik_count = 0;
    for(int i = 0; i<n ; i++){
        if (s[i] == 'A'){
            anton_count++;
        }
        else if (s[i] == 'D'){
            danik_count++;
        }
    }

    if (danik_count> anton_count){
        cout<<"Danik"<<endl;
    }else if (anton_count> danik_count){
        cout<<"Anton"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}
int main(){
    int games = 0;
    string winners;
    cin>> games;
    cin>>winners;
    game_logic(games, winners);





    return 0;
}