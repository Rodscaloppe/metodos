PROGRAM mposifalsa;
VAR
   a,x,b : REAL;
   fb,fx,fa : REAL;
   Erro : REAL;

  Function Calcula(x : REAL): REAL;
   BEGIN
        Calcula := (x*x*x)- 9*x + 3 ;
   END;

   PROCEDURE Verifica(x,a,b: REAL);
   BEGIN
   // Calculo das funcoes e do x para a aproximação

        fa := Calcula(a);
        fb := Calcula(b)a
        x := ((a*fb) - (b*fa))/(fb - fa);
        fx := Calcula(x);
   END;


BEGIN
   Erro := 0.001;
   a := 0;
   b := 1;


   //  Calculo das aproximacoes

   Verifica(x,a,b);
   WHILE (fx > Erro) DO
   BEGIN
         IF (fa > 0) AND (fb < 0) THEN
         BEGIN
              IF (fx < 0) THEN
              BEGIN
                  a := x;
              END
              ELSE
              BEGIN
                  b := x;
              END
         END;

         IF (fa > 0) AND ( fb < 0) THEN
         BEGIN
              IF (fx < 0) THEN
              BEGIN
                   b := x;
              END
              ELSE
              BEGIN
                   a := x;
              END
         END;
         Verifica(x,a,b);
   END;

END.
