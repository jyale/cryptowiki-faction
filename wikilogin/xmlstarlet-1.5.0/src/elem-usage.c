#include <stdio.h>
#include <libxml/xmlversion.h>
static const char elem_usage[] = {
'X','M','L','S','t','a','r','l','e','t',' ','T','o','o','l','k','i','t',':',' ','D','i','s','p','l','a','y',' ','e','l','e','m','e','n','t',' ','s','t','r','u','c','t','u','r','e',' ','o','f',' ','X','M','L',' ','d','o','c','u','m','e','n','t','\n',
'U','s','a','g','e',':',' ','%','s',' ','e','l',' ','[','<','o','p','t','i','o','n','s','>',']',' ','<','x','m','l','-','f','i','l','e','>','\n',
'w','h','e','r','e','\n',
' ',' ','<','x','m','l','-','f','i','l','e','>',' ','-',' ','i','n','p','u','t',' ','X','M','L',' ','d','o','c','u','m','e','n','t',' ','f','i','l','e',' ','n','a','m','e',' ','(','s','t','d','i','n',' ','i','s',' ','u','s','e','d',' ','i','f',' ','m','i','s','s','i','n','g',')','\n',
' ',' ','<','o','p','t','i','o','n','s','>',' ','i','s',' ','o','n','e',' ','o','f',':','\n',
' ',' ','-','a',' ',' ',' ',' ','-',' ','s','h','o','w',' ','a','t','t','r','i','b','u','t','e','s',' ','a','s',' ','w','e','l','l','\n',
' ',' ','-','v',' ',' ',' ',' ','-',' ','s','h','o','w',' ','a','t','t','r','i','b','u','t','e','s',' ','a','n','d',' ','t','h','e','i','r',' ','v','a','l','u','e','s','\n',
' ',' ','-','u',' ',' ',' ',' ','-',' ','p','r','i','n','t',' ','o','u','t',' ','s','o','r','t','e','d',' ','u','n','i','q','u','e',' ','l','i','n','e','s','\n',
' ',' ','-','d','<','n','>',' ','-',' ','p','r','i','n','t',' ','o','u','t',' ','s','o','r','t','e','d',' ','u','n','i','q','u','e',' ','l','i','n','e','s',' ','u','p',' ','t','o',' ','d','e','p','t','h',' ','<','n','>','\n',
'\n',
0 };
void fprint_elem_usage(FILE* out, const char* argv0) {
  fprintf(out, elem_usage, argv0);
}
