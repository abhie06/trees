// // #include<stdio.h>
// // void readArray(int *arr, int *n){
// //   printf("Enter the length:\n");
// //   scanf("%d",n);
// //   for(int i=0;i<*n;i++){
// //     printf("arr[%d]= ",i);
// //     scanf("%d",&arr[i]);
// //   }
// //   for(int i=0;i<*n;i++){
// //     printf("%d",arr[i]);
// //   }
// // }
// // int findSmallest(int *arr, int *n){
// //   int temp = arr[0];
// //   for(int i=0;i<*n;i++){
// //     if(arr[i]<temp){
// //       temp = arr[i];
// //     }
// //   }
// //   return temp;
// // }
// // int findlargest(int *arr, int *n){
// //   int temp = arr[0];
// //   for(int i=0;i<*n;i++){
// //     if(arr[i]>temp){
// //       temp = arr[i];
// //     }
// //   }
// //   return temp;
// // }
// // void interchange(int *arr, int *n){
// //   int pos1, pos2;
// //   pos1 = 0;
// //   pos2 = 0;
// //   int small = findSmallest(arr, n);
// //   for(int i=0;i<*n;i++){
// //     if(small == arr[i]){
// //       pos1 = i;
// //     }
// //   }
// //   int large = findlargest(arr, n);
// //   for(int i=0;i<*n;i++){
// //     if(large == arr[i]){
// //       pos2 = i;
// //     }
// //   }
// //   int temp;
// //   temp = arr[pos1];
// //   arr[pos1] = arr[pos2];
// //   arr[pos2] = temp;
// //   for(int i=0;i<*n;i++){
// //     printf("%d",arr[i])  
// //   }
// // }
// // int main(){
// //   int arr[100], n;
// //   readArray(arr, &n);
// //   int small = findSmallest(arr, &n);
// //   printf("\n%d\n",small);
// //   interchange(arr, &n);
  
// // }

// #include<stdio.h>
// void readMatrix(int arr1[100][100], int *n, int *m){
//   printf("Enter the length and width of the matrix:\n");
//   scanf("%d %d",n, m);
//   for(int i=0;i<*n;i++){
//     for(int j=0;j<*m;j++){
//       printf("arr[%d][%d]= ", i,j);
//       scanf("%d",&arr1[i][j]);
//     }
//   }
//   for(int i=0;i<*n;i++){
//     printf("\n");
//     for(int j=0;j<*m;j++){
//       printf("%d ",arr1[i][j]);
//     }
//   }
// }
// void sumOfMatrix(int arr1[100][100], int arr2[100][100], int *n,int *m){
//   int sum[100][100];
//   for(int i=0;i<*n;i++){
//     for(int j=0;j<*m;j++){
//       arr1[i][j] = arr1[i][j] + arr2[i][j];
//       printf("%d",arr1[i][j]);
//     }
//   }
  
// }
// int main(){
//   int arr1[100][100], n,m, arr2[100][100];
//   printf("\nThe first matrix is:\n");
//   readMatrix(arr1, &n,&m);
//   printf("\nThe second matrix is:\n");
//   readMatrix(arr1, &n,&m);
//   sumOfMatrix(arr1, arr2, &n, &m);
  
// }