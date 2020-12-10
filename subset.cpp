#include<iostream>
using namespace std;
bool isSubsetSum(int set[],int n,int sum){
    bool mat[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0){
                mat[i][j]=true;
            }
            else if(j==0){
                mat[i][j]=false;
            }
        }
        
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(set[i-1]<=j){
                mat[i][j]=mat[i-1][j]||mat[i-1][j-set[i-1]];
            }
            else{
                mat[i][j]=mat[i-1][j];
            }
        }
    }
    return mat[n][sum];
}
int main()
{
    int set[] = { 6,5,1,11 };
    int sum = 12;
    int n = sizeof(set) / sizeof(set[0]);
    if (isSubsetSum(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}