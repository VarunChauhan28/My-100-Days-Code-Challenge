var n = 5;
var arr = [2, 4, 5, 1, 3];
var x = n+1;  // 6
var sum = 0;
sum = x*(x+1)/2;
var i = 0;
var sum1 = 0;  
for(i = 0; i<n; i++){
  sum1 = sum1 + arr[i]; // 0 + 2  + 4  + 1  + 6  + 3
}
console.log("missing number:", sum - sum1);
return 0;
