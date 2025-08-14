#include<iostream>
using namespace std;

int main(){

    int a;
    cin>>a;

    int sum = 0;

    for(int i=1; i<=a; i++){
        int b;
        cin>>b;
        sum += b;
    }

    int average = sum/a;

    cout<<average<<endl;

    return 0;
}