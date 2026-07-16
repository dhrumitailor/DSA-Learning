class Solution {
public:
    void pattern9(int n) {
        //upper pyramid
for(int i = 0 ; i < n ; i++){

//spaces

for(int j = 0 ; j < n-i-1 ; j++){
    cout << " ";
}

for(int j = 0 ; j < 2 * i + 1 ; j++){
    cout << "*";
}

cout << endl;
}

//lower pyramid
for(int i = 0 ; i < n ; i++){

//spaces
for(int j = 0 ; j < i ; j++){
    cout << " ";
}
for(int j = 0 ; j < 2*(n-i)-1 ; j++){
    cout << "*";
}
cout << endl;

}
    }
};