

		#include<stdio.h>

		// Odd number are defined as numbers that are not exactly divisible by two.
		int isOdd(int num){

			if(num%2!=0){
				return 0;
			}else{
				return 1;
			}
		}

		//Grouping of Odd Number
		int oddArray(int *arr,int len){

			int count = 0;
			int *temp = arr;
			for(int i=0; i<len ; i++){
				if(isOdd(arr[i]) == 0 ){

					*(temp+count) = *(arr+i);
					count++;
				}
			}
			return count;
		}

		// Driver Code
		void main(){

			int len;
			printf("Enter the Length of Array : \n");
			scanf("%d",&len);

			if(len>0){
			
				int arr[len];

				printf("Enter the Elements in Array : \n");
				for(int i=0; i<len; i++){
				
					scanf("%d",&arr[i]);
				}
				
				int size = sizeof(arr)/sizeof(int);
				int ans = oddArray(arr,size);

				if(ans>0){
					printf("Printing the Output Array : \n");
					for(int i=0; i<ans; i++){
				
						printf("%d\t",arr[i]);
					}
					printf("\n");
				}else{
				
					printf("No Element Found in Array \n");
				}

			}else{
			
				printf("Enter the Valid Length of Array");
			}
		}



