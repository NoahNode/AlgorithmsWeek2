/**
 * Search.h
 *
 * Template based Search Functions
 *
 * @author  Your name
 * @email   your email
 * @version 1.0
 */

#ifndef SEARCH_H_
#define SEARCH_H_

#include "Array.h"

// PreCondition: items Array is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int sequentialSearch(const Array<T> & items, T key) {
	for (int i = 0; i < items.length(); i++) {
		if (key == items[i])
			return i;
	}
	return -1;
}

// PreCondition: items Aarray is full
// PostCondition: return position if key found, otherwise -1
template <class T>
int binarySearch(const Array<T> & items, T key) {
	int left = 0, right = items.length() - 1;

	std::cout << "Searching for: " << key << std::endl;
	std::cout << "In Array: " << std::endl;
	for (int i = 0; i < items.length(); i++) {
		std::cout << items[i] << ", ";
	}
	std::cout << "\n";

	while (left <= right) {
		int pivot = (left + right) / 2;

		if (key == items[pivot]) {
			return pivot;	    // found
		}
		else if (key > items[pivot]) {
			left = pivot + 1; 	// search to right
		}
		else {
			right = pivot - 1; 	// search to left
		}
	}
	return -1;
}

// PreCondition: Data array is full
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrence(const Array<T> & items, T key) {
	int count = 0;

	for (int i = 0; i < items.length(); i++) {
		count++;
	}
	return count;
}

// PreCondition: Data array is full and sorted
// PostCondition: return number of occurences of e in Array
template <class T>
int countOccurrenceOrdered(const Array<T> & items, T key) {

}

// PreCondition: Both Arrays are filled with values of type T. 
//               items - values to be searched. keys - values to search for
// PostCondition: return true if all keys are found, otherwise false
template <class T>
bool containsAll(const Array<T> & items, T key) { }

#endif	/* SEARCH_H_ */