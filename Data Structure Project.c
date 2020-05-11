#include<stdio.h>
#include<conio.h>
#define MAXSIZE 50
	struct Node1
	{	
    int Info;
    struct node1 *Ptr;
	}*fRONT,*rEAR,*tEMP,*fRONT1;
	struct Node
	{   
	int info;
	struct Node *ptr;
	}*TOP,*TOP1,*TEMP;
	int cOUNT = 0;
	int num,e,f,num1;
	int COUNT = 0;
	int coUNT = 0;
	int x[20],size,i;
	int first,last;
	int pivot,j,temp;
	struct node1
{
    int data;
    struct node1 *link;
};
	struct node
		{
		int data;
		struct node*next;
		};
		struct node1 *head = NULL, *X, *Y, *Z;
	struct node * start=NULL;
	int queue_array[MAXSIZE];
	int rear=-1;
	int front=-1;
    int stk[MAXSIZE]; 
	int top=-1;
	int choice;
	int option=1;
void matric(void);
void linklist(void);
void queue(void);
void lineararray(void);
void linearandbinarysearch(void);
void sorting(void);
void stack(void);
void circularlinklist(void);
void stackusinglinklist(void);
void queueusinglinklist(void);
int main(void)
{ 	
	printf("...............**************...............\n");
	printf("................************...............\n");
	printf(".................**********...............\n");
	printf("..................********...............\n");
	printf("Design & created by Hafiz Muhammad Tahir Nisar\n");
	printf("Roll No:14-ELE-72, Registration No:2014-UET-IEFR/FD-Elect-70\n");
	printf("Year:2nd, Semester:4th\n");
	printf("Subject:Data Structures\n");
	printf("Department:Electrical Engineering\n"); 
	printf("NFC Institute of Engineering and Fertilizer Research Faisalabad\n");
	printf("Affiliated with UET Lahore Pakistan.\n");
	printf("...............***************...............\n");
	printf("................*************...............\n");
	printf(".................***********...............\n");
	printf("..................*********...............\n");

	while(option)
	{
	    printf("Welcome to Data Structures operations\n");
		printf("...............***************...............\n");
		printf("   1....>lineararray\n");
		printf("   2....>Matrices Manipulation operations\n");
		printf("   3....>Linear and Binary Search\n");
		printf("   4....>Sorting and its techniques\n");
		printf("   5....>Stack operations Push,Pop and Display using linear array\n");
		printf("   6....>Queue operations Enqueue,Dequeue and Transverse using linear array\n");
		printf("   7....>Linkedlist operations\n");
		printf("   8....>Circular Linkedlist Operations\n");
		printf("   9....>Stack operations using Linkedlist\n");
		printf("  10....>Queue operations using Linkedlist\n");
		printf("...............***************...............\n");
		printf("Please enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:lineararray();
			break;
			case 2:matric();
			break;
			case 3:linearandbinarysearch();
			break;
			case 4:sorting();
			break;
			case 5:stack();
			break;
			case 6:queue();
			break;
			case 7:linklist();
			break;
			case 8:circularlinklist();
			break;
			case 9:stackusinglinklist();
			break;
			case 10:queueusinglinklist();
			break;
			default:printf("You enter wrong choice\n");
			break;
		}
		printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);	
		}
}
void lineararray()
{
	void mergearray(void);
	void transversal(void);
	void search(void);
	void insertion(void);
	void deletion(void);
	printf("Linear array operation\n");
	while(option)
	{
	printf("Welcome to Linear array Operations\n");
	printf("...............***************...............\n");
	printf("1.....>transversal\n");
	printf("2.....>search\n");
	printf("3.....>insertion\n");
	printf("4.....>deletion\n");
	printf("5.....>Merging Two Arrays\n");
	printf("...............***************...............\n");
	printf("Please enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:transversal();
	break;
	case 2:search();
	break;
	case 3:insertion();
	break;
	case 4:deletion();
	break;
	case 5:mergearray();
	break;
	default:printf("You enter wrong choice\n");
	break;	
	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);	
}
void mergearray()
{
	int i,j,n1,n2,n3;
	int a[10],b[10],c[20];
	printf("Enter the number of elements of first array\n");
	scanf("%d",&n1);
	printf("Enter %d elements\n",n1);
	for(i=0;i<n1;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("Enter the number of elements of second array\n");
	scanf("%d",&n2);
	printf("Enter %d elements\n",n2);
	for(i=0;i<n2;i++)
	{
	scanf("%d",&b[i]);
	}
	n3=n1+n2;
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(j=i;j<n3;j++)
	{
		c[j]=b[j-i];
	}
	printf("The merged array is\n");
	for(j=0;j<n3;j++)
		printf("%d\n",c[j]);
}
void transversal()
{
	int x[100];//={4,3,7,-1,7,2,0,4,2,13},i;
	int i,n;
	printf("Please enter the  number of elements of array\n");
	scanf("%d",&n);
	printf("Please enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		printf("x[%d]=",i);
		scanf("%d",&x[i]);	
	}	
}
void search()
{
	int array[10],Search,c,n;
	printf("Enter the number of elements of array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
	printf("Enter the number to search\n");
	scanf("%d",&Search);
	for(c=0;c<n;c++)
	{
		if(array[c]==Search)
	{
		printf("%d is present at location %d\n",Search,c+1);
		break;
	}
	}
	if(c==n)
	{
		printf("%d is not present in array\n",Search);
	}
}
void insertion()
{
	int array[10],position,c,n,value;
	printf("Enter the number of elements of array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
   printf("Enter the loacation where you wish to insert\n");
   scanf("%d",&position);
   printf("Enter the value to insert\n");
   scanf("%d",&value);
   for(c=n-1;c>=position-1;c--)
   {
   	array[c+1]=array[c];
   }
	array[position-1]=value;
	printf("Resultant array is\n");
	for(c=0;c<=n;c++)
	{
		printf("%d\n",array[c]);
	}	
}
void deletion()
{
    int array[10],Position,c,n;
	printf("Enter the number of elements of array\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(c=0;c<n;c++)
	{
		scanf("%d",&array[c]);
	}
   printf("Enter the loacation where you wish to delete\n");
   scanf("%d",&Position);
   if(Position>=n+1)
   {
   	printf("deletion is not possible\n");
   }
   else
    {
   	for(c=Position-1;c<n-1;c++)
   	{
   	array[c]=array[c+1];	
    }
    printf("Resultant array is \n");
    for(c=0;c<n-1;c++)
    {
    	printf("%d\n",array[c]);
    }
    }	
}
}
void linearandbinarysearch()
{
	void LinearSearch(void);
	void BinarySearch(void);
	printf("Linear search and Binary search operation\n");
	while(option)
	{ 
		printf("Welcome to Linear search and Binary search operations\n");
		printf("...............***************...............\n");
		printf("1.....>Linear Search\n");
		printf("2.....>Binary Search\n");
		printf("...............***************...............\n");
		printf("Please enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:LinearSearch();
			break;
			case 2:BinarySearch();
			break;
			default:("You enter wrong choice\n");
			break;
		}
		printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);
	}
void LinearSearch()
{
	int array[10],Search,c,n;
	printf("Enter the number of elements in array\n");
	scanf("%d",&n);
	printf("Enter %d integers\n",n);
	for(c=0;c<n;c++)
	scanf("%d",&array[c]);	
	printf("Enter the number to search\n");
	scanf("%d",&Search);
	for(c=0;c<n;c++)
	{
		if(array[c]==Search)
		{
	printf("%d is present at location %d\n",Search,c+1);
	break;
		}
	}
	if(c==n)	
	printf("%d is not present in array\n",Search);
	return 0;
}
void BinarySearch()
{
	int C,first,last,middle,n,sear,Array[10];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for(C=0;C<n;C++)
	{
	scanf("%d",&Array[C]);	
	}
	printf("Enter the value to find\n");
	scanf("%d",&sear);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(Array[middle]<sear)
		first=middle+1;
		else
		if(Array[middle]==sear)
		{
		printf("%d is found at location %d\n",sear,middle+1);
		break;
		}
		else	
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("Not found!%d is not present in the list\n",sear);
	return 0;
}
}
void sorting()
{
	void bubblesort();
	void insertionsort();
	void selectionsort();
	void quicksort();
	printf("Sorting and its technique\n");
	while(option)
	{
		printf("Welcome to Sorting techniques Operations\n");
		printf("...............***************...............\n");
		printf("1.....>Bubble Sort\n");
		printf("2.....>Insertion Sort\n");
		printf("3.....>Selection Sort\n");
		printf("4.....>Quick Sort\n");
		printf("...............***************...............\n");
		printf("Please enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:bubblesort();
		break;
		case 2:insertionsort();
		break;
		case 3:selectionsort();
		break;
		case 4:quicksort();
		break;
		default:printf("You enter wrong choice\n");
		break;	
		}
		printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);
	}
void bubblesort()
{
	int i,j,k,n,temp;
	int a[10];
	printf("How many number of elements you want to insert\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-1;j++)
	{
	if(a[j]>a[j+1])
	{
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
	}		
	}		
	}		
	for(k=0;k<n;k++)
	printf("%d\n",a[k]);	
	}
void insertionsort()
{
	int i,j,k,n,temp;
	int a[10];
	printf("How many number of elements you want to insert\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j]&&(j>=0))
		{
		a[j+1]=a[j];
		j=j-1;
		}
		a[j+1]=temp;
	}
	for(k=0;k<n;k++)
	printf("%d\n",a[k]);
}
void selectionsort()
{
	int i,j,k,n,temp;
	int a[10];
	printf("How many number of elements you want to insert\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(a[i]<a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;	
		}
	}
	}
	for(k=0;k<n;k++)
	printf("%d\n",a[k]);
}
void quicksort()
{
	printf("Please enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter %d elements\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&x[i]);
	quicksort(x,0,size-1);
	printf("Sorted elements\n");
	for(i=0;i<size;i++)
		printf("%d",&x[i]);
	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;
		while(i<j)
		{
			while(x[i]<=x[pivot]&&i<last)
			i++;
			while(x[j]>x[pivot])
			j--;
			if(i<j)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}	
		}
		temp=x[pivot];
		x[pivot]=x[j];
		x[j]=temp;
		quicksort(x,first,j-1);
		quicksort(x,j+1,last);	
}
}
}
void stack()
{
	void push(void);
	void pop(void);
	void display(void);
	printf("Stack operations Push,Pop and Display\n");
	while(option)
	{
	printf("Welcome to Stack operations\n");
	printf("...............***************...............\n");
	printf("1.....>Push\n");
	printf("2.....>Pop\n");
	printf("3.....>Display\n");
	printf("...............***************...............\n");	
	printf("Please enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:push();
		break;
		case 2:pop();
		break;
		case 3:display();
		break;
		default:printf("You enter wrong choice\n");
		break;
	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);	
	}
   void push()
   {
   	int num;
	if(top==(MAXSIZE-1))
	{
		printf("Stack is full\n");
		return;
	}
	else
	{
	printf("Enter the element to be pushed\n");
	scanf("%d",&num);
	top=top+1;
	stk[top]=num;			
	}
	return;	
}
void pop()
{
	int num;
	if(top==-1)
	{
		printf("Stack is empty\n");
		return;
	}
	else
	{
	num=stk[top];
	printf("Poped element is =%d\n",stk[top]);
	top=top-1;
	}
	return;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("The status of the stack is\n");
		{
		for(i=top;i>=0;i--)
		{
		printf("%d\n",stk[i]);
		}	
		}
		printf("\n");
}	
}
}
void queue()
{
	void insert(void);
    void dequeue(void);
    void Display(void); 
    printf("Queue operations\n");
	while(option)
	{
		printf("Welcome to Queue operations\n");
		printf("...............***************...............\n");
		printf("1.....>Enqueue\n");
		printf("2......Dequeue\n");
		printf("3.....>DISPLAY\n");
		printf("...............***************...............\n");
		printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1:insert();
	 break;
	 case 2:dequeue();
	 break;
	 case 3:Display();
	 break;
	 default:printf("You enter wrong choice\n");
	 break;
 	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
	scanf("%d",&option);
	}
	void insert()
	{
			int add_item;
	if(rear==(MAXSIZE-1))
	printf("Queue is overflow\n");
	else
	{
		if(front==-1)
		front=0;
		printf("Insert the element in the queue:\n");
		scanf("%d",&add_item);
		rear=rear+1;
		queue_array[rear]=add_item;	
	}
}
void dequeue()
{
if
(front==-1||front>rear)
	printf("Queue is underflow\n");
else	
	printf("Element deleted from queue is:%d\n",queue_array[front]);
	front=front+1;	
}
void Display()
{
	int i;
	if(front==-1)
	printf("Queue is empty\n");
	else
	{
		printf("Queue is:\n");
		for(i=front;i<=rear;i++)
		printf("%d\n",queue_array[i]);
}
}
}
void linklist()
{
void insert_at_beg(void);
void insert_at_end(void);
void insert_at_middle(void);
//void deleteNode(void);
void DISPLAY(void);
printf("Linkedlist operations\n");
	while(option)
	{
		printf("Welcome to Linkedlist operations\n");
		printf("...............***************...............\n");
		printf("1.....>Insert Node at the beginning\n");
		printf("2......Insert Node at the end\n");
		printf("3.....>Insert Node at the middle\n");
		printf("4.....>Display\n");
		printf("...............***************...............\n");
		printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1:insert_at_beg();
	 break;
	 case 2:insert_at_end();
	 break;
	 case 3:insert_at_middle();
	 break;
	// case 4:deleteNode();
	 //break;
	 case 4:DISPLAY();
	 break;
	 default:printf("You enter wrong choice\n");
	 break;
 	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
	scanf("%d",&option);
	}
	void insert_at_beg()
	{
	struct node*new_node,*current;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	printf("Failed to allocate memory\n");
	printf("Enter data\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{
		new_node->next=start;
		start=new_node;
	}	
}
void insert_at_end()
{
    struct node*new_node,*current,*temp;
	new_node=(struct node*)malloc(sizeof(struct node));
	if(new_node==NULL)
	printf("Failed to allocate memory\n");
	printf("Enter data\n");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;		
}
}	
void insert_at_middle()
{
	int pos,i;
	struct node *new_node,*current,*temp,*temp1;
	new_node=(struct node *)malloc(sizeof(struct node));
	printf("enter the data:\n");
	scanf("%d",&new_node->data); 
	new_node->next=NULL;
	printf("Enter the position\n");
	scanf("%d",&pos);
	if(start==NULL)
	{
		start=new_node;
		current=new_node;
	}
	else
	{
		temp=start;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		temp1=temp->next;
		temp->next=new_node;
		new_node->next=temp1;
	}	
}
//void deleteNode()
//{
//	struct node *head;
//	struct node *n;
//	if(head==n)
//	{
//		if(head->next==NULL)
//		{
//			printf("There is only one node.The list can't be made empty");
//		}
		
//		head->data=head->next->data;
//		n=head->next;
//		head->next=head->next->next;
//		free(n);
//		return;
//	}
//	struct node*prev=head;
//	while(prev->next!=NULL&&prev->next!=n)
//	prev=prev->next;
//	if(prev->next==NULL)
//	{
//		printf("The given node is not present\n");
//	}
	//prev->next=prev->next->next;
//	free(n);
//	return;
//}
void DISPLAY()
{ 
	struct node*new_node;
	printf("The linklist is:");
	new_node=start;
	while(new_node!=NULL)
	{
		printf("%d....>",new_node->data);
		new_node=new_node->next;
	}
	printf("NULL\n");
}
}
void matric()
{
void add(void);
void subtract(void);
void Multiply(void);
void determinant(void);
void inverse(void);
printf("Matrices Manipulation operations\n");
	while(option)
	{
		printf("Welcome to Matrices Manipulation operations\n");
		printf("...............***************...............\n");
		printf("1.....>Addition of two matrices\n");
		printf("2.....>Deletion of two matrices\n");
		printf("3.....>Multiplication of two matrices\n");
		printf("4.....>Determinant of a matrice\n");
		printf("5.....>Inverse of a matrice\n");
		printf("...............***************...............\n");
		printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	 case 1:add();
	 break;
	 case 2:subtract();
	 break;
	 case 3:Multiply();
	 break;
	 case 4:determinant();
	 break;
	 case 5:inverse();
	 break;
	 default:printf("You enter wrong choice\n");
	 break;
 	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
	scanf("%d",&option);
	}
void add()
{
	int matrix1[10][10], matrix2[10][10], sum[10][10], i, j, m,n,p,q;
    printf("Enter the order of first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix:\n");
    scanf("%d%d",&p,&q);
    if(m!=p && n!=q){
        printf("Order of matrix did not matched!!");
    }
    printf("Enter first matrix: \n");
    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);
    }
    printf("Enter second matrix: \n");
    for(i = 0 ; i < p; i++){
        for(j = 0; j < q; j++)
            scanf("%d", &matrix2[i][j]);
    }
    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    printf("The sum of the matrix is :\n");
    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++){
        	
            printf("%d", sum[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
void subtract()
{
    int matrix1[10][10], matrix2[10][10], subtraction[10][10], i, j, m,n,p,q;
    printf("Enter the order of first matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix: ");
    scanf("%d%d",&p,&q);
    if(m!=p && n!=q)
		{
        printf("Order of matrix did not matched!!");
    }
    printf("Enter first matrix: \n");
    for(i = 0 ; i < m; i++)
		{
        for(j = 0; j < n; j++)
            scanf("%d", &matrix1[i][j]);
    }
    printf("Enter second matrix: \n");
    for(i = 0 ; i < p; i++){
        for(j = 0; j < q; j++)
            scanf("%d", &matrix2[i][j]);
    }
    for(i = 0 ; i < m; i++){
        for(j = 0; j < n; j++)
            subtraction[i][j] = matrix1[i][j] - matrix2[i][j];
    }
    printf("The subtraction  of the matrix is :\n");
    for(i = 0 ; i < m; i++)
		{
        for(j = 0; j < n; j++)
			{  	
            printf("%d",subtraction[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}
void Multiply()
{
int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of first matrix\n");
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]); 
  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
  if (n != p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
    printf("Enter the elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) 
		{
      for (d = 0; d < q; d++) 
	  	{
        for (k = 0; k < p; k++) 
			{
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
  printf("Product of entered matrices:-\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
  }
}
void determinant()
{
	float  matrix[10][10], ratio, det;
    int i, j, k, n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    /* Conversion of matrix to upper triangular */
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j>i){
                ratio = matrix[j][i]/matrix[i][i];
                for(k = 0; k < n; k++){
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }
    det = 1; //storage for determinant
    for(i = 0; i < n; i++)
        det *= matrix[i][i];
    printf("The determinant of matrix is: %.2f\n\n", det);
}
void inverse()
{
	float matrix[10][10], ratio,a;
    int i, j, k, n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    printf("Enter the matrix: \n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
            if(i==(j-n))
                matrix[i][j] = 1.0;
            else
                matrix[i][j] = 0.0;
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i!=j){
                ratio = matrix[j][i]/matrix[i][i];
                for(k = 0; k < 2*n; k++){
                    matrix[j][k] -= ratio * matrix[i][k];
                }
            }
        }
    }
    for(i = 0; i < n; i++){
        a = matrix[i][i];
        for(j = 0; j < 2*n; j++){
            matrix[i][j] /= a;
        }
    }
    printf("The inverse matrix is: \n");
    for(i = 0; i < n; i++){
        for(j = n; j < 2*n; j++){
            printf("%.2f", matrix[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return;
}
}
void circularlinklist()
{
void create();
void ins_at_beg();
void ins_at_pos();
void del_at_beg();
//void del_at_pos();
void traverse();
void SEARCH();
void sort();
void update();
//void rev_traverse();
printf("Circular Linkedlist Operations\n");
	while(option)
	{
	printf("Welcome to Circular Linkedlist operations\n");
	printf("...............***************...............\n");
	printf("1.....>create\n");
	printf("2.....>insert at beginning\n");
	printf("3.....>insert at position\n");
	printf("4.....>delete at beginning\n");
//	printf("5.....>delete at position\n");
	printf("5.....>transverse\n");
	printf("6.....>searching\n");
	printf("7.....>sorintg\n");
	printf("8.....>update\n");
//	printf("10....>reverse transverse\n");
	printf("...............***************...............\n");
	printf("Please enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:create();
	break;
	case 2:ins_at_beg();
	break;
	case 3:ins_at_pos();
	break;
	case 4:del_at_beg();
	break;
	//case 5:del_at_pos();
	//break;
	case 6:traverse();
	break;
	case 7:SEARCH();
	break;
	case 8:sort();
	break;
	case 9: update();
	break;
//	case 10:rev_traverse();
//	break;
	default:printf("You enter wrong choice\n");
	break;	
	}
	printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);
	}
void create()
{
    int c;
 
    X = (struct node1*)malloc(sizeof(struct node1));
    printf("\n Enter the data:");
    scanf("%d", &X->data);
    X->link = X;
    head = X;
    printf("\n If you wish to continue press 1 otherwise 0:");
    scanf("%d", &c);
    while (c != 0)
    {
        Y = (struct node1*)malloc(sizeof(struct node1));
        printf("\n Enter the data:");
        scanf("%d", &Y->data);
        X->link = Y;
        Y->link = head;
        X = Y;
        printf("\n If you wish to continue press 1 otherwise 0:");
        scanf("%d", &c); 
    }
}
 
/*Function to insert an element at the begining of the list*/
 
void ins_at_beg()
{
    X = head;
    Y = (struct node1*)malloc(sizeof(struct node1));
    printf("\n Enter the data:");
    scanf("%d", &Y->data);
    while (X->link != head)
    {
        X = X->link;
    }
    X->link = Y;
    Y->link = head;
    head = Y;
}
 
/*Function to insert an element at any position the list*/
 
void ins_at_pos()
{
    struct node1 *ptr;
    int c = 1, pos, count = 1;
 
    Y = (struct node1*)malloc(sizeof(struct node1));
    if (head == NULL)
    {
        printf("cannot enter an element at this place");
    }
    printf("\n Enter the data:");
    scanf("%d", &Y->data);
    printf("\n Enter the position to be inserted:");
    scanf("%d", &pos);
    X = head;
    ptr = head;
    while (ptr->link != head)
    {
        count++;
        ptr = ptr->link;
    }
    count++;
    if (pos > count)
    {
        printf("OUT OF BOUND");
        return;
    }
    while (c < pos)
    {
        Z = X;
        X = X->link;
        c++;
    }
    Y->link = X;
    Z->link = Y;
}
 
/*Function to delete an element at any begining of the list*/
 
void del_at_beg()
{
    if (head == NULL) 
        printf("\n List is empty");
    else
    {
        X = head;
        Y = head;
        while (X->link !=  head)
        {
            X = X->link;
        }
        head = Y->link;
        X->link = head;
        free(Y);
    }
}
 
/*Function to delete an element at any position the list*/
 
//void del_at_pos()
//{
  //  if (head == NULL)
    //    printf("\n List is empty");
   // else
    //{
      //  int c = 1, pos;
        //printf("\n Enter the position to be deleted:");
        //scanf("%d", &pos);
        //X = head;
        //while (c < pos)
        //{
          //  Y = X;
           // X = X->link;
            //c++;
        //}
        //Y->link = X->link;
        //free(X);
    //}
//}
 
/*Function to display the elements in the list*/
 
void traverse()
{
    if (head == NULL)
        printf("\n List is empty\n");
    else
    {
        X = head;
        while (X->link !=  head)
        { 
            printf("%d->",X->data);
            X = X->link;
        }
        printf("%d", X->data);
        printf("\n");
    }
}
 
/*Function to search an element in the list*/
 
void SEARCH()
{
    int search_val, count = 0, flag = 0;
    printf("\nenter the element to search\n");
    scanf("%d", &search_val);
    if (head == NULL)
        printf("List is empty nothing to search\n");
    else
    {
        X = head;
        while (X->link !=  head)
        {
            if (X->data == search_val)
            {
                printf("the element is found at index %d\n", count);
                flag = 1;
                break;
            }
            count++;
            X = X->link;
        }
       // if (X->data == search_val)
        //{
          //  printf("element found at postion %d", count);
        //}
        if (flag == 0)
        {
            printf("element not found\n");
        }
 
    }
}
 
/*Function to sort the list in ascending order*/
 
void sort()
{
    struct node1 *ptr, *nxt;
    int temp;
 
    if (head == NULL)
    {
        printf("empty linkedlist");
    }
    else
    {
        ptr = head;
        while (ptr->link !=  head)
        {
            nxt = ptr->link;
            while (nxt !=  head)
            {
                if (nxt !=  head)
                {
                    if (ptr->data > nxt->data)
                    {
                        temp = ptr->data;
                        ptr->data = nxt->data;
                        nxt->data = temp;
                    }
                }
                else
                {
                    break;
                }
                nxt = nxt->link;
            }
            ptr = ptr->link;
        }
    }
}
 
/*Function to update an element at any position the list*/
void update()
{
    struct node1 *ptr;
    int search_val;
    int replace_val;
    int flag = 0;
 
    if (head == NULL)
    {
        printf("\n empty list");
    }
    else
    {
        printf("enter the value to be edited\n");
        scanf("%d", &search_val);
        fflush(stdin);
        printf("enter the value to be replace\n");
        scanf("%d", &replace_val);
        ptr = head;
        while (ptr->link !=  head)
        {
            if (ptr->data == search_val)
            {
                ptr->data = replace_val;
                flag = 1;
                break;
            }
            ptr = ptr->link;
        }
        if (ptr->data == search_val)
        {
            ptr->data = replace_val;
            flag = 1;
        }
        if (flag == 1)
        {
            printf("\nUPdate sucessful");
        }
        else
        {
            printf("\n update not successful");
        }
    }
}
}
 
/*Function to display the elements of the list in reverse order*/
 
//void rev_traverse(struct node1 *p)
//{
  //  int i = 0;
 
 //   if (head == NULL)
   // {
     //   printf("empty linked list");
    //}
    //else
    //{
     //   if (p->link !=  head)
       // {
         //   i = p->data;
           // rev_traverse(p->link);
        //    printf(" %d", i);
        //}
        //if (p->link == head)
        //{
          //  printf(" %d", p->data);
     //   }
  //  }
//}
//}
void stackusinglinklist()
{
	int  tOPELEMENT();
	void pUSH(int data1);
	void pOP();
	void eMPTY();
	void dISPLAY();
	void dESTROY();
	void sTACK_count();
	void cREATE();
	printf("Stack operations using Linkedlist\n");
	printf("Welcome to Stack operations using Linkedlsit\n");
	printf("...............***************...............\n");
	printf("1.....> Push\n");
	printf("2.....> Pop\n");
	printf("3.....>Top\n");
	printf("4.....>Empty\n");   
	printf("5.....>Exit\n");
	printf("6.....>Dipslay\n");
	printf("7.....>Stack Count\n");  
	printf("8.....>Destroy stack\n");   
	cREATE();
	printf("...............***************...............\n");
	while(option)
	{
	printf("Please enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:printf("Enter data:\n");        
	scanf("%d",&num);   
	pUSH(num);   
	break;       
	case 2:        
	pOP();           
	break;   
	case 3:       
	if
	(TOP == NULL)               
	printf("No elements in stack\n");
	else           
	{               
	e = tOPELEMENT();               
	printf
	("\n Top element : %d\n",e);           
	}           
	break;    
	case 4:eMPTY();           
	break;   
	case 5:exit(0);
	break;      
	case 6:dISPLAY();       
	break;  
	case 7:sTACK_count();        
	break;       
	case 8:dESTROY();     
	break;   
	default:printf(" Wrong choice, Please enter correct choice\n");       
	break;       	
	}
		printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);	   
}
void cREATE()
{
    
TOP = NULL;
}
 
 
/* Count stack elements */
void sTACK_count()
{
    
printf("No. of elements in stack : %d\n", cOUNT);
}
 
 
/* Push data into stack */
void pUSH(int data2)
{   
if
(TOP == NULL)   
{       
TOP =(struct Node*)malloc(sizeof(struct Node));  
TOP->ptr = NULL;
TOP->info = data2;
}   
else   
{       
TEMP =(struct Node*)malloc(sizeof(struct Node)); 
TEMP->ptr = TOP;
TEMP->info = data2;
TOP = TEMP;
}   
cOUNT++;
}
/* Display stack elements */
void dISPLAY()
{   
TOP1 = TOP;   
if(TOP1 == NULL)  
{       
printf("Stack is empty\n");
return;
}   
while
(TOP1 != NULL)   
{
printf("%d\n",TOP1->info);
printf("\n");
TOP1 = TOP1->ptr;

}
}
/* Pop Operation on stack */
void pOP()
{    
TOP1 = TOP;   
if(TOP1 == NULL)  
{       
printf(" Error : Trying to pop from empty stack\n");
return;   
}   
else       
TOP1 = TOP1->ptr;
printf("Popped value : %d\n ",TOP->info);
free(TOP);
TOP = TOP1;
cOUNT--;
}
/* Return top element */
int tOPELEMENT()
{    
return(TOP->info);
}
/* Check if stack is empty or not */
void eMPTY()
{   
if(TOP == NULL)       
printf("Stack is empty\n");
else    
printf("Stack is not empty with %d elements\n",cOUNT);
}
/* Destroy entire stack */
void dESTROY()
{   
TOP1 = TOP;   
while
(TOP1 != NULL)
{       
TOP1 = TOP->ptr;       
free(TOP);    
TOP = TOP1;    
TOP1 = TOP1->ptr;
}   
free(TOP1);
TOP = NULL;   
printf("All stack elements destroyed\n");
cOUNT = 0;
}
}
void queueusinglinklist()
{
	int fRONTELEMENT();
	void enQ(int dATA);
	void deQ();
	void emPTY();
	void diSPLAY();
	void crEATE();
	void quEUESIZE();
	printf("Welcome to Queue operations using Linkedlist\n");
	printf("...............***************...............\n");
	printf("Queue operations using Linkedlist\n");
 	printf(" 1.....>Enque\n");
    printf(" 2.....>Deque\n");
    printf(" 3.....>Front element\n");
    printf(" 4.....>Empty\n");
    printf(" 5.....>Exit\n");
    printf(" 6.....>Display\n");
    printf(" 7.....>Queue size\n");
    crEATE();
	printf("...............***************...............\n");
    while (option)
    {
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter data:\n");
            scanf("%d", &num1);
            enQ(num1);
            break;
        case 2:
            deQ();
            break;
        case 3:
            f = fRONTELEMENT();
            if (f != 0)
                printf("Front element : %d\n", f);
            else
                printf("No front element in Queue as queue is empty\n");
            break;
        case 4:
            emPTY();
            break;
        case 5:
            exit(0);
        case 6:
            diSPLAY();
            break;
        case 7:
            quEUESIZE();
            break;
        default:
            printf("Wrong choice, Please enter correct choice\n");
            break;
            }
		printf("Do you want to continue(type 0 or 1 1:Yes,0:No)?\n");
		scanf("%d",&option);	   
}
void crEATE()
{
    fRONT = rEAR = NULL;
}
 
/* Returns queue size */
void quEUESIZE()
{
    printf("\n Queue size : %d\n", coUNT);
}
 
/* Enqueing the queue */
void enQ(int dATA)
{
    if (rEAR == NULL)
    {
        rEAR = (struct Node1 *)malloc(1*sizeof(struct Node1));
        rEAR->Ptr = NULL;
        rEAR->Info = dATA;
        fRONT = rEAR;
    }
    else
    {
        tEMP=(struct Node1*)malloc(1*sizeof(struct Node1));
        rEAR->Ptr = tEMP;
        tEMP->Info = dATA;
        tEMP->Ptr = NULL;
 
        rEAR = tEMP;
    }
    coUNT++;
}
 
/* Displaying the queue elements */
void diSPLAY()
{
    fRONT1 = fRONT;
    if ((fRONT1 == NULL) && (rEAR == NULL))
    {
        printf("Queue is empty\n");
        return;
    }
    while (fRONT1 != rEAR)
    {
        printf("%d\n", fRONT1->Info);
        fRONT1 = fRONT1->Ptr;
    }
    if (fRONT1 == rEAR)
        printf("%d\n", fRONT1->Info);
}
 
/* Dequeing the queue */
void deQ()
{
    fRONT1 = fRONT;
 
    if (fRONT1 == NULL)
    {
        printf("Error: Trying to display elements from empty queue\n");
        return;
    }
    else
        if (fRONT1->Ptr != NULL)
        {
            fRONT1 = fRONT1->Ptr;
            printf(" Dequed value : %d\n", fRONT->Info);
            free(fRONT);
            fRONT = fRONT1;
        }
        else
        {
            printf("Dequed value : %d\n", fRONT->Info);
            free(fRONT);
            fRONT = NULL;
            rEAR = NULL;
        }
        coUNT--;
}
/* Returns the front element of queue */
int fRONTELEMENT()
{
    if ((fRONT != NULL) && (rEAR != NULL))
        return(fRONT->Info);
    else
        return 0;
}
 
/* Display if queue is empty or not */
void emPTY()
{
     if ((fRONT == NULL) && (rEAR == NULL))
        printf("Queue is empty\n");
    else
       printf("Queue is not empty\n");
}	
}
