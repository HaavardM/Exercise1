#include <pthread.h>
#include <stdio.h>

#define ITERATIONS 1000000

int i = 0;

// Note the return type: void*
void* incrementingThreadFunction(){
    // TODO: increment i 1_000_000 times
    for(int it= 0; it < ITERATIONS; ++it) {
        ++i;
    }
    return NULL;
}

void* decrementingThreadFunction(){
    // TODO: decrement i 1_000_000 times
    for(int it= 0; it < ITERATIONS; ++it) {
        --i;
    }
    return NULL;
}


int main(){
    
    pthread_t incrementingThread, decrementingThread;
    // TODO: declare incrementingThread and decrementingThread (hint: google pthread_create)
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}
