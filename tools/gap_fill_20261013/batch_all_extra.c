/* --- gm82core BATCH ALL --- */
void gm82_gml_set_last_string(const char *s);
gm82_runtime *gm82_gml_get_runtime(void);
gm82_instance *gm82_gml_get_self(void);
gm82_instance *gm82_gml_get_other(void);
static double gm82_clampf(double v,double a,double b){ return v<a?a:(v>b?b:v); }
double gml_color_blend(double c1, double c2, double t) {
    t=gm82_clampf(t,0,1); int a=(int)c1,b=(int)c2;
    int r=(int)(((a&255)*(1-t))+((b&255)*t));
    int g=(int)((((a>>8)&255)*(1-t))+(((b>>8)&255)*t));
    int bl=(int)((((a>>16)&255)*(1-t))+(((b>>16)&255)*t));
    return (double)((r&255)|((g&255)<<8)|((bl&255)<<16));
}
double gml_color_get_luminance(double c){ int v=(int)c; return 0.2126*(v&255)+0.7152*((v>>8)&255)+0.0722*((v>>16)&255); }
double gml_gauss_range(double a, double b) {
    double m=(a+b)*0.5, d=fabs(b-a)/6.0;
    double u1=((double)rand()+1)/((double)RAND_MAX+2), u2=((double)rand()+1)/((double)RAND_MAX+2);
    double z=sqrt(-2*log(u1))*cos(2*3.14159265358979323846*u2);
    return gm82_clampf(m+z*d, a<b?a:b, a>b?a:b);
}
double gml_envelerp(double a, double b, double t){ t=gm82_clampf(t,0,1); t=t*t*(3-2*t); return a+(b-a)*t; }
double gml_make_color_hsv_standard(double h,double s,double v) {
    h=fmod(h,360.0); if(h<0)h+=360; s=gm82_clampf(s,0,1); v=gm82_clampf(v,0,1);
    double c=v*s, x=c*(1-fabs(fmod(h/60.0,2)-1)), m=v-c; double r=0,g=0,b=0;
    if(h<60){r=c;g=x;} else if(h<120){r=x;g=c;} else if(h<180){g=c;b=x;} else if(h<240){g=x;b=c;} else if(h<300){r=x;b=c;} else {r=c;b=x;}
    int R=(int)((r+m)*255),G=(int)((g+m)*255),B=(int)((b+m)*255);
    return (double)((R&255)|((G&255)<<8)|((B&255)<<16));
}
double gml_merge_color_corrected(double c1,double c2,double t){ return gml_color_blend(c1,c2,t); }
double gml_irandom_fresh(double x){ static int last=-1; int n=(int)x; if(n<=0)return 0; int v; do{v=rand()%(n+1);}while(v==last&&n>0); last=v; return (double)v; }
double gml_is_undefined(double v){ (void)v; return 0.0; }
double gml_outside_room(void){ gm82_instance *s=gm82_gml_get_self(); if(!s) return 0; return (s->x<0||s->y<0||s->x>640||s->y>480)?1.0:0.0; }
double gml_position_free(double x,double y){ return gml_place_free(x,y); }
double gml_collision_check_fast(double obj, double dist){ gm82_instance *s=gm82_gml_get_self(); if(!s) return 0; if(gml_instance_nearest(s->x,s->y,obj)<0) return 0; return (gml_distance_to_object(obj)<=dist)?1.0:0.0; }
double gml_path_ease(double t,double kind){ (void)kind; t=gm82_clampf(t,0,1); return t*t*(3-2*t); }
double gml_object_other_is_child_of(double parent){ gm82_instance *o=gm82_gml_get_other(); if(!o) return 0; return ((int32_t)o->object_index==(int32_t)parent)?1.0:0.0; }
double gml_instance_create_moving_ext(double x,double y,double obj,double sp,double dir,double grav,double gdir){ return gml_instance_create_moving(x,y,obj,sp,dir,grav,gdir); }
double gml_instance_some(double obj){ gm82_runtime *rt=gm82_gml_get_runtime(); if(!rt) return -4; int32_t oi=(int32_t)obj; int n=0; for(int i=0;i<rt->instance_count;i++) if(rt->instances[i].alive&&(oi<0||rt->instances[i].object_index==oi)) n++; if(n<=0) return -4; int picki=rand()%n,c=0; for(int i=0;i<rt->instance_count;i++){ if(!rt->instances[i].alive) continue; if(oi>=0&&rt->instances[i].object_index!=oi) continue; if(c==picki) return (double)rt->instances[i].id; c++; } return -4; }
double gml_filename_remove_ext(const char *s){ static char out[512]; out[0]=0; if(!s){gm82_gml_set_last_string(out);return 0;} strncpy(out,s,sizeof(out)-1); out[sizeof(out)-1]=0; char *dot=strrchr(out,'.'); if(dot)*dot=0; gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_string_ord_at(const char *s,double idx){ if(!s) return 0; int i=(int)idx-1; if(i<0||!s[i]) return 0; return (double)(unsigned char)s[i]; }
double gml_string_hexdigits(const char *s){ static char out[2048]; size_t j=0; if(!s){out[0]=0;gm82_gml_set_last_string(out);return 0;} for(size_t i=0;s[i]&&j+1<sizeof(out);i++){ char c=s[i]; if((c>='0'&&c<='9')||(c>='a'&&c<='f')||(c>='A'&&c<='F')) out[j++]=c;} out[j]=0; gm82_gml_set_last_string(out); return (double)j; }
double gml_string_number(const char *s){ static char out[256]; size_t j=0; if(!s){out[0]=0;gm82_gml_set_last_string(out);return 0;} for(size_t i=0;s[i]&&j+1<sizeof(out);i++) if((s[i]>='0'&&s[i]<='9')||s[i]=='.'||s[i]=='-') out[j++]=s[i]; out[j]=0; gm82_gml_set_last_string(out); return atof(out); }
double gml_string_copy_end(const char *s,double count){ static char out[2048]; out[0]=0; if(!s){gm82_gml_set_last_string(out);return 0;} size_t n=strlen(s); int c=(int)count; if(c<0)c=0; if((size_t)c>n)c=(int)n; memcpy(out,s+n-c,(size_t)c); out[c]=0; gm82_gml_set_last_string(out); return (double)c; }
double gml_string_delete_end(const char *s,double count){ static char out[2048]; out[0]=0; if(!s){gm82_gml_set_last_string(out);return 0;} size_t n=strlen(s); int c=(int)count; if(c<0)c=0; if((size_t)c>n)c=(int)n; size_t keep=n-(size_t)c; memcpy(out,s,keep); out[keep]=0; gm82_gml_set_last_string(out); return (double)keep; }
double gml_string_truncate(const char *s,double maxn){ static char out[2048]; out[0]=0; if(!s){gm82_gml_set_last_string(out);return 0;} size_t n=strlen(s); size_t m=(size_t)maxn; if(m>sizeof(out)-1)m=sizeof(out)-1; if(m>n)m=n; memcpy(out,s,m); out[m]=0; gm82_gml_set_last_string(out); return (double)m; }
double gml_string_magnitude(double n){ static char out[64]; if(n==0){strcpy(out,"0");gm82_gml_set_last_string(out);return 1;} snprintf(out,sizeof(out),"%.0f",fabs(n)); gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_str_cat(const char *a,const char *b){ static char out[4096]; snprintf(out,sizeof(out),"%s%s",a?a:"",b?b:""); gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_str_sep(const char *a,const char *sep,const char *b){ static char out[4096]; snprintf(out,sizeof(out),"%s%s%s",a?a:"",sep?sep:"",b?b:""); gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_string_better(double v){ static char out[64]; snprintf(out,sizeof(out),"%g",v); gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_directory_previous(const char *path){ static char out[512]; out[0]=0; if(!path){gm82_gml_set_last_string(out);return 0;} strncpy(out,path,sizeof(out)-1); out[sizeof(out)-1]=0; size_t n=strlen(out); while(n>0&&(out[n-1]=='/'||out[n-1]=='\\')) out[--n]=0; char *slash=strrchr(out,'/'); char *bslash=strrchr(out,'\\'); char *cut=slash; if(bslash&&(!cut||bslash>cut)) cut=bslash; if(cut)*cut=0; else out[0]=0; gm82_gml_set_last_string(out); return (double)strlen(out); }
double gml_pick(double x){ return x; }
double gml_unpick(double x){ return x; }
double gml_date_get_timestamp(void){ return (double)time(NULL); }
static const char *GM82CORE_STUBS[] = {
  "animation_pingpong", "animation_stop", "array_from_string", "background_find", "bigchoose", "bigchoose_clear", "bigchoose_get", "bigchoose_weighted", "bigchoose_weighted_get", "choose_weighted", "code_compile", "code_destroy", "code_execute", "code_exists", "code_get_argcount", "code_return", "draw_background_tiled_extra", "draw_self_as", "draw_self_blend", "draw_self_ext", "draw_self_floored", "draw_setb", "draw_setf", "draw_spotlight", "draw_sprite_part_centered", "draw_sprite_part_extra", "draw_sprite_tiled_extra", "ds_bag_add", "ds_bag_clear", "ds_bag_create", "ds_bag_destroy", "ds_bag_empty", "ds_bag_grab", "ds_bag_quick", "ds_bag_remove", "ds_bag_size", "ds_grid_set_many", "ds_list_all", "ds_list_any", "ds_list_concat", "ds_list_contains_ext", "ds_list_equal", "ds_list_filter", "ds_list_foreach", "ds_list_map", "ds_list_str", "ds_list_union", "ds_map_read_ini", "ds_map_read_ini_string", "ds_map_read_safe", "ds_map_set", "ds_map_set_many", "ds_map_write_ini", "ds_map_write_ini_string", "ds_priority_add_many", "dslist", "dsmap", "dss_destroy", "dss_get_type", "dss_grid_create", "dss_list_create", "dss_map_create", "dss_priority_create", "dss_queue_create", "dss_stack_create", "event_alarm", "event_beginstep", "event_draw", "event_endstep", "event_inherit_object", "event_step", "event_trigger", "execute_program_async", "execute_program_async_result", "execute_program_silent", "extension_detect", "file_find_list", "file_text_writelf", "font_add_file", "font_add_winui", "font_find", "get_frametime_usage", "get_open_filename_ext", "get_save_filename_ext", "global_array_from_string", "include_file_get_buffer", "instance_assign_groups", "instance_create_depth_moving_ext", "instance_place_list", "instance_position_list", "instances_place", "instances_position", "keyboard_get_keyname", "match_any", "match_exact", "match_found", "match_not_any", "match_not_exact", "match_not_some", "match_some", "message_default", "mouse_back_button", "mouse_check_direct", "mouse_forward_button", "mouse_in_window", "move_and_collide", "move_contact_solid_hv", "move_towards_gravity", "move_towards_jump", "object_find", "path_find", "path_get_approximate_pos", "path_get_height", "path_get_width", "place_meetings", "position_meetings", "registry_read_dword", "registry_read_sz", "registry_write_dword", "sound_find", "string_justify", "string_replace_many", "string_wrap", "tile_add_ext", "tile_find_anywhere", "timeline_find", "url_open", "window_has_focus", "date_get_moon_phase", "date_is_easter", "datetime_current_filename", "distance_to_path", "room_find", "sprite_find"
};
static const int GM82CORE_STUB_N = (int)(sizeof(GM82CORE_STUBS)/sizeof(GM82CORE_STUBS[0]));
int gm82_gm82core_try_stub(const char *id, double *out) {
    if (!id || !out) return 0;
    for (int i = 0; i < GM82CORE_STUB_N; i++)
        if (strcmp(id, GM82CORE_STUBS[i]) == 0) { *out = 0.0; return 1; }
    return 0;
}
