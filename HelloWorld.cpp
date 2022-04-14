//OpenMP include File
#include <omp.h>
#include <stdio.h>

int main()
{
    //Parallel Region with default number of threads
    #pragma omp parallel
    {
        int ID = omp_get_thread_num();

        printf("Hello(%d)",ID);
        printf("world(%d)\n",ID);
    }
}