PROGRAM meNewtonRalphason;
VAR
   // a e o ponto que temos que inicializamos a aproximacao

   x,a: REAL;
   
   FUNCTION calc(x:REAL):REAL;
   BEGIN
      calc:= (x*x) + x - 1
   END;

   FUNCTION derivada(x:REAL):REAL;
   BEGIN
        derivada:= (2*x) + 1;
   END;

BEGIN
     a := 1.0;
     // expressao que calcula o x
     x :=  a - (calc(a)/derivada(a));
     WRITELN( 'XK        F(X)        D(X)');
     WRITELN( a:2:3,'     ',calc(a):2:3,'     ',derivada(a):2:3);

     //Loop de aproximacao com o erro como 10^-3 podendo ser alterado
     WHILE(abs(calc(x)) > 0.001)DO
     begin
          a := x;
          x :=  a - (calc(a)/derivada(a));
          WRITELN( a:2:3,'     ',calc(a):2:3,'      ',derivada(a):2:3);
     end;

     WRITELN();
     WRITELN('O valor que zera a funcao e: ',x:2:5);
END.
