class Solution {
public:
    int M = 1e9 +7;
    int t[201][201][2];
    int solve(int oneleft,int zeroleft, bool islastone , int limit){
        if(oneleft == 0 && zeroleft == 0) return 1;
        if(t[oneleft][zeroleft][islastone] != -1){
            return t[oneleft][zeroleft][islastone] ;
        }
        int r =0;
        if(islastone == true ){
            for(int i=1;i<=min(zeroleft,limit);i++){
                r= ( r + solve( oneleft , zeroleft-i, false, limit)) % M ;

            }
        }else {
        for(int i=1;i<=min(oneleft,limit);i++){
                r= ( r + solve( oneleft -i , zeroleft, true, limit)) % M ;

            }
    }
     return t[oneleft][zeroleft][islastone] = r;
    }

    int numberOfStableArrays(int zero, int one, int limit) {
        memset(t ,-1 ,sizeof(t));
         
        int so = solve(one,zero,false,limit);
        int sz = solve(one,zero,true,limit);
         return (so +sz) % M;
    }
};