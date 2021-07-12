#include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 struct node
 {
 int info;
 struct node * next;
 };
 struct node * start = NULL;

 void add(int item)
 {
 struct node * t, * p;
 t = (struct node *)malloc( sizeof( struct node ));
 if(start == NULL)
 {
 start = t;
 start -> info = item;
 start -> next = NULL;
 return;
 }
 else
 {
 struct node * p = start;
 while(p -> next != NULL)
 {
 p = p -> next;
 }
 p -> next = t;
 p = p -> next;
 p -> info = item;
 p -> next = NULL;
 }
 }

 struct node * fractionalNodes(struct node * temp, int k)
     {

 if (k <= 0 || temp == NULL)
 return NULL;

 int len = 0;
 struct node * t;
 for(t = temp; t != NULL; t = t -> next)
                         len++;
 float fraction = (float)len/k;
 fraction = ceil(fraction);
 int i;
         t = temp;
 for(i = 1; i< fraction; i++)
         t = t -> next;
 return t;
     }

 void traverse(struct node * t)
 {
 if(t == NULL)
 {
             printf(" Linked list is empty\n");
                                     }
                                     while(t -> next != NULL)
                                     {
                         printf("%d -> ",t -> info);
                         t = t -> next;
                         }
                         printf("%d\n",t -> info);
 }

 int main()
 {
 int k;
 printf("Enter the value of k:");
 scanf("%d",&k);
 add(1);
 add(2);
 add(4);
 add(5);
 add(9);
 add(10);
 add(12);
 add(15);
 add(13);
 printf("Given Linked List: \n");
 traverse(start);
 struct node * res;
 res = fractionalNodes(start, k);
 printf("Fraction node is:");
 printf("%d", res -> info);
 return 0;
 }
#if 0
Enter the value of k:3
Given Linked List:
1 -> 2 -> 4 -> 5 -> 9 -> 10 -> 12 -> 15 -> 13
Fraction node is:4

#endif // 0
