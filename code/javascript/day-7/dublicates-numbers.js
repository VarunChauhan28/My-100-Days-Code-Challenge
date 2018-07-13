
   var A=[1,5,7,4,1,4]
    var i, j, elementCount=5, count=0;  
     for(i=0; i<A.length;i++){  
        for(j=i+1; j<A.length; j++){    
            if(A[i]==A[j])
             {
                count++ ; 
                break;
                 
            }
           
        }  
        
    }  
    console.log("number:"+count);
     
   
  
  

