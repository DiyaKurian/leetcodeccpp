int removeDuplicates(int* arr, int num){

    if (num == 0 || num == 1)  
        return num;  
          
    int temp [num];   
      
    int i, j = 0;  
      
    for (i = 0; i < num - 1; i++)  
    {  
        if (arr [i] != arr[i + 1])  
            temp[j++] = arr[i];  
    }  
    temp[j++] = arr[ num - 1];  
  
  
    for (i = 0; i < j; i++)  
    {  
        arr[i] = temp[i];  
        }     
          
    return j; 
}