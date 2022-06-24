// O(1) - CONSTANT TIME:
int add(int x, int y){
    return x + y;
}


// O(log n) - LOGARITHMIC TIME:

int log(int n){
    while (n > 1){
        n = n/2;
    }
}

// O(n) - LINEAR TIME:

int linear(){
    int sum = 0;
    for(i = 0; i < n; ++i){
        ++sum;
    }
}

// O(n log n) - LOG-LINEAR TIME:
void Quick_Sort(int[] arr, int left, int right){
  if (left < right)
  {
    int pivot = Partition(arr, left, right);
    if (pivot > 1)
    {
      Quick_Sort(arr, left, pivot - 1);
    }
    if (pivot + 1 < right)
    {
      Quick_Sort(arr, pivot + 1, right);
    }
  }
}


// O(n²) - quadratic "Bubble sort"
void Bubble_Sort(int[] input)
{
    bool hasSwapped;
    do
    {
        hasSwapped = false;
        for (var sort = 0; sort < input.Length - 1; sort++)
        {
            if (input[sort] > input[sort + 1])
            {
                var oldValue = input[sort + 1];
                input[sort + 1] = input[sort];
                input[sort] = oldValue;
                hasSwapped = true;
            }
        }
    } while (hasSwapped);
}

// O(n²) - QUADRATIC TIME: 

for(int i=0;i<n;i++)
{
    for(int i=0;i<m;i++){
    ..
    ..
    }
}

// O(2^n) - EXPONENTIAL TIME:
int Fibonacci(int number)
{
   if (number <= 1)
      return number;

   return Fibonacci(number - 1) + Fibonacci(number - 2);
}

// O(n!) - FACTORIAL TIME:
int factorial(int n){
    for(int i = 0; i < n; i++){
        factorial(n-1);
    }
}