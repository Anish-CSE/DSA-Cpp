// Predict the Time Complexity

// for(int i = 1; i*i <= n; i++) {       // i*i=n is same a i=n^(0.5)
// cout << (“ Rama Shankar Bhagat ”);    // TC is O(n^0.5)
// }

// O(log n) > O(nlog n) > O(n) > O(n^2) > O(n^3) > O(2^n)   whish is faster

// for(int i = 1; i <= n; i*=2) {    // i =1,2,4,8,16 ... n   take as 2^0,2^1,2^2, ... , 2^x
// cout << (“ Ananya ”);             // so x+1 times so n=2^x  -> log n=x
// }                                //TC is O(1+ log n) so O(log n) is final

// for(int i = 1; i <= n; i+=i) {    // i+=i  is same as i*=2
// cout << (“ Anima ”);              // TC is O(log n)
// }