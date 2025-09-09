    #include <iostream>
    #include <string>
    #include <cctype>
    using namespace std;
    int sumArr(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}



    int main() {
         int arr[] = {2, 4, 6, 8};
        int size = sizeof(arr) / sizeof(arr[0]);;
        cout << "Sum: " << sumArr(arr, size) << endl;
        return 0;











}




