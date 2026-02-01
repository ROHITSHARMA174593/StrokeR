class BookAllocation {
    public static void main(String[] args) {
        int[] arr = {12, 34, 67, 90};
        int k = 2;
        System.out.println(bookAllocation(arr, k));
    } 
    static int bookAllocation(int[] arr, int k){
        // code here
        // agar students books se jyada hai to return kar do yahi se kyuki hume har student ko minimum 1 book to deni hai 
        int n = arr.length;
        if(k > n) return -1;
        
        
        int end = 0;
        int start = Integer.MIN_VALUE;
        // array ke maximum se hi start karenge loop ko 
        for(int e : arr){
            if(e > start){
                start = e;
            }
            end += e;
        }
        
        // // end mtlb ki array ka total sum jisse ki loop ki infinity ko break kar sake
        //   for(int i=start;i<=end;i++){
        //     if(allocateBook(i, arr, k)){ // maximum(start) pages hi start ke jitne honge vha per jisse ki book allocation acche se ho jaaye
        //         return i;
        //     }
        // }
        // return -1;
        
        // ------------------ Optimized Approach ---------------------- //
        
        int ans = -1;
        while(start <= end){
            int mid = start+(end-start)/2;
            
            if(allocateBook(mid, arr, k)){
                ans = mid;
                end = mid-1; // try for more minimum allocation
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
    static boolean allocateBook(int maxPages, int[] arr, int k){
        int count = 1; // mtlb m first student ko book allocate kar rha hu
        int pages = 0; // abhi tak student ko kitne pages mile hai
        for(int i=0;i<arr.length;i++){ // 1 se start because first book ko already allocate kar chuke hai
            if(pages+arr[i] <= maxPages){ // agar pages ke ander current current book ka allocation karte hai and uske baad bhi maximumPages se kam aata hai allocation to fir hum continue pages ke ander hi daalenge dusre student ko nahi denge abhi tak lekin jaise hi pages+arr[i] > maxPages ho jaaye to new student ko denge books
                pages+=arr[i];
            }else{
                count++;
                pages = arr[i];
            }
        }
        return count <= k;
    }
}