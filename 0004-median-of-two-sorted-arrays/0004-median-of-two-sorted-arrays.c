double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
 int arr3[nums1Size+nums2Size];

  for(int i=0; i<nums1Size; i++)
      arr3[i]=nums1[i];

  int j=nums1Size;
  for(int i=0; i<nums2Size; i++)
      arr3[j++]=nums2[i];
  
  
  for(int i=0; i<(nums1Size+nums2Size); i++){
      for(int j=i+1; j<(nums1Size+nums2Size); j++){ 
          if(arr3[i]>arr3[j]){
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
          }
          
      }
  }
 // printf("%d", arr3[0]);
  double median=0.0;
  int index =(nums1Size+nums2Size)/2;

  if((nums1Size+nums2Size)%2==0)
    median = (arr3[index] + arr3[index-1])/(double)2;
  else 
    median = arr3[index];
  return median;
}