#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void widthCalc(int height, vector<int> heights){
    int count = 0;
    for (int i = 0; i<heights.size(); i++){
        if (heights[i]> height){
            count +=2;
        }
        else{
            count++;
        }
    }
    cout<<count<<"\n";
}
int main(){
    vector<int> heights;
    int friends_number, fence_height, height; 
    cin>>friends_number>>fence_height;
    for (int i = 0; i<friends_number ; i++){
        cin>> height;
        heights.push_back(height);
    }
    widthCalc(fence_height,heights);




    return 0;
}