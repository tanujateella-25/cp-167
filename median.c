#include <stdio.h>
int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
   int arr1[n1],arr2[n2],arr3[n1+n2];
for(int i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
}
for(int i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
}
  int i=0,j=0,k=0;
  while(i<n1 && j<n2){
      if(arr1[i]<arr2[j]){
      arr3[k++]=arr1[i++];}
      arr3[k++]=arr2[j++];
  }
  while(i<n1){
        arr3[k++]=arr1[i++];
  }
  while(j<n2){
      arr3[k++]=arr2[j++];
  }
int n3=n1+n2;
  if(n3%2==0){
        printf("%d",(arr3[n3/2]+arr3[n3/2-1])/2);}
    else{
        printf("%d", arr3[n3/2]);}
    return 0;
}