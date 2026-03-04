class Solution {
    public int numSpecial(int[][] mat) {
        int m= mat.length;
        int n= mat[0].length;
        
        int []rc=new int[m];
        int []cc = new int[n];
        int count =0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    rc[i]++;
                    cc[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && rc[i]==1 && cc[j]==1){
                   count++;
                }
            }
        }
        return count;
    }
}