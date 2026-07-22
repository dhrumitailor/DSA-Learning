class Solution {
public:
    void pattern17(int n) {
for(i 0 to n){
    //spaces
    j 0 to j<n-i-1 
//increasing
    for(j= o ; j<= i ; j++){
        cout<< char('A'+ j);
    }
//decreasing
for(j = i-1 ; j>=0 ; j--){
    cout<< char("A"+j)
}
}
    }
};