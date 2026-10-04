// Predict the Time Complexity 

// for (int i = 0; i < n; i++) {      // TC is O(n) for both as continue just skip the iteration
// for (int j = 0; j < n; j++) {      // it doesn't terminate it like break;
// continue;                         // TC is O(n^2) finally
// }
// }

// for(int i=0;i<n;i++){              // if continue execute it skips all the codes, below it 
//     if(i>4) continue;              // so TC is O(4n + (n-4)) see what happen here
//     for(int j=0;j<n;j++){         // TC is O(n) finally
//         cout<<"see the logic";
//     }
// }

// for (int i = 0; i < n; i++) {    // TC is O(5n)
// for (int j = 0; j < 5; j++) {    // TC is O(n)
// cout << i;
// }
// }