#include <stdio.h>

int Fib_Seq(int n){
    if (n <= 2){
        return 1;
    }else {
        return Fib_Seq(n - 1) + Fib_Seq(n - 2);
    }
}

int main() {
    int a = 10;
    for (int i = 1; i <= a; i++){
        printf("The F(%d) term is %d.\n", i, Fib_Seq(i));
    }
    return 0;
}