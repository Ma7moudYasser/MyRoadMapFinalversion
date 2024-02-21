#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;


int max_sub(vector<int>a){
    int n = a.size();
    int best = 0, sum = 0;
    for (int k = 0; k<n; k++){
        sum = max(a[k], sum+a[k]);
        best = max(best, sum);
    }
    return best;
}

int main (){
    vector<int> numbers{-1,2,4,-3,5,2,-5,2};
    max_sub(numbers);


    return 0;
}