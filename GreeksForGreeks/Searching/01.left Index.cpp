//https://practice.geeksforgeeks.org/batch/cip-1/track/P100-Searching/problem/left-index-1587115620
// Function to find element in sorted array

int leftIndex(int N, int arr[], int X){
    
 int start = 0;
    int end = N - 1;
    int result = -1;  // Initialize result to -1 (not found)

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == X) {
            result = mid;  // Update result and continue searching on the left side
            end = mid - 1;
        } else if (arr[mid] < X) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return result;
}
