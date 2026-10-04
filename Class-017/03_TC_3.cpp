// Predict the Time Complexity

// int count = 0;
// for (int i = 0; i < n; i++) {      // observe carefully, very easy just to confuse you
// for (int j = i; j <= i; j++) {     // TC is O(n) finally
// count++;
// }
// }

// for (int i = 0; i < n; i++) {     //i=0 then inner loop runs for n times after that i=n 
// for (int j = 1; j <= n; j++) {   // so for next iteration of 1st loop conditon fails
// i++;                             // as i = n+1 and condition is i<n so fails
// }                                // TC is O(n)
// }

// for(int i = 2; i<= n; i*=i) {    // i=2,4,16,256 .... n   so 2^(2^x) concept 
// cout << (“Devanti Devi”);        // TC is O(log(log n)) or O(log log n)
// }