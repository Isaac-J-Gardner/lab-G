void find_max_less_than_10(const double a[], const int n, double *max) {
    
    // Your code below here
    double max_val = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 10){
            if(a[i] > max_val){
                max_val = a[i];
            }
        }
    }
    *max = max_val;
    return;
    
}