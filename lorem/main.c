#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){
  char lorem[]="Lorem ipsum"
      "dolor sit amet, consectetur adipiscing elit. Integer varius risus mauris, pellentesque egestas enim dapibus vel. Sed ultrices est massa. In nec pretium magna. Quisque augue metus, facilisis ac ipsum in, bibendum scelerisque velit. Donec elementum accumsan nunc id tincidunt. Ut ut lobortis sem. Fusce mauris metus, dictum in nulla at, varius tempus sem. Nullam nec tristique purus. Sed blandit sed ex non tempor. Donec commodo, lorem a porta luctus, leo eros fermentum dui, sit amet tempor arcu lorem in orci. Nulla vel erat quis nulla auctor finibus in eget turpis. Sed ultrices felis sit amet quam porttitor, ut imperdiet libero tristique. Vivamus at posuere tortor, ut eleifend nunc."
      "Pellentesque blandit blandit elit, eu mollis mauris mollis eget. Nam eu sem sed eros lacinia luctus in et sem. Vivamus fermentum lorem a tortor venenatis dignissim. Etiam auctor maximus porta. Curabitur ultricies justo et orci rhoncus efficitur. Mauris sem nisl, mollis sagittis felis in, pulvinar posuere felis. Vivamus laoreet convallis tellus at ultricies. Vivamus et turpis tellus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Integer viverra vitae eros nec lacinia. Nulla tincidunt tortor eget enim luctus, at viverra nisi finibus. Pellentesque varius pellentesque lectus, tincidunt iaculis lacus lacinia a. Nam pulvinar rutrum pharetra. Vivamus tincidunt erat vel bibendum aliquam. Nunc arcu sem, semper et nisi id, rhoncus molestie libero."
      "Ut interdum lobortis ligula a interdum. Vivamus ante augue, euismod ac ullamcorper vitae, commodo ut sapien. Interdum et malesuada fames ac ante ipsum primis in faucibus. Nullam dignissim varius vulputate. Sed vitae eros pulvinar, pretium odio fringilla, viverra tellus. Sed risus mauris, lacinia at nisl non, tempus dictum tellus. Praesent a mauris a lorem dictum feugiat. Donec laoreet mauris sapien, et lacinia lorem pretium at. Morbi metus diam, mollis ut posuere et, interdum sit amet massa. Curabitur ultricies sollicitudin viverra. Sed luctus ut tortor et condimentum. Proin in ante finibus, egestas orci ut, convallis leo. Curabitur luctus vehicula nunc venenatis ullamcorper. Vivamus mollis orci et sem convallis, quis laoreet dolor ornare. Aliquam non elementum sem, in tristique libero. Vestibulum hendrerit tristique metus sit amet consequat."
      "Sed egestas arcu a velit tempus, nec tincidunt orci scelerisque. Phasellus laoreet dolor quis nunc tincidunt, sit amet vehicula dui dapibus. Aliquam erat volutpat. In molestie, quam sit amet sollicitudin tincidunt, orci erat malesuada ex, non ornare risus diam sit amet metus. Donec quis posuere augue, in pulvinar massa. Nullam ornare et sapien a sodales. Aenean commodo eget nisl vel tristique. Nam pharetra vitae ipsum ut finibus. Cras dolor tellus, scelerisque vel felis sed, gravida suscipit felis. Sed in ipsum sit amet sem ultrices pellentesque. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Vivamus malesuada ante ligula, quis ultricies diam efficitur ut. Pellentesque id mauris rutrum, porta eros et, facilisis dui. Ut ut scelerisque quam, eu varius enim. Suspendisse sodales leo id nibh rhoncus, sit amet molestie purus porta. Maecenas viverra nisi mauris, sed bibendum dui dignissim non."
      "Sed non tortor quis risus vehicula pretium ac nec libero. Mauris non laoreet augue. Aliquam sit amet lobortis enim. Vestibulum quis urna nisl. Nulla eros mauris, consectetur eget scelerisque nec, commodo nec neque. Donec efficitur mi ligula, nec vestibulum nisi pharetra ut. Fusce vitae molestie velit. Nunc accumsan purus nec mattis finibus. Fusce laoreet nulla at purus tristique euismod. Integer aliquet finibus tortor vitae lacinia. Aliquam erat volutpat. Nulla eget tortor sollicitudin, vulputate mi non, sodales odio. Praesent arcu magna, consequat a eros interdum, mattis suscipit ligula. Vivamus elit justo, rhoncus sit amet tempus nec, faucibus non massa.";

  char alo[] = "MaRiA, * jOSe";
  int histo[26];
  int i;
  int a;
  a = lorem[0];
//  printf("a = %d\n", a);

  for(i=0; i<26; i++){
    histo[i] = 0;
  }

  for(i=0; i<strlen(lorem); i++){
    a = toupper(lorem[i]);
    if( a>=65 && a<=90){
      printf("%c  = %d\n", a, a-'A');
      histo[a-'A']++;
    }
  }
  printf("\n");
  for(i=0; i<26; i++){
    printf("%d, ", histo[i]);
  }
  printf("\n");


  return 0;
}

