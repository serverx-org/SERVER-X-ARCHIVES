*Intution*
```UNSET THE SETBIT```


*Sample Input*
```case1: 
n = 2
In binary(8-bit): n = [1 0] 
To unset the first bit(least significant bit) i.e., [1 0<-]
```
we can use ``AND(&)`` operation with its previous bit i.e (n - 1)
here n = 2, then n-1 = 2 - 1 = 1 i.e., in binary ```[0 1]```
i.e., 
```
result = n & (n - 1);
```
So for input `n=2`, output will be `[0 1]` which is equivalent to decimal number of `-3` or hexadecimal value of `FF`.