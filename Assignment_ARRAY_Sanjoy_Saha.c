 
void insert(int arr[], int *n)
{
    int pos, val;
    printf("Enter position to insert element \n");
    scanf("%d", &pos);

    printf("Enter value to insert \n");
    scanf("%d", &val);
    for (int i = *n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];
    arr[pos - 1] = val;
    printf("New array \n");
    for (int i = 0; i <= *n; i++)
        printf("%d", arr[i]);
    *n = *n + 1;
}

void delete (int arr[], int *n)
{
    int pos;
    printf("Enter position to delete element \n");
    scanf("%d", &pos);

    for (int i = pos - 1; i < *n - 1; i++)
        arr[i] = arr[i + 1];
    printf("New array is \n");
    for (int i = 0; i <= *n - 1; i++)
        printf("%d", arr[i]);
    *n = *n - 1;
}

void search_array(int arr[], int n)
{
    int flag = 0, a;
    printf("Enter the element to be searched \n");
    scanf("%d", &a);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\n Number is present in array \n");
    else
        printf("\n Number is not present in array \n");
}

void sort_array(int arr[], int n)
{
    int temp;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void delete_duplicate(int arr[], int *n)
{
    int temp[100];
    int a = 0, flag = 0;
    for (int i = 0; i < *n; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (arr[i] == temp[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            temp[a] = arr[i];
            a++;
        }
        flag = 0;
    }
    *n = a;
    printf("\nAfter duplicate removal\n");
    for (int i = 0; i < *n; i++)
    {
        arr[i] = temp[i];
        printf("%d ", arr[i]);
    }
}

void element_count(int n)
{
    printf("\n no. of elemnts = %d", n);
}

void frequency(int arr[], int n)
{
    int a, c = 0;
    printf("\n Enter elements whose frequency is to be calculated \n");
    scanf("%d", &a);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
            c++;
    }
    printf("\n The frequency is - %d", a, c);
}

void display(int arr[], int n)
{
    printf("\n The array is - \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int n1, ch;
    int array[100];
    printf("\n Enter no. of terms of array \n");
    scanf("%d", &n1);
    printf("\n Enter %d element one by one ", n1);
    for (int i = 0; i < n1; i++)
        scanf("%d", &array[i]);
    while (1)
    {
        printf("\n Enter 1 for insertion operation \n");
        printf("\n Enter 2 for delete operation \n");
        printf("\n Enter 3 for search operation \n");
        printf("\n Enter 4 for sort operation \n");
        printf("\n Enter 5 for delete duplicate operation \n");
        printf("\n Enter 6 for count element in array \n");
        printf("\n Enter 7 for counting frequency \n");
        printf("\n Enter 8 for display array operation \n");
        printf("\n Enter 0 for exit \n");
        scanf("%d", &ch);
        if (ch == 0)
            break;
        switch (ch)
        {
        case 1:
            insert(array, &n1);
            break;
        case 2:
            delete (array, &n1);
            break;
        case 3:
            search_array(array, n1);
            break;
        case 4:
            sort_array(array, n1);
            break;
        case 5:
            delete_duplicate(array, &n1);
            break;
        case 6:
            element_count(n1);
            break;
        case 7:
            frequency(array, n1);
            break;
        case 8:
            display(array, n1);
            break;
        default:
            printf("\n Wrong choice");
        }
    }
    return 0;
}
