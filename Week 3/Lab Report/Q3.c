 #include<stdio.h>
int checkunique(int len){
     int arr[len], count;

     for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    
      for (int i=0;i<len;i++){ 
        count=0;

        for(int j=0; j<i+1; j++)
        {
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 count += 1;
               }
             }
        }
       if(count == 0)
        {
          printf("%d ",arr[i]);
        }
    }
        
}
 int main(){
    int len;
    printf("Enter the size of an array: ");
    scanf("%d",&len);

    printf("Enter %d numbers: \n", len);

    checkunique(len);
}