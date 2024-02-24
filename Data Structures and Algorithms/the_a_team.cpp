#include<iostream>
#include<vector>
#include<algorithm>
#include<string>


using namespace std;

int main(){
	int a,b,c,n;
	int count = 0;
	int score = 0;
	cin>>n;
	for (int i = 0; i<n; i++){
		cin>>a>>b>>c;
		count = a+b+c;
		if (count>1){
			score++;
			
		}
	}
	
	cout<<score<<"\n";
	
	return 0;
}