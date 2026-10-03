// Predict the time complexity (TC) of the following


    // for(int i = 1; i <= n; i++) {
    // cout << (“ Aryan”);                // Tc is O(n) as n times it runs 
    // }

// for(int i = 1; i <= n; i++) {
// cout << (“Aryan ”);                   // Tc is O(2n) or O(n+n) as two lines runs for n times
// cout<<"Anish";                        // TC is O(n) finally reason is below
// }

// for(int i = 1; i <= n; i+=2) {         // i = 1,3,5,7 .... n   so runs n/2 times
// cout << (“Rita ”);                    // Tc is O(n/2) which is O(n)
// }                                     // as O(k*n) = O(n), k is constant

// for(int i = 1; i <= 2*n; i++) {
// cout << (“Indra ”);                       // TC is O(2n) as i runs till 2n
// }                                    // so Tc is O(n) finally