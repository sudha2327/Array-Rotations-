#include<iostream>

#include<vector>
using namespace std;
int main(){
	vector<int> a;
	a.push_back(2);
	a.push_back(0);
	a.push_back(1);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(0);
  int k=0;
	for(int i=0;i<a.size();i++){
		if(a[i]!=0){
	       swap(a[i],a[k]);
		}
		k++;
	}

for(int i=0;i<a.size();i++){
	    cout<<a[i]<<endl;
	}
	

	return 0;
}
