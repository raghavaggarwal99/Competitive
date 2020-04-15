#include<unordered_map>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int T, x[3], y[3], d[3];
 
int check()
{
    for (int i = 0; i < 3; i++)
    {
        d[i] = (x[i] - x[(i + 1) % 3])*(x[i] - x[(i + 1) % 3]) + (y[i] - y[(i + 1) % 3])*(y[i] - y[(i + 1) % 3]);
    }
    sort(d, d + 3);
    return d[0] && d[0] + d[1] == d[2];
}
 
int main()
{
    while (scanf("%d%d", &x[0], &y[0]) != EOF)
    {
        for (int i = 1; i < 3; i++) scanf("%d%d", &x[i], &y[i]);
        if (check()) { printf("RIGHT\n"); continue; }
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            x[i]--;    flag += check();
            x[i] += 2; flag += check();
            x[i]--;    
            y[i]--;    flag += check();
            y[i] += 2; flag += check();
            y[i]--;
        }
        printf("%s\n", flag ? "ALMOST" : "NEITHER");
    }
    return 0;
}
