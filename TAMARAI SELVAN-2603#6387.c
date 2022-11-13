//Name : TAMARAI SELVAN R
//Phone : 9688814221
//College : Government College of Engineering - Bargur
//Dept : Computer Science and Engineering
//Email :tamaraiselvan98@gmail.com


//------------------------solution--------------------------------------

#include<stdio.h>  

void Admindroid_printArray(int arr[]) {  
   int i = 1, arrLength = arr[0]+1; 
   for(;i< arrLength;i++) {  
      printf("%d ", arr[i]); 
   }  
   printf("\n"); 
} 

void OddEvenSeparation(int arr[])
{ 
   int size=arr[0];
   int odd[10], odd_size=0;
   int even[10], even_size=0;
   int i;
   for(i=1; i<=size; i++){
      if (arr[i]%2==0){
         even[even_size++]=arr[i];
      }
      else{
         odd[odd_size++]=arr[i];
      }
   }
   for(i=0; i<odd_size; i++){ 
      arr[i+1]=odd[i];
   }
   for(i=odd_size; i<size; i++){  
      arr[i+1]=even[i-odd_size];
   }
   Admindroid_printArray(arr);
}


void Admindroid_sort(int arr[])
{
   int size = arr[0];
   int i,j;
   for(i=1; i<size; i++){
      for(j=1; j<size; j++){
         if(arr[j]>arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   OddEvenSeparation(arr);
}

  
void Admindroid_TestCase(int tcNo, int arr[]) { 
   printf("Test Case %d:\n", tcNo); 
   printf("Input: "); 
   Admindroid_printArray(arr); 
   printf("Output: "); 
   Admindroid_sort(arr); 
   printf("\n");
} 

int main() { 
   int adminDroidArray1[] = {6, 1, 7, 3, 2, 8, 4};
   int adminDroidArray2[] = {6, 7, 2, 9, 3, 4, 8}; 
   int adminDroidArray3[] = {10,1,3,2,9,10,7,5,8,6,4}; 
   int adminDroidArray4[] = {16,13,30,10,3,9,4,16,15,1,6,12,7,14,20,17,15}; 
    Admindroid_TestCase(1, adminDroidArray1); 
    Admindroid_TestCase(2, adminDroidArray2); 
    Admindroid_TestCase(3, adminDroidArray3); 
    Admindroid_TestCase(4, adminDroidArray4); 
   return 0; 
}
