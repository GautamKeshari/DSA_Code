//  *** IMPORTANT ***
#include<bits/stdc++.h>
using namespace std;

double morePrecision(int x,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        // 0.1
        // 0.01
        // 0.001
        for(double j=ans;j*j<x;j=j+factor){
            ans=j;
        }
    }
    return ans;
}

int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int ans=0;

        while(s<=e){
            long long int mid=s+(e-s)/2;

            if(mid*mid==x){
                return mid;
            }else if(mid*mid > x){
                e=mid-1;
            }else{
                s=mid+1;
                ans=mid;  //here maybe start is a answer  ****
            }
        }
        return ans;
        
    }

int main(){
    int x=2000;
    
    int tempSol=mySqrt(x);
    double ans=morePrecision(x,3,tempSol);
    cout<<ans<<endl;
}