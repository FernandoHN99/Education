function [J] = Erro(c,n)
% fun¸c~ao m´erito
syms t % indica que a vari´avel t ser´a tratada como simb´olica
% determina o erro instant^aneo
erro1 = @(c,n,t) (1-(-c*sin(t*n*pi/2))).^2;
erro2 = @(c,n,t) (2-(-c*sin(t*n*pi/2))).^2;
% faz a integral do erro
J = int(erro1(c,n,t),t,0,2)+int(erro2(c,n,t),t,2,4);
% converte a express~ao obtida em valor num´erico
J = eval(J);
end
