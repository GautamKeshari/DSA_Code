// https://www.naukri.com/code360/problems/kth-missing-element_893215?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTabValue=PROBLEM

int missingK(vector < int > vec, int n, int k) {
    int i=0;
    while(i<n && vec[i]<=k){
        k++;i++;
    }
    return k;
}

