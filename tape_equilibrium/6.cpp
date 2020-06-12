int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int min = 0x7FFFFFFF;
    for(int i = 1 ; i < A.size() ;i++)
        A[i] += A[i-1];
    for(int i = 1 ; i < A.size() ;i++){
        int temp = abs(A[i-1]-(A[A.size()-1]-A[i-1]));
        min = (temp<min)? temp:min;
    }
    return min;   
}