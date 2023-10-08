// https://www.youtube.com/watch?v=AseUmwVNaoY&list=PLgUwDviBIf0rENwdL0nEH0uGom9no0nyB&index=26&ab_channel=takeUforward

// vector<int> findMissingRepeatingNumbers(vector < int > a) {
//     int n=a.size();
//     int x=0;
//     for(int i=0;i<n;i++){
//         x=x^a[i];
//         x=x^(i+1);
//     }
//     int pos=0;
//     while(!(x&1)){
//         x=x>>1;
//         pos++;
//     }
//     // int pos=x & -(x-1);
//     int zeros=0,ones=0;
//     for(int i=0;i<n;i++){
//         if((a[i]>>pos) & 1) ones=ones^a[i];
//         else zeros= zeros^a[i];

//         if(((i+1)>>pos) & 1) ones=ones^(i+1);
//         else zeros=zeros^(i+1);
//     }
//     int cnt=0;
//     // cout<<"Zeros "<<zeros<<" Ones "<<ones<<endl;

//     for(int i=0;i<n;i++){
//         if(a[i]==zeros) cnt++;
//         if(cnt==2) break;
//     }

//     if(cnt==2) return {zeros,ones};
//     return {ones,zeros};
// }