#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>
#include "gm82_runtime.h"
#include "gm82_input.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_script.h"
static int has(const char*n,const char*s){
 if(!n||!s)return 0;size_t nl=strlen(n),sl=strlen(s);
 for(size_t i=0;i+sl<=nl;i++){size_t j=0;for(;j<sl;j++)if(tolower((unsigned char)n[i+j])!=tolower((unsigned char)s[j]))break;if(j==sl)return 1;}return 0;}
static int run_one(const char*path){
 FILE*f=fopen(path,"rb");if(!f)return 0;fseek(f,0,SEEK_END);long sz=ftell(f);fseek(f,0,SEEK_SET);
 uint8_t*buf=malloc(sz);fread(buf,1,sz,f);fclose(f);
 gm82_decoded_sprite_list S;gm82_decoded_sprite_list_init(&S);
 gm82_decoded_background_list B;gm82_decoded_background_list_init(&B);
 gm82_decoded_object_list O;gm82_decoded_object_list_init(&O);
 gm82_decoded_room_list R;gm82_decoded_room_list_init(&R);
 gm82_script_list SCR;gm82_decode_scripts_from_gmk(buf,sz,&SCR);
 gm82_decode_sprites_from_file(path,&S);gm82_decode_backgrounds_from_file(path,&B);
 gm82_decode_objects_from_gmk(buf,sz,&O);gm82_decode_rooms_from_gmk(buf,sz,&R);
 gm82_runtime rt;gm82_runtime_init(&rt);gm82_runtime_bind_assets(&rt,&O,&S,&B,&R,NULL);
 gm82_runtime_bind_scripts(&rt,&SCR);
 gm82_input_state in;gm82_input_init(&in);gm82_input_bind_global(&in);
 if(!gm82_runtime_goto_room(&rt,0)){printf("%s FAIL\n",path);free(buf);return 0;}
 int p=-1;double x0=0;
 for(int i=0;i<rt.instance_count;i++){
  int oi=rt.instances[i].object_index;
  if(oi<0||oi>=O.count||!O.items[oi].name)continue;
  const char*n=O.items[oi].name;
  if(has(n,"pierde")||has(n,"trans"))continue;
  if((has(n,"player")||has(n,"mario")||has(n,"link")||has(n,"fantasma"))&&p<0){p=i;x0=rt.instances[i].x;}
 }
 for(int f=0;f<30;f++){gm82_input_begin_frame(&in);gm82_input_key_down(&in,39);gm82_runtime_step(&rt);}
 double x1=p>=0?rt.instances[p].x:0;
 int moved=p>=0&&(x1>x0+2||x1<x0-2);
 int W=320,H=240;uint8_t*rgba=calloc((size_t)W*H*4,1);
 gm82_runtime_draw(&rt,rgba,W,H);
 int lit=0;for(int i=0;i<W*H;i++)if(rgba[i*4]>30)lit++;
 printf("%s delta=%.0f lit=%d %s %s\n",path,x1-x0,lit,moved?"MOVED":"STILL",lit>100?"DRAW_OK":"DARK");
 free(rgba);free(buf);return moved&&lit>100;
}
int main(){
 const char*gs[]={"app/src/main/assets/www/samples/mario_bros.gmk","app/src/main/assets/www/samples/plataformas.gmk","app/src/main/assets/www/samples/shooter.gmk","app/src/main/assets/www/samples/zelda.gmk",NULL};
 int ok=0;for(int i=0;gs[i];i++)if(run_one(gs[i]))ok++;
 printf("SUMMARY %d/4\n",ok);return ok==4?0:1;
}
