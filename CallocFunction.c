//ptr = (cast-type*)calloc(n, element-size);


//ptr = (float*) calloc(25, sizeof(float));
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
  
    int* ptr; 
    int n, i, sum = 0; 
  
   printf("Enter the value of N");
scanf("%d",&n);
  //  n = 5; 
    printf("Enter number of elements: %d\n", n); 
  
  
    ptr = (int*)calloc(n, sizeof(int)); 
  
  
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
     
        printf("Memory successfully allocated using calloc.\n"); 
  
        // Get the elements of the array 
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
  
        
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 
  
    return 0; 
} 

