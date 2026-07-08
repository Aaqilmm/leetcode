int reverse(int x){
    if (x == INT_MIN)
        return 0;

    int a=1;
    if(x<0){
        x=x*-1;
        a=a*-1;
    }
    int rx=0;
    while(x != 0){
        int dig = x%10;
        if (rx > INT_MAX / 10 || (rx == INT_MAX / 10 && dig > 7))
            return 0;
        rx=(rx*10)+dig;
        x=x/10;
    }
    return rx*a;
}