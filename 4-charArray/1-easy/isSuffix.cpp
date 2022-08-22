// read two string and print YES if the two strings is Prefex and NO if not

# include<iostream>
using namespace std;
int main(){
    string first,second;
    cout<<"please Enter the two strings"<<endl;
    cin>>first>>second;
    for(int i=0;i<second.length();i++){
        if(first[first.size()-i-1]==second[second.size()-i-1]){
            continue;
        }
        cout<<"NO";
        return 0;
    }
    cout<<"YES is suffix";
    return 0;
}