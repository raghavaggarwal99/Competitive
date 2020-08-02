#include<bits/stdc++.h>
#define pb push_back
#define NMAX 1000000000

using namespace std;

typedef int64_t ll;
typedef map<ll,ll> Map;
typedef set<ll> Set;


void solve(string& s, ll& i, ll& xadd, ll& yadd, ll& xsub, ll& ysub)
{
    for(; i<s.size(); i++)
    {
        if(s[i]=='N')
            {
                xsub++;
            }
            else if(s[i]=='S')
            {
                xadd++;
            }
            else if(s[i]=='E')
            {

                yadd++;
            }
            else if(s[i]=='W')
            {
                ysub++;
            }

            else if(s[i]==')')
            {
                return;
            }


            else
            {
                ll d = s[i]-'0';

                ll x2add=0, y2add=0, x2sub=0, y2sub=0;

                i+=2;
                solve(s, i, x2add, y2add, x2sub, y2sub);

                xadd = (xadd+d*x2add)%NMAX;
                yadd = (yadd+d*y2add)%NMAX;

                xsub = (xsub+d*x2sub)%NMAX;
                ysub = (ysub+d*y2sub)%NMAX;

            }

    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll T; cin>>T;

    for(ll t=1; t<=T; t++)
    {
        string s; cin>>s;

        ll r=0, c=0;

        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='N')
            {
                --r;
                if(r<0)
                {
                    r = NMAX-1;
                }
            }
            else if(s[i]=='S')
            {
                ++r;
                if(r>=NMAX)
                {
                    r = 0;
                }
            }
            else if(s[i]=='E')
            {

                ++c;
                if(c>=NMAX)
                {
                    c = 0;
                }
            }
            else if(s[i]=='W')
            {
                --c;
                if(c<0)
                {
                    c = NMAX-1;
                }
            }

            else
            {
                ll d = s[i]-'0';

                ll xadd=0, yadd=0, xsub=0, ysub=0;

                i+=2;
                solve(s, i, xadd, yadd, xsub, ysub);

                r = (r+d*xadd)%NMAX;
                r = (r-d*xsub+d*NMAX)%NMAX;

                c = (c+d*yadd)%NMAX;
                c = (c-d*ysub+d*NMAX)%NMAX;

            }

        }


        cout<<"Case #"<<t<<": "<<c+1<<" "<<r+1<<endl;

    }

    return 0;
}








