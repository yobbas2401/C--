Prime numbers are not regularly spaced. For example from 2 to 3 the gap is 1. From 3 to 5 the gap is 2. Between 2 and 50 we have the following pairs of 2-gap primes: 3-5, 5-7, 11-13, 17-19, 29-31, 41-43.
Create the function find_gap that takes three positive integers as arguments (the gap, a and b) and returns the first pair of two prime numbers spaced with a prime gap of length gap between a and b (both inclusive), as an array.
Examples
find_gap(2, 3, 50) // returns [3, 5]
find_gap(2, 5, 7) // returns [5, 7]
find_gap(4, 130, 200) // returns [163, 167]
