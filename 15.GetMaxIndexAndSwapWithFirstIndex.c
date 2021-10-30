//28.将15个整数放到一维数组中，输出该数组中的最大值它的下标，然后将它和数组中的最前面的元素对换。

void main()
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int max_index = 0,max=0;

    max = arr[0];

    for (int i = 0; i < 15; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            max_index = i;
        }
        int temp = arr[max_index];
        arr[max_index] = arr[0];
        arr[0] = temp;
    }

    printf("max_index=%d", max_index);
}
