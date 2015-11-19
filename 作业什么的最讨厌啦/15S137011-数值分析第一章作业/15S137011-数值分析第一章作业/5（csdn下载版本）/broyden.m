function x = broyden(x0,tol)
if nargin < 2
    tol = 1.0e-5;
end
A = eye(size(x0,1));
x = x0 - A \ funm(x0);
n = 1;
while (norm(x - x0) > tol) && (n < 1000)
    x0 = x;
    x = x0 - A \ funm(x0);
    p = x - x0;
    q = funm(x) - funm(x0);
    A = A + (q - A*p)*p'/norm(p)^2;
    n = n + 1;
end
n