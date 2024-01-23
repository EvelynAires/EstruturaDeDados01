//--01--
int x, y, *p;
y = 0;
p = &y;
x = *p;
x = 4;
(*p)++;
--x;
(*p) += x;
return 0;
//X irá terminar tendo o valor 3, Y o valor 4 e *p o valor do endereço de y.

