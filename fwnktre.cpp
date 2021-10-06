
/*
can't find solution for min max query problems
*/

void getSum(vector<int> &bt, int index){
    int sum=0;
    index = index + 1;
    while (index>0){	
    	sum+=bt[index];
        index -= index & (-index);
    }
    
}

void update(vector<int> &bt, int n, int index, int val){
    index = index + 1;
    while (index <= n){
    bt[index] += val;
    index += index & (-index);
    }
}

void constructBITree(vector<int> &bt,int a[], int n){
    for (int i=0; i<n; i++) update(bt, n, i, a[i]);
}


// segment tree implementation

void build(vector<int> &a,vector<int> &st)
{ 
    for (int i=0; i<n; i++)    
        st[n+i] = a[i];
    for (int i = n - 1; i > 0; --i)     
        st[i] = min(st[i<<1],st[i<<1 | 1]);
}

void update(int p, int value) 
{ 
    st[p+n] = value;
    p = p+n;
    for (int i=p; i > 1; i >>= 1)
        st[i>>1] = min(st[i],st[i^1]);
}

int query(int l, int r) 
{ 
    int res = 0;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l&1) 
            res += st[l++];
      
        if (r&1) 
            res += st[--r];
    }
    return res;
}
