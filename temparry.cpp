#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int arr[]={1,2,3,4,5,6,7};
	int s=sizeof(arr)/sizeof(arr[0]);
	vector<int> v;
	int tem1[s];
	
	printf("enter the rotation cout:\n");
	int r;
	cin>>r;
	for(int i=r+1;i<s;i++){
		v.push_back(arr[i]);
	}
	//now one array has made
	for(int i=0;i<=r;i++){
		v.push_back(arr[i]);
	}
	//add two arry
	for(int i=0;i<s;i++){
		cout<<v[i]<<"=>";
	}
	
	return 0;
}
