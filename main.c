
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include"data.h"
#include"pearsoncorrelation.h"

//--------------------------------------------------------
// FUNCTION PROTOTYPES
//--------------------------------------------------------
void printdata(double* independent, double* dependent, int size);

//--------------------------------------------------------
// FUNCTION main
//--------------------------------------------------------
int main(void)
{
    puts("-----------------------");
    puts("| codedrome.com       |");
    puts("| Pearson Correlation |");
    puts("-----------------------");

    double independent[8];
    double dependent[8];
    double rho;

    for(int dataset = 1; dataset <=3; dataset++)
    {
        if(populatedata(independent, dependent, dataset))
        {
            printf("Data Set %d\n-----------\n", dataset);

            printdata(independent, dependent, 8);

            rho = pearson_correlation(independent, dependent, 8);

            printf("Pearson Correlation Coefficient rho = %lf\n\n", rho);
        }
    }

    return EXIT_SUCCESS;
}

//--------------------------------------------------------
// FUNCTION printdata
//--------------------------------------------------------
void printdata(double* independent, double* dependent, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%3.0lf\t%3.0lf\n", independent[i], dependent[i]);
    }
}
