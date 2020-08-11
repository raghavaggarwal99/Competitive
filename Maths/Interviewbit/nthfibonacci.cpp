void multiply(long long  int F[2][2], long long int M[2][2]); 
void power(long long  int F[2][2], long long  int n); 
long long int v=pow(10,9)+7;

int fib(int n) 
{ 
     long long int F[2][2] = {{1, 1}, {1, 0}}; 
    
    if (n == 0) 
        return 0; 
        
    power(F, n - 1); 
  
    return F[0][0]; 
} 
  
// Optimized version of power() in method 4 
void power(long long int F[2][2], long long int n) 
{ 
    if(n == 0 || n == 1) 
       return; 
       
    long long int M[2][2] = {{1, 1}, {1, 0}}; 
      
    power(F, n / 2); 
    multiply(F, F); 
      
    if (n % 2 != 0) 
        multiply(F, M); 
} 
  
void multiply( long long int F[2][2],  long long int M[2][2]) 
{ 
     long long int x = (F[0][0] * M[0][0] + F[0][1] * M[1][0])%v; 
     long long int y = (F[0][0] * M[0][1] + F[0][1] * M[1][1])%v; 
     long long int z = (F[1][0] * M[0][0] + F[1][1] * M[1][0])%v; 
     long long int w = (F[1][0] * M[0][1] + F[1][1] * M[1][1])%v; 
      
    F[0][0] = x%v; 
    F[0][1] = y%v; 
    F[1][0] = z%v; 
    F[1][1] = w%v; 
} 

int Solution::solve(int A) {

    
    return (fib(A)%v); 
    
    
}

