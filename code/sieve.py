import numpy as np
n=100
p = 2
primes = [True for i in range(n+1)] # All numbers are primes! At the beggining, at least!
while(p*p <= n): #Search to the root of n
    if primes[p] == True: # if the current number is still marked as a prime, it is a prime
        for multiple in range(p * 2, n+1, p): # we get all of its multiples
            primes[multiple] = False # And its multiples are not prime by definition
    p+=1

# We print all the primes!
primes_list = list()
print()
for p in range(2, n): 
        if primes[p] == True:
            primes_list.append(p) 
            print(p, end=', ')
print()

a = np.array(primes)
print(np.sum(a))
print(primes_list)


# print("El numero más grande de los primos es: ", a)
# while(True):
#     n = int(input("Number to investigate\n"))
#     if n in primes_list:
#         print("Sí!")
#     else:
#         print("No!")

