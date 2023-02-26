   #include <stdio.h>
    void swap34(int *ptr1, int *ptr2);
    void main()
    {

        int x[10];
        int i, n;

        printf("How many Elements...\n");
        scanf("%d", &n);

        printf("Enter Elements one by one\n");

        for (i = 0; i < n; i++)
        {
            printf("Array[%d]=",i);
            scanf("%d", x + i);
        }

        /*  Function call:Interchanging 3rd element by 4th */

        swap34(x + 1, x+n-1);
        printf("\nResultant Array...\n");

        for (i = 0; i < n; i++)
        {
            printf("Array[%d]= %d\n", i, x[i]);
        }

    }

    /*  Function to swap the 3rd element with the 4th element in the array */

    void swap34(int *ptr1,int *ptr2 )
    {

        int temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
