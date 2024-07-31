#include <iostream>
using namespace std;

int function(char arr[],int j, int m, int k, char a, int n){
    int r = 0;
    if(a=='L'){
        if(j+m>=n){
        
        return 1;
    }
    for(int i = j+m; i>j; i--){
        if(arr[i]=='L'){
            a='L';
            return function(arr,i,m,k,a,n);
        }
    }

    for(int i = j+m; i>j; i--){
        if(arr[i]=='W'){
            a = 'W';
            return function(arr,i,m,k,a,n);
        }

    }
}

    else if(a=='W'){

        if(j+k>=n){
        return 1;
    }

    for(int i = j+k; i>j; i--){
        if(arr[i]=='L'){
            a='L';
            return function(arr,i,m,k,a,n);
        }
    }

    for(int i = j+k; i>j; i--){
        if(arr[i]=='W'){
            a = 'W';
            return function(arr,i,m,k,a,n);
        }

    }
}

return r;


}




int main(){
    int t; cin>>t;
    while(t--){
        int n,m,k; cin>>n>>m>>k;
        char arr[n];
        string w;
        cin>>w;
        int i =0;
        for(char c:w){
            arr[i] = c;
            i++;
        }

        char a = arr[0];
        int p = function(arr,0,m,k,a,n);
        if(p==0 && a!='C'){
            cout<<"NO";
        }
        else if(p==1 && a!='C'){
            cout<<"Yes";
        }
        if (a=='C' && m<n){
            cout<<"No";
        }
        else if(a=='C' && m>=n){
            cout<<"yes";
        }
        cout<<endl;
    }
}