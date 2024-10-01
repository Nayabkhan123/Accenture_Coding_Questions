//Iterative Method
class Solution {
public:
    int fib(int n) {
        if(n==0||n==1){
            return n;
        }
        int a=0;
        int b=1;
        int c=0;
        for(int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};
//Recursive Method
class Solution {
public:
int f(int n){
    if(n==0||n==1) return n;

    return f(n-1)+f(n-2);
}
    int fib(int n) {
        return f(n);
    }
};