#include<iostream>
#include<string>
using namespace std;

string wordProblem(string x){
    int count_lower_case = 0;
    int count_upper_case = 0;
    for (auto& m: x ){
        if (isupper(m)){
            count_upper_case++;
        }
        else{
            count_lower_case++;
        }


    }
    if (count_upper_case>count_lower_case){
        for (auto & s : x){
            s = toupper(s);
        }
    }
    else{
        for (auto &r : x){
            r = tolower(r);
        }
    }
    return x; 
}

int main(){
    string name; 
    cin>>name;
    cout<<wordProblem(name);
    return 0;
}