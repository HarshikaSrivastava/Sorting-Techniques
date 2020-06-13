#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

#define SIZE 100               // array size

void main()
{
    int  a[SIZE],n;
    int choice;
    void bubblesort(int[],int);	     // finction declaration
    void selectionsort(int[],int);
    void input(int[],int);                   // input function to take array
    void output(int[],int);                 // output function to display output
    clrscr();
    printf("Enter the no elements");        // take the no of elemets of array
    scanf("%d",&n);
    input(a,n);                       // calling of input function

  while(1)                                 // while loop
  {  clrscr();
    printf("\n Your array =  ");
    output(a,n);                                // menu box
    printf("\n MENU");
    printf("\n1. Bubble sort");
    printf("\n2. Selection sort");
    printf("\n3. Merge sort");
    printf("\n4. Insertion sort");
    printf("\n5. Quick sort");
    printf("\n6. Do you want to change the array");
    printf("\n7. Exit");
    printf("\n\n  Enter Your Choice");
       scanf("%d",&choice);
							 // switch case
    switch(choice)
    {              //bubble sort
	case 1 : bubblesort(a,n);
		 output(a,n);
		 getch();
		 break;
		  // selection sort
	case 2 : selectionsort(a,n);
		 output(a,n);
		 getch();
		 break;
		 // merge sort
	case 3 :  printf("\nmerge sort");
		 getch();
		 break;
			  //insertion sort
	case 4 :printf("\ninsertion sort");
		 getch();
		 break;
	       // quick sort
	case 5 : printf("\nquick sort");
		 getch();
		 break;
	case 6 : printf("\n\n Enter the no of elements");
		 scanf("%d",&n);
		 input(a,n);
		 break;
		/// exit from the program
	case 7 : exit(1);

	default : printf("\n wrong choice. Choose again");
		  getch();

    }

  }
  getch();
}
	 // definition of input function
void input(int a[],int n)
{
 int i;
     printf("\n Enter the %d elements",n);
     for(i=0;i<n;i++)
       scanf("%d",&a[i]);

}
void output(int a[],int n)
{
   int i;

    for(i=0;i<n;i++)
      printf("%d ",a[i]);

}

    // definition of bubble sort

void bubblesort(int a[] ,int n)
{
    int pass,j,flag=1,temp;
    for(pass=1;pass<=(n-1);pass++)
    {
       //	flag=0;
	for(j=0;j<(n-pass);j++)
	{
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		       //	flag=1;

		}
		printf("\n");
		output(a,n);
	}
	printf("\npass");
	output(a,n);

    }

}

void selectionsort(int a[],int n)
{
int pass,j,temp,min;
 for(pass=1;pass<=n-1;pass++)
 {
	min=pass-1;
	for(j=pass;j<n;j++)
	{
		if(a[j]<a[min])
		{
			min=j;
		}
	}
	temp=a[min];
	a[min]=a[pass-1];
	a[pass-1]=temp;
 }

}