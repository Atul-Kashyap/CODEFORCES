# CODEFORCES
The Codeforces platform is typically used when preparing for competitive programming contests and it offers the following features:

    Short (2-hours) contests, called "Codeforces Rounds", held about once a week
    
    Educational contests (2-2.5 hours, with 24 hours hacking period),held 2-3 times per month;
    
    Challenge/hack other contestants' solutions;
    
    Solve problems from previous contests for training purposes;
    
    "Polygon" feature for creating and testing problems;
    
    Social networking through internal public blogs.
    
# Number Theory 

[1475A Odd Divisor](https://codeforces.com/contest/1475/problem/A) 

Concept :
If the number x has an odd divisor, then it has an odd prime divisor. To understand this fact, we can consider what happens when multiplying even and odd numbers:

    even * even = even
    even * odd = even
    odd ∗ even = even
    odd ∗ odd = odd
    
There is only one even prime number — 2. So, if a number has no odd divisors, then it must be a power of two. To check this fact, for example, you can divide n by 2 as long as it is divisible. If at the end we got 1, then n — the power of two.

      n & (n-1) = 0
f the number is a power of two, then it contains only one unit in the binary notation. Then (n−1) contains units in all positions except the one in which the unit in n is located. So their bitwise "AND" does not contain units.


# Linear Equation Solving 

[1475B - New Year's Number](https://codeforces.com/contest/1475/problem/B)

Concept : 

    => 2020 * x + 2021 * y = n
    => x = (n - y) / 2020 -  y
    
    => y = count2021 = n % 2020;
    => x = count2020 = (n - count2020) / 2020 - count2021
    





[OFFICIAL WEBSITE ](https://codeforces.com)
