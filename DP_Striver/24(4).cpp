

// int cutRod(vector<int> &price, int L)
// {
// 	vector<int> prev(L+1,0),curr(L+1,0);
// 	for(int rodLen=0;rodLen<=L;rodLen++){
// 		prev[rodLen]=(rodLen)*price[0];
// 	}

// 	for(int ind=1;ind<L;ind++){
// 		for(int len=0;len<=L;len++){
// 			int notCut=0+prev[len];
// 			int cut=INT_MIN;
// 			int rodLen=ind+1;
// 			if(rodLen<=len){
// 				cut=price[ind]+curr[len-rodLen];
// 			}
// 			curr[len]=max(cut,notCut);
// 		}
// 		prev=curr;
// 	}
// 	return prev[L];
// }

