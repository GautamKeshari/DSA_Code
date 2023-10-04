// https://www.codingninjas.com/studio/problems/rod-cutting-problem_800284?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int f(int ind,int L,vector<int> &price){

// 	if(ind==0){
// 		return L*price[ind-1]; 
// 	}

// 	int notCut=0+f(ind-1,L,price);
// 	int cut=INT_MIN;
//  int rodLength=ind+1;
// 	if(rodLength<=L){
// 		cut=price[ind]+f(ind,L-rodLength,price);
// 	}
// 	return max(cut,notCut);
// }

// int cutRod(vector<int> &price, int n)
// {
// 	return f(n-1,n,price);
// }
