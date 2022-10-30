// Programming using Threads
// Readers-Writers problem

#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER ; 
char buffer[10];
int pronto=0;

void* reader(void* arg) {
	while(pronto==0) {} 
	pthread_mutex_lock(&mutex);
	printf("Ho letto %s \n",buffer);
	pthread_mutex_unlock (&mutex);
	return NULL ; 
}

void* writer(void* arg) {   
	phtread_mutex_lock(&mutex);
	sprintf(buffer,"ciaociao\n");
	pronto=1;
	pthread_mutex_unlock(&mutex);
	return NULL ;
}

int main() {
	pthread_t th_r1,th_r2,th_r3;
	pthread_t th_w1;
	pthread_create(&th_r1,NULL,reader,NULL);
	pthread_create(&th_r2,NULL,reader,NULL);
	pthread_create(&th_r3,NULL,reader,NULL);
	pthread_create(&th_w1,NULL,writer,NULL);
	pthread_join(th_r1,NULL);
	pthread_join(th_r2,NULL);
	pthread_join(th_r3,NULL);
	pthread_join(th_w1,NULL);
	return 0;
}
