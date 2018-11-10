#n = int(input("Number to which primes will be precalculated"))
n=100
p = 2
primes = [True for i in range(n+1)] # All numbers are primes! At the beggining, at least!
while(p*p < n): #Search to the root of n
    if primes[p]: # if the current number is still marked as a prime, it is a prime
        for multiple in range(p * 2, n+1, p): # we get all of its multiples
            primes[multiple] = False # And its multiples are not prime by definition
    p+=1

# We print all the primes!
print()
for p in range(2, n): 
        if primes[p]: 
            print(p, end=', ')
print()
