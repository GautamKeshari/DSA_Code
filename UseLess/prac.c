#include<stdio.h> 
#include<string.h>
int j=0;
int isFeasible(char A[], int n){
    for (int i=0;i<n-2;i++){
        if(A[i]=='x' && A[i+1]=='y' && A[i+2]=='z'){
            return 1;
        }
    }
    return 0;
}


void genStr(char ch, char s[], int n,char output[], int ind, char ans [1000][100],int j,int *count){
    if(ind==n){
        j++;
        for (int i=0;i<n;i++){
            printf("%c", output[i]);
        }
        output[n-1]='\0';
        printf("\n");
        if(isFeasible(output,n)==1){
            count++;
        return;
    }
}

    output[ind++]=ch;

    for(int i=0;i<3;i++){
        genStr(s[i],s,n, output, ind, ans, j,count);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    char output[n+1]; 
    char ans [1000] [100];
    char s[3]="xyz";
    int ind=0;
    int count=0;
    for (int i=0;i<3;i++){
        genStr(s[i],s,n, output, ind, ans, j,&count);
    }
    printf("%d", count); 
    return 0;
}