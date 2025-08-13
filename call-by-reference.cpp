// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 10B

#include <iostream>
#include <cstdio>
using namespace std ; 

void swap_by_reference(int *x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    
}
int main() {    
    // Swap by reference 
    int u = 20 , v = 40 ;
    printf("\n\nSwap by reference : ");
    printf("\nNumbers before swaping : %d , %d " , u, v);
    swap_by_reference(&u,&v);
    printf("\nNumbers after swaping : %d , %d " , u , v);
    return 0;
}
/*
OUTPUT -->
Swap by reference : 
Numbers before swaping : 20 , 40 
Numbers after swaping : 40 , 20 


*/
