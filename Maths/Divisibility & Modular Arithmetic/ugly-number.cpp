class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        for (long long i=2 ; i*i<=n ; i++){
            while (n%i==0){
                n/=i;
                if (i!=2 && i!=3 && i!=5) return false;
            }
        }
        return n <=5 ;
    }
};