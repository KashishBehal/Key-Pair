	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    sort(arr , arr+n);
	    int l=0;
	    int r=n-1;
	 while(l<r){
	      if(arr[l]+arr[r]==x){
	          return true;
	      }
	      else if(arr[l]+arr[r]>x){
	          r--;
	      }
	      else{
	          l++;
	      }
	      
	  }
	  return false;
	}
