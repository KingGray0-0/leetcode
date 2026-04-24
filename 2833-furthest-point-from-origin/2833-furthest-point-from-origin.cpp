class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n=moves.size();
        int c=0;
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                l++;
            }
            if(moves[i]=='R'){
                r++;
            }
        }
        if(l<=r){
         for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                c--;
            }
            if(moves[i]=='_'){
                c++;
            }
            if(moves[i]=='R'){
                c++;
            }
        }
        }else{
            for(int i=0;i<n;i++){
            if(moves[i]=='L'){
                c--;
            }
            if(moves[i]=='_'){
                c--;
            }
            if(moves[i]=='R'){
                c++;
            }
        }
       
    }
     return abs(c);
    }
};