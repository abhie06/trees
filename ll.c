// #include<stdio.h>
// #include<stdlib.h>
// struct node {
// int val;
// struct node *next;
// };
// struct node *insert(struct node *head){
//   int val;
//   printf("Enter the val:\n");
//   scanf("%d",&val);
//   struct node *ptr, *newNode;
//   while(val!=-1){
//   newNode = (struct node *)malloc(sizeof(struct node));
//   newNode->val = val;
//   newNode->next = NULL;
//   if(head==NULL){
//     newNode->next = head;
//     head = newNode;
//   }
//   else{
//     ptr = head;
//     while(ptr->next!=NULL){
//       ptr = ptr->next;
//     }
//     ptr->next = newNode;
//     newNode->next = NULL;
//   }
//     printf("Enter the val:\n");
//     scanf("%d",&val);
// }
//   return head;
// }
// void display(struct node *head){
//   struct node *ptr;
//   ptr = head;
//   while(ptr!=NULL){
//     printf("%d-->",ptr->val);
//     ptr = ptr->next;
//   }
// }
// struct node *deleteBeg(struct node *head){
//   struct node *ptr;
//   ptr = head;
//   head = head->next;
//   free(ptr);
//   return head;
// }
// struct node *deleteEnd(struct node *head){
//   struct node *ptr, *pptr;
//   pptr = NULL;
//   ptr = head;
//   while(ptr->next!=NULL){
//     pptr = ptr;
//     ptr = ptr->next;
//   }
//   pptr->next = NULL;
//   free(ptr);
//   return head;
// }
// struct node *deleteBef(struct node *head, int val){
//   struct node *ptr, *pptr;
//   pptr = NULL;
//   ptr = head;
//   while(ptr->val!=val){
//     pptr = ptr;
//     ptr = ptr->next;
//   }
//   pptr->next = ptr->next;
//   free(ptr);
//   return head;
// }
// struct node* removeNthFromEnd(struct node* head, int n) {
//   //transverse and get length of linked list
//   struct node *ptr1, *pptr, *ptr;
//   int counter = 0;
//   int track;
//   if(head==NULL){
//     return NULL;
//   }
//   ptr1 = head;
//   while(ptr1!=NULL){
//     counter++;
//     ptr1 = ptr1->next;
//   }
//   if (counter == 1 && n == 1) {
//       free(head);
//       return NULL;
//   }
//   if (counter == n) {
//       struct node* newHead = head->next;
//       free(head);
//       return newHead;
//   }
//   pptr = NULL;
//   ptr = head;
//   track = 0;
//   while(track!=(counter-n)){
//     pptr = ptr;
//     ptr = ptr->next;
//     track++;
//   }
//   pptr->next = ptr->next;
//   free(ptr);
//   return head;
// }
// struct node *circularLL(struct node *head){
//   struct node *ptr, *newNode;
//   int val;
//   printf("Enter the number:\n");
//   scanf("%d",&val);
//   while(val!=-1){
//   newNode = (struct node *)malloc(sizeof(struct node));
//   newNode->val = val;
//   if(head==NULL){
//     newNode->next = newNode;
//     head = newNode;
//   }
//     else{
//       ptr = head;
//       while(ptr->next!=head){
//         ptr = ptr->next;
//       }
//       ptr->next = newNode;
//       newNode->next = head;
//     }
//     printf("Enter the number:\n");
//     scanf("%d",&val);
//   }
//   return head;
// }
// struct node* rotateRight(struct node* head) {
//   struct node *ptr1,*ptr;
//   int counter;
//   counter = 1;
//   ptr1 = head;
//   while(ptr1->next!=head){
//     counter++;
//     ptr1 = ptr1->next;
//   }
//   printf("%d",counter);
//   return head;
// }
// int main(){
//   struct node *head = NULL;
//   struct node *ccHead = NULL;
//   ccHead = insert(ccHead);
//   // head = insert(head);
//   display(ccHead);
//   // printf("\n1.\n");
  
//   // head = deleteEnd(head);
//   // display(head);
//   // printf("\n2.\n");
//   // head = deleteBef(head, 4);
//   // display(head);
//   // head = removeNthFromEnd(head, 2);
//   // printf("\n");
//   // display(head);
//   ccHead = rotateRight(ccHead);
//   display(ccHead);
// }