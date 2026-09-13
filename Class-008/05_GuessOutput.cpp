         // Problem 1
/*int main( ) {
int i ;
while ( i = 10 ) {
cout << i << endl;
i = i + 1 ;
} */
         // Output: Infinite loop and display 10

         // Problem 2
/* int main( ) {
int x = 4, y = 0, z ;
while ( x >= 0 ) {
x-- ;
y++ ;
if ( x == y )
continue ;
else
cout << x << “ “ << y << endl ;
}
} */
         /*Output: 3 1
                   1 3
                   0 4 */ 

        // Problem 3
/* int main( ) {
int x = 4, y = 0, z ;
while ( x >= 0 ) {
if ( x == y )
break ;                              // See this line 
else
cout << x << “ “ << y << endl ;
x-- ;
y++ ;
}
} */
            /* Output: 4 0
                       3 1*/ 
            
            // Problem 4 
/* int main( ) {
int t = 10;
while(t/=2){                        here t=t/2 so t=5,2,1 so three times hello displayed
cout << “Hello” << endl;
}
} */             
             // Output:  Hello
             //          Hello
                 //      Hello