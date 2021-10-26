
/* Программа для сортировки массива с помощью Introsort. */
    #include<bits/stdc++.h>
    using namespace std;
    // Утилита для обмена значениями, указанными
    // два указателя
    void swapValue(int *a, int *b)
    {
        int *temp = a;
        a = b;
        b = temp;
        return;
    }
    /* Функция для сортировки массива с использованием вставки sort */
    void InsertionSort(int arr[], int *begin, int *end)
    {
        // Получить левый и правый индекс подмассива
        // быть отсортированным
        int left = begin - arr;
        int right = end - arr;
        for (int i = left+1; i <= right; i++)
        {
            int key = arr[i];
            int j = i-1;
            /* Переместить элементы arr [0..i-1], которые
            больше, чем ключ, на одну позицию впереди их текущей позиции */
            while (j >= left && arr[j] > key)
            {
                arr[j+1] = arr[j];
                j = j-1;
            }
            arr[j+1] = key;
        }
        return;
    }
    // Функция для разделения массива и возврата
    // точка разбиения
    int* Partition(int arr[], int low, int high)
    {
        int pivot = arr[high];    // пивот
        int i = (low - 1);  // Индекс меньшего элемента
        for (int j = low; j <= high- 1; j++)
        {
            // Если текущий элемент меньше или равно pivot
            if (arr[j] <= pivot)
            {
                // увеличиваем индекс меньшего элемента
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (arr + i + 1);
    }
    // Функция, которая находит середину
    // значений, указанные указателями a, b, c
    // и возвращаем этот указатель
    int *MedianOfThree(int * a, int * b, int * c)
    {
        if (*a < *b && *b < *c)
            return (b);
        if (*a < *c && *c <= *b)
            return (c);
        if (*b <= *a && *a < *c)
            return (a);
        if (*b < *c && *c <= *a)
            return (c);
        if (*c <= *a && *a < *b)
            return (a);
        if (*c <= *b && *b <= *a)
            return (b);
    }
    // Утилита для выполнения интросортировки
    void IntrosortUtil(int arr[], int * begin,
                       int * end, int depthLimit)
    {
        // Подсчитать количество элементов
        int size = end - begin;
        // Если размер раздела невелик, делайте вставку сортировки
        if (size < 16)
        {
            InsertionSort(arr, begin, end);
            return;
        }
        // Если глубина равна нулю, используйте heapsort
        if (depthLimit == 0)
        {
            make_heap(begin, end+1);
            sort_heap(begin, end+1);
            return;
        }
        // Иначе используем концепцию медианы трех
        // найти хорошую точку разворота
        int * pivot = MedianOfThree(begin, begin+size/2, end);
        // Меняем значения, указанные двумя указателями
        swapValue(pivot, end);
        // Выполнить быструю сортировку
        int * partitionPoint = Partition(arr, begin-arr, end-arr);
        IntrosortUtil(arr, begin, partitionPoint-1, depthLimit - 1);
        IntrosortUtil(arr, partitionPoint + 1, end, depthLimit - 1);
        return;
    }
    /* Внедрение интросорта */
    void Introsort(int arr[], int *begin, int *end)
    {
        int depthLimit = 2 * log(end-begin);
        // Выполнить рекурсивный интросорт
        IntrosortUtil(arr, begin, end, depthLimit);
        return;
    }
    // Вспомогательная функция не печатает массив размером n
    void printArray(int arr[], int n)
    {
        for (int i=0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    // Драйвер программы для тестирования Introsort
    int main()
    {
        int arr[] = {3, 1, 23, -9, 233, 23, -313, 32, -9};
        int n = sizeof(arr) / sizeof(arr[0]);
        // Передаем массив, указатель на первый элемент и
        // указатель на последний элемент
        Introsort(arr, arr, arr+n-1);
        printArray(arr, n);
        return(0);
    }
