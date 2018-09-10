#include<stdio.h>
viod main()
    {
	int ar[size],key,i,flag,choice;
	printf("enter the size of the array);
	scanf("%d",&size);
	printf("enter the element of the array");
        for(i=0;i<size;i++)
		scanf("%d",&ar[i]);
		printf("enter the key to be searched");
		scanf("%d",&key);
		printf("enter the choice to be search \n");
		printf("1.linear_search\n 2.binary_search");
		scanf("%d",&choice);
		
		switch(choice):
			{
				case1:linear_search(ar,size,key);
			           if(linear_search(ar,size,key)==true)
					printf("key is found");
				   else
					printf("key is not found");
					break;
				case2:binary_search(ar,size,key);
					if(binary_search(ar,size,key)==true)
						printf("key is found");
					else
					       printf("key is not found"); 
                                               break;
				default:printf("incorrect choice");
					break;
			
			}
    }
