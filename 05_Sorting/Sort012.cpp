void sort012(int *arr, int n){
    int i=0;
    int nextZero=0;
    int nextTwo=n-1;
    while (i<=nextTwo){
        if (arr[i]==0){ 
            // You can replace the next three lines with CPP's inbuilt swap function. swap(arr[i], arr[nextZero]) will swap the values of arr[i] and arr[nextZero]
            int temp=arr[i];
            arr[i]=arr[nextZero];
            arr[nextZero]=temp;
            i++;
            nextZero++;
        }
        else if(arr[i]==2){
            int temp=arr[i];
            arr[i]=arr[nextTwo];
            arr[nextTwo]=temp;
            nextTwo--;
        }
        else i++;
    }
}