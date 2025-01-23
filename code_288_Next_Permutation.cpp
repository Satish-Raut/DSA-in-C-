
//Next permutation Algorithm:
// ----------------------------


// The algorithm used in the provided code is the Next Permutation Algorithm. This algorithm is used to generate the next lexicographical permutation of a sequence of numbers. It involves the following steps:

// Find the Largest Index i: Identify the rightmost element that is smaller than the element immediately after it. This is done to determine the "pivot" point where we can increase the permutation.

// Find the Largest Index j: Find the largest index j such that arr[j] > arr[i]. This identifies the element that will be swapped with the pivot.

// Swap Elements: Swap the elements at indices i and j.

// Reverse the Sequence: Reverse the sequence of elements to the right of the pivot (arr[i+1] to the end of the array). This ensures that the next permutation is the smallest possible permutation greater than the current one.

// The algorithm efficiently generates the next permutation in 
// --->    𝑂(𝑛)

// time complexity, where 𝑛
//  is the length of the array.


