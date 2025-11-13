void sum(int N,int A[],int Y[]){
    for(int i =0; i<N; i++){
        for(int j=0; j<N;j++){
            Y[i] += A[i*N,j];
        }
    }
}