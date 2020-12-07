#include<iostream>
using namespace std;
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}
void quicksort(int arr[],int n,int low,int high);
int parti(int arr[],int n,int low,int high){
    int pi=arr[low];
        int a=low;
        int b=high;
    while (true)
    {   
        if(arr[a]>pi){
            break;
        }
        else{
            a++;
        }
       // int s=(sizeof(arr)/sizeof(arr[0]));
        if(a==n-1){
            break;
        }


        
    }
    while(true){
        if(arr[b]<=pi){
            break;
        }
        else{b--;}
    }
    if(a>=b){
        swap(&arr[low],&arr[b]);
        pi=b;
        return pi;
    }
    else{
        swap(&arr[a],&arr[b]);
        //return low;
        quicksort(arr,n,low,high);
    }
    
    

}
void quicksort(int arr[],int n,int low,int high){
    if(high>low){
        int pivot=parti(arr,n,low,high);
        
            quicksort(arr,n,low,pivot-1);
            quicksort(arr,n,pivot+1,high);
        
        
    }
}

int main(){
    int arr[]={6,9,8,1,5,6,7};
    //cout<<"2";
    int n=sizeof(arr)/sizeof(arr[0]);
    quicksort(arr,n,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}