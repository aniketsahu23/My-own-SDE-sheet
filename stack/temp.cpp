
#include <bits/stdc++.h>
using namespace std;
string res()
{
    int m,s,sum=0;
    cin>>m>>s;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int ans=(sum+s),re=0;
    for (int i = 1; i < ans+1; i++)
    {
        re+=i;
        if(ans==re)
        return "yes";
        else if(re>ans)
        return "no";
    }    
}
int main()
{
	int t;
    cin>>t;
    while(t--){
        cout<<res()<<endl;
    }	
	return 0;
}

