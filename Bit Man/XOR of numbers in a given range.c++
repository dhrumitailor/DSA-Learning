class Solution{	
	public:
    int xor1ton(int n){

if(n%4==0){
    return n;
}
if(n%4==1){
    return 1;
}
if(n%4==2){
    return n+1;
}
return 0;
    }
		int findRangeXOR(int l,int r){
			//your code goes here
            return xor1ton(r)^xor1ton(l-1);
		}
};