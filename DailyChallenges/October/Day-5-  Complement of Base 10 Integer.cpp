class Solution {
public:
    int bitwiseComplement(int N) {
        if(!N)
            return 1;
        int pos;
        for(pos = 30;pos>=0;pos--)
        {
            if(N&(1<<pos))
                break;
        }
        for(int i=pos;i>=0;i--){
            N = N^(1<<i);
        }
        return N;
    }
};