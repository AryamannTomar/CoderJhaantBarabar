#include<bits/stdc++.h>
using namespace std;

/*
Linear Searching takes O(N) time. If you have a sorted array then instead of searching for any number using a linear search approach - searching from left to right you can use a binary
search approach. 
    - Just go to the middle element of this array and chk if it is equal to target.
    - If Greater than target search to the left side vice-versa.
    - At Every Step of Binary Search It's like reducing the View by Half. n -> n/2 -> n/4 -> n/2^k=1 ==> k=Log2N

<== Built-In Library Functions For BinarySearch ==>
Binary_Search()
Lower_Bound() 
    return ptr to
    - target if only 1 occ
    - first target if multiple occ 
    - next higher target if no occ
Upper_Bound()
    return ptr to 
        - next higher target in all above conditions

Types of Problems in Binary Search ->
    - Searching in Sorted Array / Rotated Sorted Array
    - StepUp Fn/ StepDown Fn/ PeakValue Fn
    - Maximizing the Min Value
*/

bool BinarySearch(vector<int> a, int target){
    int lb=0, ub=a.size();
    while(lb<=ub){
        int mid=lb+(ub-lb)/2;
        if(a[mid]==target) return true;
        else if(a[mid]<target) lb=mid+1;
        else if(a[mid]>target) ub=mid-1;
    }  
    return false;
}