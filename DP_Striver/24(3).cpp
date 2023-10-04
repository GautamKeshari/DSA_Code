// int cutRod(vector<int> &price, int L)
// {
// 	vector<vector<int> >dp(L,vector<int>(L+1,0));
// 	for(int rodLen=0;rodLen<=L;rodLen++){
// 		dp[0][rodLen]=(rodLen)*price[0];
// 	}

// 	for(int ind=1;ind<L;ind++){
// 		for(int len=0;len<=L;len++){
// 			int notCut=0+dp[ind-1][len];
// 			int cut=INT_MIN;
// 			int rodLen=ind+1;
// 			if(rodLen<=len){
// 				cut=price[ind]+dp[ind][len-rodLen];
// 			}
// 			dp[ind][len]=max(cut,notCut);
// 		}
// 	}
// 	return dp[L-1][L];
// }

