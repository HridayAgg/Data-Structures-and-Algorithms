#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
void subse(string a,int index,string output,vector<string>& ans){
	if (index == a.size()){
		ans.push_back(output);
		return;
	}
    subse(a,index+1,output,ans);
	char ch = a[index];
	output.push_back(ch);
    
	subse(a,index+1,output,ans);
	
	}
int main() {
    int cnt=0;
	string a;
    cin>>a;
	vector<string> ans;
	string output="";
	subse(a,0,output,ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cnt++;
        cout<<ans[i]<<endl;
    }
    cout<<cnt;
    
	
	return 0;
}