/**
 * @file array.h
 * @brief Array operations and educational array algorithms.
 *
 * Part of the C Learning & DSA Toolkit.
 */

#ifndef ARRAY_H
#define ARRAY_H

#include <stdbool.h>

/**
 * @brief Prints the elements of an integer array to stdout.
 * @param arr Array to print.
 * @param size Number of elements.
 */
void array_print(const int arr[], int size);

/**
 * @brief Finds the maximum element in an array.
 * @param arr Array of integers.
 * @param size Number of elements (must be > 0).
 * @return Maximum value, or 0 if size <= 0.
 */
int array_max(const int arr[], int size);

/**
 * @brief Finds the minimum element in an array.
 * @param arr Array of integers.
 * @param size Number of elements (must be > 0).
 * @return Minimum value, or 0 if size <= 0.
 */
int array_min(const int arr[], int size);

/**
 * @brief Calculates the sum of all elements in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Sum of elements.
 */
long long array_sum(const int arr[], int size);

/**
 * @brief Calculates the average of array elements.
 * @param arr Array of integers.
 * @param size Number of elements (must be > 0).
 * @return Floating-point average, or 0.0 if size <= 0.
 */
double array_average(const int arr[], int size);

/**
 * @brief Reverses an array in-place.
 * @param arr Array to reverse.
 * @param size Number of elements.
 */
void array_reverse(int arr[], int size);

/**
 * @brief Copies elements from source array to destination array.
 * @param src Source array.
 * @param dest Destination array (must be pre-allocated).
 * @param size Number of elements to copy.
 */
void array_copy(const int src[], int dest[], int size);

/**
 * @brief Removes duplicate values in-place from an array.
 * Note: Keeps the first occurrence of each value.
 * @param arr Array to process.
 * @param size Original number of elements.
 * @return New size of the array after duplicates are removed.
 */
int array_remove_duplicates(int arr[], int size);

/**
 * @brief Counts how many times a target value appears in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param target Value to count.
 * @return Count of occurrences.
 */
int array_count_occurrences(const int arr[], int size, int target);

/**
 * @brief Rotates an array to the left by k positions.
 * Example: [1, 2, 3, 4, 5] rotated left by 2 becomes [3, 4, 5, 1, 2].
 * @param arr Array to rotate.
 * @param size Number of elements.
 * @param k Number of positions to rotate.
 */
void array_rotate_left(int arr[], int size, int k);

/**
 * @brief Merges two already sorted arrays into a new sorted array.
 * @param arr1 First sorted array.
 * @param size1 Size of first array.
 * @param arr2 Second sorted array.
 * @param size2 Size of second array.
 * @param result Pre-allocated array of at least (size1 + size2) elements.
 */
void array_merge_sorted(const int arr1[], int size1,
                        const int arr2[], int size2,
                        int result[]);

/**
 * @brief Checks if an array is sorted in non-decreasing (ascending) order.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return true if sorted, false otherwise.
 */
bool array_is_sorted(const int arr[], int size);

/**
 * @brief Finds the second largest distinct element in an array.
 * @param arr Array of integers.
 * @param size Number of elements (must have at least 2 distinct values).
 * @param result Pointer to store the second largest element if found.
 * @return true if second largest exists, false otherwise.
 */
bool array_second_largest(const int arr[], int size, int *result);

/**
 * @brief Finds two elements in an array that add up to a specific target sum.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param target Target sum.
 * @param index1 Pointer to store index of first element.
 * @param index2 Pointer to store index of second element.
 * @return true if a pair exists, false otherwise.
 */
bool array_two_sum(const int arr[], int size, int target, int *index1, int *index2);

/**
 * @brief Finds the first index of a target element in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param target Value to search for.
 * @return Index of first occurrence, or -1 if not found.
 */
int array_find_index(const int arr[], int size, int target);

/**
 * @brief Checks if a target value exists within an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param target Value to search for.
 * @return true if target is in the array, false otherwise.
 */
bool array_contains(const int arr[], int size, int target);

/**
 * @brief Counts the total number of even integers in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Count of even numbers.
 */
int array_count_evens(const int arr[], int size);

/**
 * @brief Counts the total number of odd integers in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Count of odd numbers.
 */
int array_count_odds(const int arr[], int size);

/**
 * @brief Counts the number of positive integers (> 0) in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Count of positive numbers.
 */
int array_count_positive(const int arr[], int size);

/**
 * @brief Counts the number of negative integers (< 0) in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Count of negative numbers.
 */
int array_count_negative(const int arr[], int size);

/**
 * @brief Counts the occurrences of zero in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Count of zeros.
 */
int array_count_zeros(const int arr[], int size);

/**
 * @brief Calculates the product of all elements in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Product of all elements, or 0 if size <= 0.
 */
long long array_product(const int arr[], int size);

/**
 * @brief Finds the index of the maximum element in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Index of maximum element, or -1 if size <= 0.
 */
int array_max_index(const int arr[], int size);

/**
 * @brief Finds the index of the minimum element in an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Index of minimum element, or -1 if size <= 0.
 */
int array_min_index(const int arr[], int size);

/**
 * @brief Calculates the statistical range (max - min) of an array.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return Difference between max and min, or 0 if size <= 0.
 */
int array_range(const int arr[], int size);

/**
 * @brief Checks if two arrays contain identical elements in the same order.
 * @param arr1 First array.
 * @param size1 Size of first array.
 * @param arr2 Second array.
 * @param size2 Size of second array.
 * @return true if both arrays are equal, false otherwise.
 */
bool array_equals(const int arr1[], int size1, const int arr2[], int size2);

/**
 * @brief Fills all elements of an array with a specified value.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param value Value to populate.
 */
void array_fill(int arr[], int size, int value);

/**
 * @brief Checks if all elements in an array are strictly positive (> 0).
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return true if all elements are > 0, false otherwise.
 */
bool array_all_positive(const int arr[], int size);

/**
 * @brief Computes running prefix sums of an array into a destination array.
 * @param src Source array.
 * @param dest Destination array (pre-allocated to at least size).
 * @param size Number of elements.
 */
void array_prefix_sums(const int src[], int dest[], int size);

/**
 * @brief Swaps elements at two valid indices in an array in-place.
 * @param arr Array of integers.
 * @param size Number of elements.
 * @param i First index.
 * @param j Second index.
 */
void array_swap_indices(int arr[], int size, int i, int j);

/**
 * @brief Checks if an array is a palindrome (reads same forwards and backwards).
 * @param arr Array of integers.
 * @param size Number of elements.
 * @return true if palindrome, false otherwise.
 */
bool array_is_palindrome(const int arr[], int size);

#endif /* ARRAY_H */
