/*
sample input:  7
               4 5 6 5 6 7 7

sample output: 4
               4 5 6 7

print how many element have in the array which has no repeating.
print one element just once not repeating one.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> result;
vector<int> removeDuplicates(vector<int> input){
	set<int> s;
	
	for (int i = 0; i < input.size(); i++)
	{
		if (s.find(input[i]) == s.end()){
			s.insert(input[i]);
			result.push_back(input[i]);
		}
	}

	return result;
		
}

int main(){
	int n;
	cin>>n;
	vector<int> v;
	int input;
	int flag=0;
	while((cin>>input) && flag!=n){
		v.push_back(input);
		flag++;
	}
	
	removeDuplicates(v);
	cout<<result.size()<<endl;
	for (int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}

	return 0;
}
