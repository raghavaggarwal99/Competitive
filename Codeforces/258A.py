def remove_char(str, n):
      first_part = str[:n] 
      last_part = str[n+1:]
      return first_part + last_part


if __name__ == "__main__":
    r= input()
    # print(r)
    a=str(r)  
    index=0
    check=0
    for i in a:
        if i=='0':
            check=1
            break;
        else:
            index=index+1
    if(check==1):
        print(remove_char(a,index))
    else:
        print(remove_char(a,0 ))

