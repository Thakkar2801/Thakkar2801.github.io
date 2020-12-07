#include<iostream>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int bubble=0;
       for(int j=1;j<n-i;j++){
           if(arr[bubble]>arr[j]){
               swap(&arr[bubble],&arr[j]);
               bubble++;
           }
           else{
               bubble++;
           }
           
           
       }
    }
    
}

int main(){
    int arr[]={6,9,8,1,5,1,7,100,99,33,-1};
    //cout<<"2";
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}