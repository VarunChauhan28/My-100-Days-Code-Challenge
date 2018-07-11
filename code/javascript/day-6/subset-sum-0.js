(function (arr)
{
    let hashLength = [];
    let sum = 0;
    let total = 0;
    for(let i = 0; i < arr.length; i++) {
    sum += arr[i];
    if ( hashLength[sum] == 1 || sum === 0) {
    total++;
    } else {
    hashLength[sum] = 1;
    }
    }
    console.log('total',total)
    })([1,2,-2,3,-1]);