#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int longest_band(vector<int> a){
	int n = a.size();
	// Data inside a set 
	unordered_set<int> s;
	for (int x : a){
		s.insert(x);
	}
	
	int largestLen = 1;
	//Iterate over the array
	for (auto element: s){
		int parent = element - 1;
		
		if (s.find(parent) == s.end()){
			// find entire band / chain starting from element 
			int next_no = element + 1;
			int cnt = 1;
			
			while(s.find(next_no)!= s.end()){
				next_no++;
				cnt++;
			}
			if (cnt> largestLen){
				largestLen = cnt;
			}
		}
	}
	
	
	return largestLen;
}
int main(){
	
	vector<int> band {1,9,3,0,18,5,2,4,10,7,12,6};
	cout<<longest_band(band)<<endl;	
	return 0;
}