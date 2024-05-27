#include "inter.h"

int pool1(void) {
    int ob;
    int nal;
    int vyl;
    int t;
    ob = 6;
    nal = 2;
    vyl = 3;
    t = ob / (vyl - nal);
    printf("%d\n", t);
    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

int pool(void) {
int ob;
int nal;
int vyl;
int t;
ob = 6;
nal = 2;
vyl = 3;
t = ob / (vyl - nal);
printf("%d\n", t);
int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
return 0;
}

int recurs1(void) {
    int n, ver, niz, eps;
    double del, S = 1.0;
    ver = 1;
    niz = 1;
    n = 1;
    printf("%s","enter eps(1-4) " );
    scanf("%d",&eps);
    while (n <= eps) {
        ver = ver * (ver + 2);
        niz = niz * (niz + 3);
        del = (double)(ver)/(niz);
        S += del;
        n++;
    }
    printf("S=%f\n", S);
    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

int recurs() {
 int n, ver, niz, eps;
 double del, S = 1.0;
 ver = 1;
 niz = 1;
 n = 1;
 printf("%s","enter eps(1-4) " );
 scanf("%d",&eps);
 while (n <= eps) {
 ver = ver * (ver + 2);
 niz = niz * (niz + 3);
 del = (double)(ver)/(niz);
 S += del;
 n++;
 }
 printf("S=%f\n", S);
 int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
 return 0;
}

int inter1(void){
    int i = 1;
    int g = 0;
    int s = 0;
    int bes = 1;
    int smax = 0;
    int first = 0;
    char stroka[80];
    printf("Enter numbers:\n");
    scanf("%99s", stroka);

    while (stroka[g] != '\0')
    {
        printf("%c", stroka[g]);
        g++;
        if (bes == 1)
            first++;
        
        if (stroka[g] == ' ' || stroka[g] =='\0')
            s=0;
        else{
            s++;
        }
        if (stroka[g] == ' ')
            bes = 0;
        if (s > smax)
            smax = s;
        
        
    }
    if(first != smax)
        printf(" Not equal %i", 0);
    printf(" smax: %i", smax);
    printf(" first: %i", first);
    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

int inter(void){
int i = 1;
int g = 0;
int s = 0;
int bes = 1;
int smax = 0;
int first = 0;
char stroka[80];
printf("Enter numbers:\n");
scanf("%99s", stroka);
while (stroka[g] != '\0')
{
printf("%c", stroka[g]);
g++;
if (bes == 1)
first++;
if (stroka[g] == ' ' || stroka[g] =='\0')
s=0;
else{
s++;
}
if (stroka[g] == ' ')
bes = 0;
if (s > smax)
smax = s;
}
if(first != smax)
printf(" Not equal %i", 0);
printf(" smax: %i", smax);
printf(" first: %i", first);
int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

struct MinMax {
    int min;
    int max;
};

int stroker1() {
    char posle[100];
    char stroka[100];
    struct MinMax res = {999, -999}; 
    int current = 0;
    int sgn = 1;

    scanf("%99s", stroka);

    int i = 0, j = 0;
    while (stroka[i]) {
        if (stroka[i] == '-') {
            sgn = -1;
        } else if (stroka[i] >= '0' && stroka[i] <= '9') {
            current = current * 10 + (stroka[i] - '0');
        } else {
            if (current != 0) {
                current *= sgn;
                if (current < res.min) res.min = current;
                if (current > res.max) res.max = current;
                current = 0;
                sgn = 1;
            }
            posle[j++] = stroka[i];
        }
        i++;
    }

    if (current != 0) {
        current *= sgn;
        if (current < res.min) res.min = current;
        if (current > res.max) res.max = current;
    }

    posle[j] = '\0';
    printf("%s\n", posle);

    printf("min: %d\n", res.min);
    printf("max: %d\n", res.max);

    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
    
}

int stroker(){
    printf("Enter str:\n");
 char posle[100];
 char stroka[100];
 scanf("%s&c", stroka);
 int i = 0;
 int j = 0;

 while (stroka[i]){
 if (!(stroka[i] >= '0' && stroka[i] <= '9')){
 posle[j] = stroka[i];
 j++;
 }
 i++;
 }
 posle[j] = '\0';
 printf("%s\n", posle);
 int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

int rarr1() {
    int arr[10];
    int cet = 0, necet = 0;

    printf("Ввод10:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (i % 2 == 0) {
            cet += arr[i];
        } else {
            necet += arr[i];
        }
    }

    if (necet < cet) {
        for (int i = 1; i < 10; i += 2) {
            if (i > 0 && arr[i - 1] % 2 == 0 && arr[i - 1] == 2 * arr[i]) {
                continue; 
            }
            arr[i] = 0;
        }
    } else {
        for (int i = 0; i < 10; i += 2) {
            if (i > 0 && arr[i - 1] % 2 == 0 && arr[i - 1] == 2 * arr[i]) {
                continue;
            }
            arr[i] = 0;
        }
    }

    printf("end:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("press enter to escape:\n");
    scanf("%d",&end);
}

int rarr() {
 int arr[10];
 int cet = 0, necet = 0;
 printf("Ввод10:\n");
 for (int i = 0; i < 10; i++) {
 scanf("%d", &arr[i]);
 if (i % 2 == 0) {
 cet += arr[i];
 } else {
 necet += arr[i];
 }
 }
 if (necet < cet) {
 for (int i = 1; i < 10; i += 2) {
 arr[i] = 0;
 }
 } else {
 for (int i = 0; i < 10; i += 2) {
 arr[i] = 0;
 }
 }
 printf("end:\n");
 for (int i = 0; i < 10; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
 return 0;
}

int sixter1() {
	int N = 3;
	int K = 3;

	int arr[N][K];
	int sumall = 0;


	printf("enter 9 elements:\n");
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < K; j++) {
        	scanf("%d", &arr[i][j]);
        	sumall += arr[i][j];
    	}
	}
//shaker tyta
	double avgall = (double)sumall / (N * K);

	int left = 0, right = N - 1;
	while (left <= right) {
    	int active = 0;


    	for (int i = left; i < right; i++) {
        	int sumone = 0, sumtwo = 0;
        	for (int j = 0; j < K; j++) {
            	sumone += arr[i][j];
            	sumtwo += arr[i + 1][j];
        	}
        	if ((double)sumone / K > (double)sumtwo / K) {
            	for (int j = 0; j < K; j++) {
                	int temp = arr[i][j];
                	arr[i][j] = arr[i + 1][j];
                	arr[i + 1][j] = temp;
            	}
            	active = 1;
        	}
    	}
    	right--;

    	for (int i = right; i > left; i--) {
        	int sumone = 0, sumtwo = 0;
        	for (int j = 0; j < K; j++) {
            	sumone += arr[i][j];
            	sumtwo += arr[i - 1][j];
        	}
        	if ((double)sumone / K < (double)sumtwo / K) {

            	for (int j = 0; j < K; j++) {
                	int temp = arr[i][j];
                	arr[i][j] = arr[i - 1][j];
                	arr[i - 1][j] = temp;
            	}
            	active = 1;
        	}
    	}
    	left++;

    	if (active==0) {
        	break;
    	}
	}


	for (int i = 0; i < N; i++) {
    	int sumstr = 0;
    	for (int j = 0; j < K; j++) {
        	sumstr += arr[i][j];
    	}
    	double avgstr = (double)sumstr / K;

    	if (avgstr < avgall) {
        	
        	for (int j = 0; j < K; j++) {
            	arr[i][j] = 0;
        	}
    	}
	}


	printf("end:\n");
	for (int i = 0; i < N; i++) {
    	for (int j = 0; j < K; j++) {
        	printf("%d ", arr[i][j]);
    	}
    	printf("\n");
	}

	int end;
	printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}

int sixter() {
 int N, K;
 printf(" N and K: ");
 scanf("%d %d", &N, &K);
 int arr[N][K];
 int sumall = 0;
 printf("numbers:\n");
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < K; j++) {
 scanf("%d", &arr[i][j]);
 sumall += arr[i][j];
 }
 }
 double avall = (double) sumall / (N * K);

 for (int i = 0; i < N; i++) {
 int sumstr = 0;
 for (int j = 0; j < K; j++) {
 sumstr += arr[i][j];
 }
 double avstr = (double)sumstr / K;
 if (avstr < avall) {

 for (int j = 0; j < K; j++) {
 arr[i][j] = 0;
 }
 }
 }
 printf("end:\n");
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < K; j++) {
 printf("%d ", arr[i][j]);
 }
 int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
 
 }
 return 0;
 
}


int bytekiller() {
    long long N;

    printf("Введи число: ");
    scanf("%lld", &N);

    long long res = 0;

    for (int i = 0; i < sizeof(N); i++) {
        unsigned char bte = (N >> (i * 8)) & 0xFF;

        unsigned char mirbte = 0;
        for (int j = 0; j < 8; j++) {
            mirbte |= ((bte >> j) & 1) << (7 - j);
        }

        res |= (long long)mirbte << (i * 8);
    }

    printf("Результат: %lld\n", res);

    int end;
    printf("Tryskov D.N. gr1311:\n");
    printf("Enter any number to escape:\n");
    scanf("%d",&end);
}