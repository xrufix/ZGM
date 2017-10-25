#define DOUBLES(var1,var2) ##var1##_##var2
#define TRIPLES(var1,var2,var3) ##var1##_##var2##_##var3
#define QUADRUPLES(var1,var2,var3,var4) ##var1##_##var2##_##var3##_##var4##
#define QUOTE(var1) #var1
#define QQUOTE(var1) QUOTE(QUOTE(var1))

#define CSTRING(component,name) QUOTE(TRIPLES($STR_ZGM,component,name))

#define EFUNC(component,function)  QUADRUPLES(zgm,component,fnc,function)
#define QEFUNC(component,function) QUOTE(EFUNC(component,function))