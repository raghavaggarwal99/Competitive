from collections import Counter 

if __name__ == "__main__":
    n = int(input()) 
    a = list(map(int,input().strip().split()))[:n] 
  
    ans=[]
    c= Counter(a) 
    a=sorted(a)
    if len(a)==1:
        ans.append(a[0])
    else:
        ans.append(a[0])
        c[a[0]]-=1
        index=0
        for i in range(1,n):
            if a[i]!=ans[index]:
                ans.append(a[i])
                c[a[i]]-=1
                index=index+1
                
    max_value=ans[len(ans)-1]
    i=n-1
    while(i>=0):
        if a[i]!=max_value and c[a[i]]>=1:
            ans.append(a[i])
            c[a[i]]=0
        i=i-1
        
    print(len(ans))
    for i in ans:
         print(i, end=" ")

