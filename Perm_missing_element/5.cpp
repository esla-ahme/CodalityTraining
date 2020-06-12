int solution(vector<int> &A) {
    unsigned int n = A.size()+1;
    unsigned long sum = n*(n+1)/2;
    for(unsigned int i = 0 ; i < A.size() ; i++)
        sum-=A[i];
    return sum;
}