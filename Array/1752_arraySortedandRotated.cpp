#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef a
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;    
    int nums[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int index = 0;
    bool flag = false;

    for(int i=0;i<n-1;i++){
        if(nums[i]<=nums[i+1]){
            index++;
            flag = true;
            cout<<index;
        }
        else{
            break;
        }
    }
    cout<<index<<'\n';
    for(int i=index;i<n-1;i++){
        if(nums[i]<=nums[i+1]){
            index++;
            flag = true;
        }
        else{
            break;
        }
    }
    cout<<index<<"\n";
    cout<<flag; 	  
}