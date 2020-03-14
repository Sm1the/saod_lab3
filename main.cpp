#include <iostream>


int comparison = 0; int transfer = 0;
const int sizeMassive = 500;
int mainMassive[sizeMassive];
int M = 0; int C = 0;
int teor_main = 0;
int teor_m = 0;
int teor_c = 0;
int enterSize = 0;

///----FillInc---------------///
void FillInc (int num[], int n)
{   int o;
    for (o=0;o<n;o++)
        num[o]=o+1;
    //printf("FillInc\n");
}
///----FillDec---------------///
void FillDec (int num[], int n)
{   int o;
    for (o=0;o<n;o++)
        num[o]=n-o;
    //printf("FillDec\n");
}
///----FillRand--------------///
void FillRand(int num[], int n)
{   int o;
    for (o=0;o<n;o++)
        num[o]=rand()%100+1;
    //printf("FillRand\n");
}
///----PrintMas--------------///
void PrintMas(int num[], int n)
{   int o;
    printf("|");
    for (o=0;o<n;o++)
        printf("%2d|",num[o]);
    printf("\n");
}


void BubbleSort(int num[], int n)
{
    int i,j,b;
    comparison=0;transfer=0;
    for(i=0; i<n-1;i++) {
        for(j=n-1;j>i;j--) {
            comparison+=1;
            if (num[j]<num[j-1])
            {
                transfer+=3;
                b=num[j];
                num[j]=num[j-1];
                num[j-1]=b;
            }
        }
    }
}

//Трудоемкость
void Laboriousness_M(int M, int n){
    teor_m = 0;
    M = (3 * ((n*n) -n))/4;
    //printf("\nTeor M = %d",M);
    teor_m = M;
}
void Laboriousness_C(int C, int n){
    teor_c = 0;
    C = ((n*n)-n)/2;
    //printf("\nTeor C = %d",C);
    teor_c = C;
}


int main() {
    //Decrement
    printf("Decrement Massive [before]\n");
    FillDec(mainMassive,100);
    PrintMas(mainMassive,100);
    printf("\nDecrement Massive [after]\n");
    BubbleSort(mainMassive,100);
    PrintMas(mainMassive,100);
    int dec1 = transfer+comparison;
    //Increment
    printf("\n");
    printf("\nIncrement Massive [before]\n");
    FillInc(mainMassive,100);
    PrintMas(mainMassive,100);
    printf("\nIncrement Massive [after]\n");
    BubbleSort(mainMassive,100);
    PrintMas(mainMassive,100);
    int inc1 = transfer+comparison;
    //Random
    printf("\n");
    printf("\nRandom Massive [before]\n");
    FillRand(mainMassive,100);
    PrintMas(mainMassive,100);
    printf("\nRandom Massive [after]\n");
    BubbleSort(mainMassive,100);
    PrintMas(mainMassive,100);
    printf("\n");
    int ran1 = transfer+comparison;

    Laboriousness_M(M,100);
    Laboriousness_C(C,100);
    comparison = 0;
    transfer = 0;

    teor_main = teor_m + teor_c;

    printf("\n");
    printf("[n] ----- [M+C] ----------- [M+C] -------\n");
    printf("-------- [teo] --- [Dec] --- [Ran] --- [Inc]\n");
    printf("100  -  %d ",teor_main);
    printf("  -  %d",dec1);
    printf("  -  %d",ran1);
    printf("  -  %d", inc1);

    FillDec(mainMassive,200);
    BubbleSort(mainMassive,200);
    int dec2 = transfer+comparison;
    FillInc(mainMassive,200);
    BubbleSort(mainMassive,200);
    int inc2 = transfer+comparison;
    FillRand(mainMassive,200);
    BubbleSort(mainMassive,200);
    int ran2 = transfer+comparison;

    Laboriousness_M(M,200);
    Laboriousness_C(C,200);
    comparison = 0;
    transfer = 0;

    teor_main = teor_m + teor_c;
    printf("\n");
    printf("200  -  %d ",teor_main);
    printf("  -  %d",dec2);
    printf("  -  %d",ran2);
    printf("  -  %d", inc2);

    FillDec(mainMassive,300);
    BubbleSort(mainMassive,300);
    int dec3 = transfer+comparison;
    FillInc(mainMassive,300);
    BubbleSort(mainMassive,300);
    int inc3 = transfer+comparison;
    FillRand(mainMassive,300);
    BubbleSort(mainMassive,300);
    int ran3 = transfer+comparison;

    Laboriousness_M(M,300);
    Laboriousness_C(C,300);
    comparison = 0;
    transfer = 0;

    teor_main = teor_m + teor_c;
    printf("\n");
    printf("300  -  %d ",teor_main);
    printf(" -  %d",dec3);
    printf(" -  %d",ran3);
    printf(" -  %d", inc3);

    FillDec(mainMassive,400);
    BubbleSort(mainMassive,400);
    int dec4 = transfer+comparison;
    FillInc(mainMassive,400);
    BubbleSort(mainMassive,400);
    int inc4 = transfer+comparison;
    FillRand(mainMassive,400);
    BubbleSort(mainMassive,400);
    int ran4 = transfer+comparison;

    Laboriousness_M(M,400);
    Laboriousness_C(C,400);
    comparison = 0;
    transfer = 0;

    teor_main = teor_m + teor_c;
    printf("\n");
    printf("400  -  %d ",teor_main);
    printf(" -  %d",dec4);
    printf(" -  %d",ran4);
    printf(" -  %d", inc4);

    FillDec(mainMassive,500);
    BubbleSort(mainMassive,500);
    int dec5 = transfer+comparison;
    FillInc(mainMassive,500);
    BubbleSort(mainMassive,500);
    int inc5 = transfer+comparison;
    FillRand(mainMassive,500);
    BubbleSort(mainMassive,500);
    int ran5 = transfer+comparison;

    Laboriousness_M(M,500);
    Laboriousness_C(C,500);
    comparison = 0;
    transfer = 0;

    teor_main = teor_m + teor_c;
    printf("\n");
    printf("500  -  %d ",teor_main);
    printf(" -  %d",dec5);
    printf(" -  %d",ran5);
    printf(" -  %d", inc5);
}
