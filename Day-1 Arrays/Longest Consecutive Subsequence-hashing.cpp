#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        
        if(s.find(a[i]-1) == s.end()){
            int j = a[i];
            while(s.find(j)!=s.end()){
                j++;
            }
            ans = max(ans,j-a[i]);
        }
    }
    cout<<"Longest subsequence: "<<ans;
}
