dec_to_bho  = function(n, base) {
 
    if (n < 0) {
      n = 0xFFFFFFFF + n + 1;
     } 
switch (base)  
{  

case 'O':  
return parseInt(n, 10).toString(8);
break;  
default:  
return("Wrong input.........");  
}  
}


console.log(dec_to_bho(120,'O'));


