#include <iostream>

using namespace std;

// Naive Approach : TC : O(n^2)
void getMajorityElement_1(int arr[], int n, int majorityCount) {
    int i;
    for(i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count >= majorityCount) {
            cout << "Majority Element : " << arr[i];
            break;
        }
    }
}

// Boyre Moore Algorithm
int getMajorityElement_2(int arr[], int n, int majorityCount) {
    /*
    * Maintain a count, which is incremented whenever we see an instance of
    * our array element is equal to majority and decrement whenever we
    * see anything else
    */
   int majority = 0;
   int count = 0;
   for(int i = 0; i < n; i++) {
    if(count == 0) {
        majority = arr[i];
    }
    if(majority == arr[i]) {
        count++;
    }
    else {
        count--;
    }
   }
   count = 0;
   for(int i = 0; i < n; i++) {
        if(arr[i] == majority) {
            count++;
        }
   }
   if(count >= majorityCount) {
        return majority;
   }
   else {
        return -1;
   }
}

int main() {
    int arr[] = {2,1,3,4,3,3,3,2,5,3,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int majorityCount = n/2;
    int e = getMajorityElement_2(arr, n, majorityCount);
    cout << "Majority Element is : " << e;
}