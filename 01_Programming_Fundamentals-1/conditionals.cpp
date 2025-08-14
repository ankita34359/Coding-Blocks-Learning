#include<iostream>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>=18){
        cout<<"You can Vote"<<endl;
    }
    else{
        cout<<"You can't Vote"<<endl;
    }
    return 0;
}