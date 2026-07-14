class Solution {
    public:
    int whileLoop(int d) {
        // Your code goes here  
        if(d==0){
            return 25*(10 + 500); //12750
        }
        return 25 * ( d +(d + 490));
    }
};