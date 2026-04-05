class Solution {
public:
    bool judgeCircle(string moves) {
        int n= moves.size();
        int v=0 , h=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='R') h+=2;
             if(moves[i]=='L') h-=2;
              if(moves[i]=='U') v+=2;
               if(moves[i]=='D') v-=2;
        }
        if(v==0 && h==0) return true;
        else return false;
    }
};