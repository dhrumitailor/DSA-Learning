class Solution {
public:
    void pattern10(int n) {
for(int i = 0 ; i < n ; i ++){

    for(int j = 0 ; j <=i ; j++){
        cout << "*";
    }
    cout << endl;
}

for(int i = 1 ; i < n ; i++){
    for( int j = 0 ; j < n - i  ; j++){
        cout<< "*";
    }
    cout << endl;
}


    }
};