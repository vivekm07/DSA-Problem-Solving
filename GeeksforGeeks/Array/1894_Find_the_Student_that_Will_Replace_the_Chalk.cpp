class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        int i = 0;
        long long int sum = 0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        }
        
        while(k>sum){
            k-=sum;
            
        }
        
        while(chalk[i]<=k){
            k = k-chalk[i];
            i++;
            i = i%n;
        }
        return i;
    }
};