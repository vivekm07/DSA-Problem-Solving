class Solution {
public:
    bool checkZeroOnes(string s) {
         int a=0,b=0;
         for(int i=0;i<s.size();){
                int cnt=0;
                if(s[i]=='0'){
                    while(s[i]=='0' && i<s.size()){
                        i++;
                        cnt++;
                    }
                    a=max(a,cnt);         
          		}
                else{
                     while(s[i]=='1' && i<s.size()){
                         i++;
                         cnt++;
                     }
                     b=max(b,cnt);              
                }  
        }
	return b>a;
    }
};