#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


vector<int> subarraySort(vector<int> a){

    vector<int> b(a);
    sort(a.begin(), a.end());
    int i = 0;
    int n = a.size();
    while (i<n and a[i] == b[i]){
        i++;
    }
    int j = a.size()-1;
    while(j>=0 and a[j] == b[j]){
        j--;
    }
    if (i== a.size()){
        return {-1,-1};
    }

 return {i,j};
}

int main() {


    vector<int> b{1,2,3,4,5,6,8,7, 9, 10};
    vector<int> result = subarraySort(b);

    if (result[0] == -1 && result[1] == -1) {
        cout << "No subarray needs to be sorted." << endl;
    } else {
        cout << "Subarray to be sorted: [" << result[0] << ", " << result[1] << "]" << endl;
    }

    return 0;
}