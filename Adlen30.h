#ifndef _INCLUDED_HEAP_
#define _INCLUDED_HEAP_

#include <stdint.h>
#define HEAP_MAX_SIZE 32
#define Landing 1
#define Takeoff 2

typedef struct _heap_ Heap;
struct  _heap_
{
	uint32_t	size;
	int32_t		data[HEAP_MAX_SIZE]	;
};

Heap 		heap_new(int32_t flight[], uint32_t len){
  uint32_t time;
  int32_t flight[];
};


Heap*		heap_insert(Heap *heap, int32_t key){
  uint32_t key;
  uint32_t heap; 
};


int32_t		heap_get_min(Heap *heap, uint32_t time);

int32_t		heap_extract_min(Heap *heap);




#endif
