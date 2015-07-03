#include <stdio.h>
#include <wchar.h>

size_t w_strlen(const wchar_t *s)
{

const wchar_t *p = s;


while (*p)
 ++p;
 return (p - s);
}
