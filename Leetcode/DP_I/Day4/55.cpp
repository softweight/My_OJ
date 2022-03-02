class Solution {
public:
    bool canJump(vector<int>& v) {
        int res=0;
        int t=v.size()-1;
		
        if(t==0) return true;
        if(v[0]==0) return false;
        
        
        for(int i=0;i<t;i++){
            if(v[i]+i>res and res>=i){
                res=v[i]+i;
            }
            if(res>=t)return true;

        }
        return false;
        
    }
};