// count how many numbers in this _3n_plus_1 series


#include<iostream>
using namespace std;
// make globale variable 
int cnt=0;
void _3n_plus_1(int n){
    cnt++;
    if(n==1) return;
    if(n%2==0) _3n_plus_1(n/2);
    else _3n_plus_1(3*n+1);
}

int main(){
    cout<<"Enter the number which end of this series you want : ";
    int n;
    cin>>n;
    _3n_plus_1(n);
    cout<<cnt;
    return 0;
}