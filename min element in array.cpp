#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[10];
    int n=5;
    
    int minAns = INT_MAX;
    for(int i = 0 ; i < n ; i++ ){
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }
    cout<<"smallest no in the array is: "<<minAns<<endl;
}