#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void computeDFT(double inreal[], double inimag[], double outreal[], double outimag[], int n) {
    for (int k = 0; k < n; k++) {  // For each output element
        double sumreal = 0;
        double sumimag = 0;
        for (int t = 0; t < n; t++) {  // For each input element
            double angle = 2 * PI * t * k / n;
            sumreal +=  inreal[t] * cos(angle) + inimag[t] * sin(angle);
            sumimag += -inreal[t] * sin(angle) + inimag[t] * cos(angle);
        }
        outreal[k] = sumreal;
        outimag[k] = sumimag;
    }
}

int main() {
    double inreal[] = {0.0, 1.0, 2.0, 3.0};
    double inimag[] = {0.0, 0.0, 0.0, 0.0};
    int n = 4;
    double outreal[n];
    double outimag[n];

    computeDFT(inreal, inimag, outreal, outimag, n);
    for (int i = 0; i < n; i++) {
        printf("Output %d: Real = %f, Imaginary = %f\n", i, outreal[i], outimag[i]);
    }

    return 0;
}
