class Solution {
public:
    void pattern12(int n) {

for(int i = 0 ; i < n ; i++){
//left side
    for(int j = 0 ; j<=i ; j++){
        cout << j+1;
    }

    //spaces-> inverted pyramid
    for(int j = 0 ; j < 2*(n-i)-1 ; j++ ){
        cout << " ";
    }

//right side

for(int j = i ; j>=0 ; j--){

    cout << j+1;
}
cout<< endl;
}
    }
};