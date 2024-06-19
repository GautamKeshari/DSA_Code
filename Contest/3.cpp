using namespace std;

#include<bits/stdc++.h>
string findFirstLast(string input1){
    string ans;
    char ch=toupper(input1[0]);
    int len=input1.length();
    ans.push_back(ch);
    ans.push_back('.');
    ans.push_back(toupper(input1[len-1]));
    return ans;
}


int main(){
    int cnt,a,b;
    int arr[100];
    cin>>cnt>>a>>b;
    for(int i=0;i<cnt;i++){
        cin>>arr[i];
    }
    cout<<minimumcost(cnt,a,b,arr)<<endl;
}