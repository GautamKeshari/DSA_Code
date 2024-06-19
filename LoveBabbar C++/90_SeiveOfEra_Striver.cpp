// https://www.youtube.com/watch?v=g5Fuxn_AvSk

vector<int> sieveOfEratosthenes(int n) {
        vector<int> prime(1e6+1,1);
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }   
}