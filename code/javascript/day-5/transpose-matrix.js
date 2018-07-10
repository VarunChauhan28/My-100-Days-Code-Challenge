
 var arr = [
    [1, 2, 5],
    [1, 2, 3],
    [1, 2, 3]
  ];
  
  
  
  var result = Array.from({ length: arr.reduce(function(max, item) { return item.length > max ? item.length : max; }, 0) }, function(x, row) {
    return Array.from({ length: arr.length }, function(x, col) {
      return arr[col][row];
    });
  });
  
  console.log(result);

