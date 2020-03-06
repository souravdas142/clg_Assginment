

### Here is my assignment 1


### 1. Write a program to print all the prime numbers between n and m numbers.

ok... for this i've solve the problem wiht segmented sieve of eritosthenis...

time complexity for this algorithm is O(n log(log n)) 


simple sieve of eritosthenis has also time complexity of O(n log(log n)) . but it simply failed to test primality of a very]
large number of verry efficient time and it also failed to test primality of a givven range

the prime idea of simple sieve of eritosthenis is that
(with rang from 0 to n) we know that 2 is only compositeprime
so we indeed work with indexes of a very large array.

so what we do... we eliminate all indexes from m=2 where k\>m to k<= max\_range multipler of 2
so how we tell the array that "this" index is eliminated? ok for that we assign all indexes with 0 initially and assign 1
if we find multiplier of m=2
and so on... we increase the value of m by 1 of every iteration


so how long we do that??

ok for that

we know m\*j=n
if m is sqrt(n) then j always alway \<m
from that property we can tell that

m<-2 to sqrt(n)
  if(array[m]==0)
	j<-2 to i*j<=n
		array[m*j]=1;

now print the array form 
i<-2 to max\_range
	if(array[i]==0)
		print->i

## This algorithm completly fail if a range is givven for n>2 and m=k where k is any of number

### For this problem we can solve this like following :

### The problem introduce a modfied alog of simple sieve of eritosthenis that is segmented sieve of eritosthenis

The prime idea of sieve of eritosthenis is following :

if a range is givve how can we tell that the lowerrange is prime? there is two possibilites the number may be prime or composit

in simple sieve of eriosthenis we know that 2 is prime and we test primality of a number depended on 2

but we have no luxeries like that if we have a range of numbers n to m

in that case we simply test primality of numbers from 0 to sqrt(max\_range) and store all prime number upto sqrt(max\_range)
to an array...

now we can use these prime numbers in segmented sieve of eritosthenis


so now... now devide lower\_range with initPrimearray[index] (where initPrimearray is arrays of prime numbers from 0 tp sqrt(max\_range) and index<-0 to sizeof(initPrime)/sizeof(initPrime[0]) ) 

store it to a variable say store

now multiply store with initPrimearray[index] and again store in store variable i.e. store\*=initPrimearray[index]


now store represet the nearest composit number of our givven range that is multiplier of a primenumber

now again eliminate array index within our givven range

this time iterate

i<-store;i<=max\_range;i+=initPrimearray[index]
	prime[i]=1; (where prime is our acctual array of prime numbers of givven range)

now print the prime arrays
i<-lower\_range to i<=max\_range
	if(prime[i]==0)
		print->i



the time complexity of segmented sieve of eritosthenis is the same of simple sieve of eriosthenis is O(n log(log n))

though this is also not so much efficent but the best from all previous algos

we have write an efficient algos later that is miller robin primality test this is the bestest prime numbers algo...

