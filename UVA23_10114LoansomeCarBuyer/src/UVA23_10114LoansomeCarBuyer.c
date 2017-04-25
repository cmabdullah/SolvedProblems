/*
 ============================================================================
 Name        : pdf.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("10114LoansomeCarBuyer.pdf"); /* prints 10114LoansomeCarBuyer.pdf */
	return EXIT_SUCCESS;
}
/**
 *
 *
 * /*
 * Sai Cheemalapati
 * UVA 10114: Loansome car buyer
 *


#include<cstdio>

using namespace std;

int duration, months, a;
float down, amount, b;
float depr[110];

void simul(int month, float car, float loan, float payment) {
    loan -= payment;
    car -= depr[month] * car;

    if(loan < car) {
        printf(month == 1? "1 month\n" : "%d months\n", month);
        return;
    }
    simul(month + 1, car, loan, payment);
}

int main() {
    for(;;) {
        scanf("%d %f %f %d", &duration, &down, &amount, &months);
        if(duration < 0) break;
        for(int i = 0; i < 110; i++)
            depr[i] = -1;
        for(int i = 0; i < months; i++) {
            scanf("%d %f", &a, &b);
            depr[a] = b;
        }
        for(int i = 0; i < 110; i++)
            if(depr[i] < 0) depr[i] = depr[i - 1];

        float car = (amount + down) * (1.0 - depr[0]);
        if(amount < car) printf("0 months\n");
        else simul(1, car, amount, amount / duration);
    }
}
input
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24

30 500.0 15000.0 3
0 .10
1 .03
3 .002
12 500.0 9999.99 2
0 .05
2 .1
60 2400.0 30000.0 3
0 .2
1 .05
12 .025
100 10000.0 75000.0 3
0 .30
3 .03
10 .01
5 10000.0 75000.0 1
0 0.99
30 0.01 0.50 2
0 0.01
3 0.03
100 0 75000 2
0 .10
99 .5
-99 0 17000 1
output
1
2
3
4
5
6
7

4 months
1 month
49 months
86 months
5 months
0 months
100 months
 *
 *
 *
 *
 *
 *
 * */
