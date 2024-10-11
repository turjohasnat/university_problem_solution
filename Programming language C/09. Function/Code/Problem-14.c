//C Solution:
#include<stdio.h>
#include<math.h>

void TakeInput( int n, int a[] );
double CalcMean( int n, int a[] );
double CalcStdDeviation( int n, int a[], double mean );

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    TakeInput(n,a);

    double mean = CalcMean( n, a );
    double stddev = CalcStdDeviation( n, a, mean );
    printf("%.2lf", stddev);
    return 0;
}

void TakeInput( int n, int a[] ){
    for( int i = 0; i < n; i++ ){
        scanf("%d", &a[i]);
    }
}

double CalcMean( int n, int a[] ){
    double sum = 0;
    for( int i = 0; i < n; i++ ){
        sum += a[i];
    }
    return sum / n;
}

double CalcStdDeviation( int n,int a[], double mean ){
    double sumSqDiff = 0;
    for( int i = 0; i < n; i++ ){
        sumSqDiff += ( a[i] - mean ) * ( a[i] - mean );
    }
    return sqrt(sumSqDiff / n);
}
