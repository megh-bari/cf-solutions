#include<bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin>>N>>M;

    int total_sqaure = N*M;
    int max_dominos = floor(total_sqaure/2);

    cout<<max_dominos<<endl;
    
    return 0;
}