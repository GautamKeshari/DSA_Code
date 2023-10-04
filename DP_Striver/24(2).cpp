// int f(int ind,int L,vector<int> &price,vector<vector<int>> &dp){

// 	if(ind==0){
// 		return L*price[0]; 
// 	}

//  if(dp[ind][L]!=-1) return dp[ind][L];

// 	int notCut=0+f(ind-1,L,price);
// 	int cut=INT_MIN;
//  int rodLength=ind+1;
// 	if(rodLength<=L){
// 		cut=price[ind]+f(ind,L-rodLength,price,dp);
// 	}
// 	return dp[ind][L]=max(cut,notCut);
// }

// int cutRod(vector<int> &price, int n)
// {
//  vector<vector<int> >dp(n,vector<int>(n+1,-1));  
// 	return f(n-1,n,price);
// }



