/* 6. Recursions */

x*f(x-1);

let f(x) = if (x > 0) then 1 else (x*f(x-1));