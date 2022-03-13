# Mathematics

## Example 1:

### Given an integral number N. The task is to find the count of digits present in this number.

for example:
```
N = 7897

No of digits 4
following are digits:
7
8
9
7
```

the normal approach taken was till the number was zero divide it by 10 and count iteration on every number.

the best case approach of O(1) is just use log to the base 10 from the maths.h and add 1 to it. and use floor to round it at the lowest roundoff.

my solution filename: countdigits.cpp
best solution: bestSolutioncountdigits.cpp

How do we arrive at the solution:
so let me assume that there will be like n digits in number num

so we can also observe that the number will lie between 10^(n-1) and 10^n.
so when we apply log base10 to all of them in the following equation
10^(n-1) <= num < 10^n
we apply the log base 10 in the above equation we get
n-1 <= log10(n) < n
and we get
n <= log10 + 1 < n + 1
