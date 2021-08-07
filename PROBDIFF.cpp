#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        vector<int> v;
        for(int i=0;i<4;i++){
            int v1;
            cin>>v1;
            v.push_back(v1);
        }
        set<int> s;
        for(int i=0;i<4;i++) s.insert(v[i]);
        int k=s.size();
        if(k==4)cout<<2;
        if(k==3)cout<<2;
        if(k==2){
            sort(v.begin(),v.end());
            int z=v[0],cnt=0;
            for(int i=0;i<4;i++){
                if(z==v[i])cnt++;
            }
            if(cnt==2)cout<<2;
            else cout<<1;
        }
        if(k==1)cout<<0;

        cout<<"\n";
    }



    return 0;
}
