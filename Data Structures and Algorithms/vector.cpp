#include<iostream>
#include<vector>
using namespace std;

int main(){
	//Demo Vector
    //vector<int> arr = {1,2,10,12,15};

	//Fill constructor
	vector<int> arr(10,7);

	//Pop Back
	arr.pop_back();
	//Push_Back
	arr.push_back(16);

	//Print all the elements 

	//for (int i= 0; i<arr.size(); i++){
	//	cout<< arr[i]<<endl;
	//}

	for (int x: arr){
		cout<< x <<",";
	}

	/*
	//Size of the vector (No of elements)
    cout<<arr.size()<<endl;


	//Capacity of the vector 
	cout<<arr.capacity() <<endl;
    return 0;
	
	
	
	*/
	
}