1.Insert an event with a given time stamp, aircraft number, takeoff / landing (add a future event).
2.Extract the event with smallest time stamp (that is, determine the next event to process).
  Design and implement suitable data structures that work efficiently in terms of time.

#include <stdint.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "heap.h"



time_t time( time_t *second )

Heap 	heap_new(int32_t flight[], uint32_t len) {
	assert (len > 0 && len < HEAP_MAX_SIZE);

	Heap heap;
	uint32_t idx = len/2;
	for (idx = len/2; idx > 0; --idx) {
		_heapify_(flight, len, idx);
	}
	heap.size = len;
	memcpy(heap.flight, flight, (len+1) * sizeof(int32_t));
	_test_heap_(heap.flight, heap.size);

	return heap;
}



Heap*	heap_insert(Heap *heap, int32_t key)
{
	assert (heap->size > 0 && heap->size+1 < HEAP_MAX_SIZE);

	++heap->size;
	uint32_t parent = heap->size/2;
	uint32_t loc = heap->size;

	while ( loc > 1 && heap->data[parent] < key) {
		heap->data[loc] = heap->data[parent];
		loc = parent;
		parent = parent/2;
	}
	heap->data[loc] = key;
	return heap;

}


static void _MIN_ (int32_t flight[], uint32_t len, uint32_t parent) {
	assert (len > 0 && len < HEAP_MAX_SIZE && parent > 0 );

	uint32_t child = 2 * parent;

	while (child <= len) {
		if (child + 1 <= len) {
			if (data[child+1] > data[child]){
				++child;
			}
		}
		if (data[parent] <= data[child]) {
			break;
		}
		_swap_(&data[parent], &data[child]);
		parent = child;
		child = 2 * parent;
	}
}
