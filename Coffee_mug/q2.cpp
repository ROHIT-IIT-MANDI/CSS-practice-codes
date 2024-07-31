#include <iostream>
using namespace std;

int el(int arr[], int k){
    int m = 0;
    //int j = 0;
    for(int i =0; i<k; i++){
        if(m<arr[i]){
            m = arr[i];
            //j = i;
        }
    }
    return m;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[k];
        for(int i =0; i<k; i++){
            cin>>arr[i];
        }
        bool d = false;
        int m = el(arr,k);
        int counter = 0;
        for(int i =0; i<k; i++){
            if(arr[i]==m && d==false){
                d = true;
            }
            else{
                counter+=arr[i]-1;
            }
        }
        counter+=n-m;
        cout<<counter<<endl;
    }
}