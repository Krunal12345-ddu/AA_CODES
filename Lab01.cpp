//Randomized quicksort

#include <bits/stdc++.h>
using namespace std;

int no_of_comparisons = 0;

int partition(int a[],int p,int r){
	int x = a[r];
	int i = p-1;
	int j;
    
	for(j=p;j<=(r-1);j++){
    	no_of_comparisons++;
    	if(a[j]<=x){
        	i++;
        	swap(a[i],a[j]);
       	 
    	}
	}
    
	swap(a[i+1],a[r]);
	return i+1;
}


int random(int p,int r){
	srand(time(0));
	return ((rand() % (r - p + 1)) + p);
}


int randomized_partition(int a[],int p,int r){
	int i;
    
	i = random(p,r);
    
	swap(a[i],a[r]);
	return partition(a,p,r);
}

void randomized_quicksort(int a[],int p,int r){
	if(p<r){
    	int q;
   	 
    	q = randomized_partition(a,p,r);
    	randomized_quicksort(a,p,q-1);
    	randomized_quicksort(a,q+1,r);
	}
    
}




int main()
{
    
int arr[1000];

   for(int i=0;i<1000;i++){
   	arr[i]=i+1;
   }
   
   randomized_quicksort(arr,0,1000);
   
   for(int i=0;i<1000;i++){
   	cout<<arr[i]<<" ";
   }
   
   cout<<endl<<no_of_comparisons;
	return 0;
}
