function duplicateNumber(arr) {
    var memory = {};
    for (var i = 0; i < arr.length; i++) {
      if(memory[arr[i]] === undefined){
        memory[arr[i]] = true;
      }else{
        return arr[i]
      }
    }
  }
  
  var arr = [2,1,3,3];
  console.log(duplicateNumber(arr));
