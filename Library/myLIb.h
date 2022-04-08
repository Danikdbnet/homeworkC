 //Bubble Sort
 void bubble_sort (int *arr, int size, int i)
 {
    for (int j = 0; j < i; j++)
    {
        for(int k = 0; k < size - 1 ; ++k)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp ;
            }
        }
    }
 }

//Towers of Hanoi
void hanoi(int n, char from, char to, char help)
{
    if (n == 1)
    {
        printf("presun disk 1 z %c na %c\n", from, to);
        return;
    }
    hanoi(n-1, from, help, to);
    printf("presun disk %d z %c na %c\n", n, from, to);
    hanoi(n-1, help, to, from);
}
