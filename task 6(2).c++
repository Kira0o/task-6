    #include <iostream>
    #include <string>
    #include <cctype>
    using namespace std;
   void addValue(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        arr[i] += value; 
    }
}



    int main() {
       int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    addValue(arr, size, 5);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;











}




