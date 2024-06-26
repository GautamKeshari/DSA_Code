// https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1

void shortest_distance(vector<vector<int>>&matrix){
	    int n=matrix.size();
	    for(int i=0;i<n;i++){
	        
	        for(int j=0;j<n;j++){
	            if(i==j) matrix[i][j]=0;
	            if(matrix[i][j]==-1){
	                matrix[i][j]=1e9;
	            }
	        }
	    }
	    
	    for(int k=0;k<n;k++){
	        for(int i=0;i<n;i++){
	            for(int j=0;j<n;j++){
	                matrix[i][j]=min(matrix[i][j],
	                        matrix[i][k]+matrix[k][j]);
	            }
	        }
	    }

        // for checking that graph contains negative cycle or not
        // for(int i=0;i<n;i++){
        //     if(matrix[i][i]<0) // contains negative cycle
        // }
	    
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(matrix[i][j]==1e9){
	                matrix[i][j]=-1;
	            }
	        }
	    }
	}