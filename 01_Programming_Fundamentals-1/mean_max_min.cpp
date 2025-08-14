#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin>>a;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    float sum = 0;

    for(int i=1; i<=a; i++){
        int b;
        cin>>b;

        sum += b;

        if(b<mini){
            mini = b;
        }

        if(b>maxi){
            maxi = b;
        }
    }

    cout<< (sum/float(a))<<endl;
    cout<<maxi<<endl;
    cout<<mini<<endl;

    return 0;
}