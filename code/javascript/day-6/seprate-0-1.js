

	 var a=[0,1,1,0,1,0,1,0,0,1,1,1,0];
     var temp,i=0,j=0;
     
     for (j = 0; j < a.length; j++) 
     {
         if(a[i]==1 && a[j]==0)
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
             i++;
         }
         else if(a[i]==0)  
         {
             i++;
         }
         
     }
     
     for (var j2=0; j2<a.length; j2++) {
        console.log("", a[j2]);
     }
		



