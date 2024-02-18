#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int countMinSwaps(vector<int> arr){

    int n = arr.size();
    int ans;
    // Know the actual positions of elements 

    // store the current indices
    pair<int, int> ap[n];
    for(int i = 0; i<n ; i++){
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    sort(ap,ap+n);

    vector<bool> visited(n,false);
    for(int i = 0; i<n ; i++){
        // if element is visited
        int old_position = ap[i].second;
        if(visited[i] == true or old_position == i){
            continue;
        }

        // visiting the elemet (index) for first time
        int node = i;
        int cycle = 0;
        while (!visited[node] == false){
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle +=1;

        }
        ans+= (cycle-1);

    }

    return ans;
}



int main(){
    vector<int> arr{5,4,3,2,1};
    cout<<countMinSwaps(arr)<<endl;
    return 0;
}