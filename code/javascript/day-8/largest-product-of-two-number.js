
arr=[1,4,3,5];
 {
    var maxProduct = 0;
    for (var i=0; i<arr.length - 2; i++) {
      for (var j=i+1; j<arr.length - 1; j++) {
        for (var k=j+1; k<arr.length; k++) {
          var product = arr[i] * arr[j] * arr[k];
          if (product > maxProduct) {
            maxProduct = product;
            
          }
         
          
        }
      }
    }
    console.log(""+ maxProduct);
  }