 //Bubble Sort
 void bubble_sort (int *arr , int size , int i)
 {
    for (int j=0 ; j<i ; j++)
    {
        for(int k = 0 ; k < size-1 ; ++k)
        {
            if(arr[k] > arr[k+1])
            {
                int temp = arr[k] ;
                arr[k] = arr[k+1] ;
                arr[k+1] = temp ;
            }
        }
    }
 }

