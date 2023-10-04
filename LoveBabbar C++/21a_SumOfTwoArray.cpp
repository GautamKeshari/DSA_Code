// https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4&leftPanelTab=0

// #include <bits/stdc++.h> 
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
// 	int carry=0;
// 	vector<int> ans;
// 	int i=n-1,j=m-1;
// 	while(i>=0 && j>=0){
// 		int total=a[i]+b[j]+carry;
// 		int digit=total%10;
// 		carry=total/10;
// 		ans.push_back(digit);
// 		i--;j--;
// 	}
// 	while(i>=0){
// 		int total=a[i]+carry;
// 		int digit=total%10;
// 		carry=total/10;
// 		ans.push_back(digit);
// 		i--;
// 	}
// 	while(j>=0){
// 		int total=b[j]+carry;
// 		int digit=total%10;
// 		carry=total/10;
// 		ans.push_back(digit);
// 		j--;
// 	}
// 	if(carry!=0) ans.push_back(carry);

// 	int size=ans.size();
// 	for(int i=0;i<size/2;i++){
// 		swap(ans[i],ans[size-i-1]);
// 	}
// 	return ans;
// }