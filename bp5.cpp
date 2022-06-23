#include<bits/stdc++.h>

using namespace std;

int main()

{

    int T;

    cin>>T;

    while(T--)

    {

        int g,p;

        cin>>g>>p;

        int n;

        cin>>n;

        vector<pair<bool,bool>>temp;

        for(int i=0;i<n;i++)

        {

            int x,y;

            cin>>x>>y;

            temp.push_back({x,y});

        }

        int sum1=0,sum2=0;

        for(int i=0;i<n;i++)

        {

        if(temp[i].first)

sum1++;

         if(temp[i].second)

sum2++;

        }

        int q,w;

        q=max(sum1,sum2);

        w=min(sum1,sum2);

        int k,l;

        k=max(g,p);

        l=min(g,p);

        int z=k*w+l*q;

        cout<<z<<endl;


 

    }

}
