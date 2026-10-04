// Predict the Time Complexity

// for(int i = 1; i <= n; i*=2) {     // use pen and paper, and use sum of GP of n terms
// for(int j = 1; j<= i; j++) {       // TC is O(n)
// cout << (“Rita ”);
// }
// }

// for(int i = 1; i*i <= n; i*=2) {       // O(log(n^0.5)) is O(log n) only se previous eg.
// cout << (“Rita ”);                      // TC is O(log n)
// }

// for (int i = 0; i < n; i++) {       // here break only terminates it's loop not outer one
// for (int j = 0; j < n; j++) {       // so 1st loop O(n), 2nd one execute only once 
// cout << i << " ";                   // TC is O(n)
// break;
// }
// }

// for (int i = 0; i < n; i++) {      // TC is O(n) for 1st one
// for (int j = 0; j < i; j++) {      // it does not even execute as condition fails at beginning 
// if ( j == 0)                       // TC is O(n)
// break;
// }
// }