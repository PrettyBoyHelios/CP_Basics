# Divisors & Prime Numbers

Universidad Panamericana Campus Bonaterra  
November 2018  
Instructor: Luis E. Correa Morán  

## Motivation

Prime numbers are widely used in the computer science industry, some jey areas are crypto, databases, security, file compression decompression, advanced math functions.

If you have used a password in any website, primes were involved. Any cryptocurrency trading? Full of primes.  

## Divisors

### Definition

![Divisor Definition](https://latex.codecogs.com/png.latex?%5Cdpi%7B100%7D%20%5Clarge%20%5Ctext%7Bgiven%20that%20%7D%20%5Cbold%7Bm%2C%20n%2C%20k%7D%20%5Cin%20%5Cmathbb%7BI%7D%5C%5C%20%5C%5C%20%5Ctext%7Bit%20is%20said%20that%20%7D%20%5Cbold%7Bm%7D%20%5Ctext%7B%20is%20a%20divisor%20of%20%7D%20%5Cbold%7Bn%7D%5C%5C%20%5C%5C%20%5Ctext%7Bif%20there%20is%20a%20factor%20%7D%20%5Cbold%7Bk%7D%20%5Ctext%7B%20that%20satisfies%7D%5C%5C%20%5C%5C%20%5Cbold%7Bmk%20%3D%20n%7D%5C%5C%20%5C%5C%20%5Ctext%7BIt%20is%20said%20that%20%7D%5C%5C%20m%20%7C%20n)

In other words...  
> If ***m***, ***n*** and ***k*** are **integers**, we say that m divides n if there is a ***k*** that satisfies ***mk = n***  

#### Questions (Yes, this early!)

> Does ***m | 0*** hold true for every ***m***?  
> Can ***k*** be negative?

### Generalizations

* In ***mk = 0*** if ***k=0*** the condition is satisfied.  
* ***k*** can be negative.
* There are [rules](https://en.wikipedia.org/wiki/Divisibility_rule) that help to determine if a number is a divisor for another.  

**Trivial Divisors:** Every number ***n*** has at least four divisors {***1, -1, n, -n***}, which are known as trivial.

**Non-Trivial Divisor:** Every divisor that is not a trivial divisor.  

This creates a first binary division in the realm of the *integer domain*, **primes** and **composite** numbers.

![Primes vs Composites](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f0/Primes-vs-composites.svg/468px-Primes-vs-composites.svg.png)

### Modulo (Modulus) Operator

It returns the remaider of an [Euclidean Division](https://en.wikipedia.org/wiki/Euclidean_division).

![Modulus](https://wikimedia.org/api/rest_v1/media/math/render/svg/26e400cfa04a88df0482f7e69b4e9304dabede4a)

> The absolute value of the remainder of the division will always be less than the absolute value of **n**.

It is described with the **%** symbol in most programming languages.

* C++  

```cpp
int a = 5 % 2;
```

* Python

```Python
a = 10 % 3
```

* Matlab

```Matlab
b = mod(23,5)
```

[This program](is_divisor.cpp) helps us determine if a number is a divisor of another.  

### MCD

Maximum Common Divisor. It is the largest number ***n*** that can divide the numbers ***a*** and ***b***.  

### Euclides Algorithm

![Euclides](images/euc.png)

## Prime Numbers

> A Prime Number can be divided exactly only by 1 or itself. And it must be a whole number greater than 1.

The first prime numbers up to a 100, take note of this image!

![Prime Numbers](https://itknowledgeexchange.techtarget.com/overheard/files/2018/01/primenumbers.jpg)

### Prime Distribution

![Prime Distribution](https://upload.wikimedia.org/wikipedia/commons/thumb/6/6e/Prime_number_theorem_absolute_error.svg/300px-Prime_number_theorem_absolute_error.svg.png)

![Prime Distributions](https://mikelove.files.wordpress.com/2008/06/primes.png)

### Primes in Nature

![Cicada](https://i.ytimg.com/vi/EWr8fzUz-Yw/maxresdefault.jpg)

Prime numbers are fun, but... How can we say if a number is prime or not?

### Eratosthenes Sieve

A method for precalculating all the primes up to a number ***n***, by eliminating multiples of a number on each iteration.  

```Pseudo
 Input: an integer n > 1.
 
 Let A be an array of Boolean values, indexed by integers 2 to n,
 initially all set to true.
 
 for i = 2, 3, 4, ..., not exceeding √n:
   if A[i] is true:
     for j = i2, i2+i, i2+2i, i2+3i, ..., not exceeding n:
       A[j] := false.
 
 Output: all i such that A[i] is true.
```

***Question!***  
> Can you think of any drawback to this approach?  

### Prime Factorization

> Every number ***n*** can be described as a product of its prime factors. ***p1 * p2 * p3 ... * pn = n***  

# Nth Prime Number


The prime number theorem is equivalent to the statement that the  ***nth*** prime number satisfies,

![Nth Prime](images/nthprime.png)



## Sources
