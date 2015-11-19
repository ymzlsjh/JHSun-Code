%牛顿法求解非线性方程组matlab源程序 
%Newton-Raphson 求解非线性方程组matlab源程序  
%matlab程序如下：  
function hom 
[P,iter,err]=newton('f','JF',[7.8e-001;4.9e-001; 3.7e-001],0.01,0.001,1000); disp(P); disp(iter); disp(err);    
    function Y=f(x,y,z)
    Y=[x^2+y^2+z^2-1;
        2*x^2+y^2-4*z;
        3*x^2-4*y+z^2];
    function y=JF(x,y,z) 
        f1='x^2+y^2+z^2-1'; 
        f2='2*x^2+y^2-4*z';
        f3='3*x^2-4*y+z^2';
        df1x=diff(sym(f1),'x');
        df1y=diff(sym(f1),'y');
        df1z=diff(sym(f1),'z');
        df2x=diff(sym(f2),'x');
        df2y=diff(sym(f2),'y');
        df2z=diff(sym(f2),'z');
        df3x=diff(sym(f3),'x');
        df3y=diff(sym(f3),'y');
        df3z=diff(sym(f3),'z');
j=[df1x,df1y,df1z;df2x,df2y,df2z;df3x,df3y,df3z];
y=(j);

        function [P,iter,err]=newton(F,JF,P,tolp,tolfp,max) %输入P为初始猜测值，输出P则为近似解 %JF为相应的Jacobian矩阵 %tolp为P的允许误差 %tolfp为f(P)的允许误差 %max：循环次数 
Y=f(F,P(1),P(2),P(3)); for k=1:max 
    J=f(JF,P(1),P(2),P(3));     Q=P-inv(J)*Y; 
    Z=f(F,Q(1),Q(2),Q(3));     err=norm(Q-P);     P=Q;     Y=Z;     iter=k; 
    if (err<tolp)||(abs(Y)<tolfp||abs(Y)<0.0001)         break     end end   
   <pre lang="matlab" line="1" file="test.m"> function   homework4 
[P,iter,err]=newton('f','JF',[7.8e-001;4.9e-001; 3.7e-001],0.01,0.001,1000); disp(P); disp(iter); disp(err);   
function Y=f(x,y,z) Y=[x^2+y^2+z^2-1;     2*x^2+y^2-4*z;     3*x^2-4*y+z^2];     
function y=JF(x,y,z) f1='x^2+y^2+z^2-1'; f2='2*x^2+y^2-4*z'; f3='3*x^2-4*y+z^2'; df1x=diff(sym(f1),'x'); df1y=diff(sym(f1),'y'); df1z=diff(sym(f1),'z'); df2x=diff(sym(f2),'x'); df2y=diff(sym(f2),'y'); df2z=diff(sym(f2),'z'); df3x=diff(sym(f3),'x'); df3y=diff(sym(f3),'y'); df3z=diff(sym(f3),'z'); 
j=[df1x,df1y,df1z;df2x,df2y,df2z;df3x,df3y,df3z]; y=(j);   
function [P,iter,err]=newton(F,JF,P,tolp,tolfp,max) 

%输入P为初始猜测值，输出P则为近似解 %JF为相应的Jacobian矩阵 %tolp为P的允许误差 %tolfp为f(P)的允许误差 %max：循环次数 
Y=f(F,P(1),P(2),P(3)); for k=1:max 
    J=f(JF,P(1),P(2),P(3));     Q=P-inv(J)*Y; 
    Z=f(F,Q(1),Q(2),Q(3));     err=norm(Q-P);     P=Q;     Y=Z;     iter=k; 
    if (err<tolp)||(abs(Y)<tolfp||abs(Y)<0.0001)         break     end