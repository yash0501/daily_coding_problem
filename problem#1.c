#include <stdio.h>

int main() {
	//code
	int n,k,i,j,t;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
	    scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	int flag=0;
	for(i=0;i<n-1;i++){
	    if(arr[i]>k){
	        continue;
	    }
	    else{
	        t=k-arr[i];
	        for(j=i+1;j<n;j++){
	            if(arr[j]==t){
	                printf("True");
	                flag=1;
	                break;
	            }
	        }
	    }
	}
	if(flag==0){
	    printf("False");
	}
	return 0;
}
