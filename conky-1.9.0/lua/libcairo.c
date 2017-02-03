/*
** Lua binding: cairo
** Generated automatically by tolua++-1.0.93 on Thu May  3 14:31:55 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_cairo_open (lua_State* tolua_S);

#include <cairo-features.h>
#include <cairo-deprecated.h>
#include <cairo.h>
#include <cairo-xlib.h>
#include <X11/Xlib.h>
#include "libcairo-helper.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_cairo_user_scaled_font_render_glyph_func_t (lua_State* tolua_S)
{
 cairo_user_scaled_font_render_glyph_func_t* self = (cairo_user_scaled_font_render_glyph_func_t*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Drawable (lua_State* tolua_S)
{
 Drawable* self = (Drawable*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cairo_user_scaled_font_init_func_t (lua_State* tolua_S)
{
 cairo_user_scaled_font_init_func_t* self = (cairo_user_scaled_font_init_func_t*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cairo_user_scaled_font_text_to_glyphs_func_t (lua_State* tolua_S)
{
 cairo_user_scaled_font_text_to_glyphs_func_t* self = (cairo_user_scaled_font_text_to_glyphs_func_t*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_cairo_user_scaled_font_unicode_to_glyph_func_t (lua_State* tolua_S)
{
 cairo_user_scaled_font_unicode_to_glyph_func_t* self = (cairo_user_scaled_font_unicode_to_glyph_func_t*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"cairo_text_cluster_t");
 tolua_usertype(tolua_S,"cairo_user_scaled_font_init_func_t");
 tolua_usertype(tolua_S,"Screen");
 tolua_usertype(tolua_S,"cairo_read_func_t");
 tolua_usertype(tolua_S,"cairo_write_func_t");
 tolua_usertype(tolua_S,"_cairo_surface");
 tolua_usertype(tolua_S,"Drawable");
 tolua_usertype(tolua_S,"_cairo_font_options");
 tolua_usertype(tolua_S,"cairo_path_t");
 tolua_usertype(tolua_S,"cairo_user_scaled_font_unicode_to_glyph_func_t");
 tolua_usertype(tolua_S,"_cairo_pattern");
 tolua_usertype(tolua_S,"cairo_destroy_func_t");
 tolua_usertype(tolua_S,"Visual");
 tolua_usertype(tolua_S,"cairo_text_extents_t");
 tolua_usertype(tolua_S,"_cairo_path_data_t");
 tolua_usertype(tolua_S,"cairo_user_scaled_font_render_glyph_func_t");
 tolua_usertype(tolua_S,"_cairo_scaled_font");
 tolua_usertype(tolua_S,"_cairo_font_face");
 tolua_usertype(tolua_S,"cairo_user_scaled_font_text_to_glyphs_func_t");
 tolua_usertype(tolua_S,"cairo_rectangle_list_t");
 tolua_usertype(tolua_S,"Pixmap");
 tolua_usertype(tolua_S,"cairo_font_extents_t");
 tolua_usertype(tolua_S,"_cairo");
 tolua_usertype(tolua_S,"cairo_rectangle_t");
 tolua_usertype(tolua_S,"Display");
 tolua_usertype(tolua_S,"cairo_user_data_key_t");
 tolua_usertype(tolua_S,"cairo_matrix_t");
 tolua_usertype(tolua_S,"cairo_glyph_t");
}

/* get function: xx of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_xx
static int tolua_get_cairo_matrix_t_xx(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xx'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xx);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xx of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_xx
static int tolua_set_cairo_matrix_t_xx(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xx'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xx = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yx of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_yx
static int tolua_get_cairo_matrix_t_yx(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yx'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yx);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yx of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_yx
static int tolua_set_cairo_matrix_t_yx(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yx'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yx = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: xy of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_xy
static int tolua_get_cairo_matrix_t_xy(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xy'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->xy);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: xy of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_xy
static int tolua_set_cairo_matrix_t_xy(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'xy'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->xy = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: yy of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_yy
static int tolua_get_cairo_matrix_t_yy(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yy'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->yy);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: yy of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_yy
static int tolua_set_cairo_matrix_t_yy(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'yy'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->yy = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x0 of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_x0
static int tolua_get_cairo_matrix_t_x0(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x0 of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_x0
static int tolua_set_cairo_matrix_t_x0(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y0 of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_matrix_t_y0
static int tolua_get_cairo_matrix_t_y0(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y0'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y0);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y0 of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_matrix_t_y0
static int tolua_set_cairo_matrix_t_y0(lua_State* tolua_S)
{
  cairo_matrix_t* self = (cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y0'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y0 = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_cairo_matrix_t of class  cairo_matrix_t */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_t_create00
static int tolua_cairo_cairo_matrix_t_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   tolua_outside cairo_matrix_t* tolua_ret = (tolua_outside cairo_matrix_t*)  create_cairo_matrix_t();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_matrix_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: unused of class  cairo_user_data_key_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_user_data_key_t_unused
static int tolua_get_cairo_user_data_key_t_unused(lua_State* tolua_S)
{
  cairo_user_data_key_t* self = (cairo_user_data_key_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'unused'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->unused);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: unused of class  cairo_user_data_key_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_user_data_key_t_unused
static int tolua_set_cairo_user_data_key_t_unused(lua_State* tolua_S)
{
  cairo_user_data_key_t* self = (cairo_user_data_key_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'unused'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->unused = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_create00
static int tolua_cairo_cairo_xlib_surface_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Display",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Drawable",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Visual",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Display* dpy = ((Display*)  tolua_tousertype(tolua_S,1,0));
  Drawable drawable = *((Drawable*)  tolua_tousertype(tolua_S,2,0));
  Visual* visual = ((Visual*)  tolua_tousertype(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_xlib_surface_create(dpy,drawable,visual,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_create_for_bitmap */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_create_for_bitmap00
static int tolua_cairo_cairo_xlib_surface_create_for_bitmap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Display",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Pixmap",0,&tolua_err)) ||
     !tolua_isusertype(tolua_S,3,"Screen",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Display* dpy = ((Display*)  tolua_tousertype(tolua_S,1,0));
  Pixmap bitmap = *((Pixmap*)  tolua_tousertype(tolua_S,2,0));
  Screen* screen = ((Screen*)  tolua_tousertype(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_xlib_surface_create_for_bitmap(dpy,bitmap,screen,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_create_for_bitmap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_set_size */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_set_size00
static int tolua_cairo_cairo_xlib_surface_set_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_xlib_surface_set_size(surface,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_set_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_set_drawable */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_set_drawable00
static int tolua_cairo_cairo_xlib_surface_set_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"Drawable",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  Drawable drawable = *((Drawable*)  tolua_tousertype(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_xlib_surface_set_drawable(surface,drawable,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_set_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_display */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_display00
static int tolua_cairo_cairo_xlib_surface_get_display00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   Display* tolua_ret = (Display*)  cairo_xlib_surface_get_display(surface);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Display");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_drawable */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_drawable00
static int tolua_cairo_cairo_xlib_surface_get_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   Drawable tolua_ret = (Drawable)  cairo_xlib_surface_get_drawable(surface);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Drawable)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Drawable");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Drawable));
     tolua_pushusertype(tolua_S,tolua_obj,"Drawable");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_screen */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_screen00
static int tolua_cairo_cairo_xlib_surface_get_screen00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   Screen* tolua_ret = (Screen*)  cairo_xlib_surface_get_screen(surface);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Screen");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_screen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_visual */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_visual00
static int tolua_cairo_cairo_xlib_surface_get_visual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   Visual* tolua_ret = (Visual*)  cairo_xlib_surface_get_visual(surface);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Visual");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_visual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_depth */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_depth00
static int tolua_cairo_cairo_xlib_surface_get_depth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_xlib_surface_get_depth(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_depth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_width */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_width00
static int tolua_cairo_cairo_xlib_surface_get_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_xlib_surface_get_width(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_xlib_surface_get_height */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_xlib_surface_get_height00
static int tolua_cairo_cairo_xlib_surface_get_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_xlib_surface_get_height(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_xlib_surface_get_height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_version */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_version00
static int tolua_cairo_cairo_version00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int tolua_ret = (int)  cairo_version();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_version'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_version_string */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_version_string00
static int tolua_cairo_cairo_version_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const char* tolua_ret = (const char*)  cairo_version_string();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_version_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_create00
static int tolua_cairo_cairo_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* target = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo* tolua_ret = ( struct _cairo*)  cairo_create(target);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_reference */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_reference00
static int tolua_cairo_cairo_reference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo* tolua_ret = ( struct _cairo*)  cairo_reference(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_reference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_destroy00
static int tolua_cairo_cairo_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_destroy(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_reference_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_reference_count00
static int tolua_cairo_cairo_get_reference_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  cairo_get_reference_count(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_reference_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_user_data00
static int tolua_cairo_cairo_get_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  {
   void* tolua_ret = (void*)  cairo_get_user_data(cr,key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_user_data00
static int tolua_cairo_cairo_set_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cairo_destroy_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  void* user_data = ((void*)  tolua_touserdata(tolua_S,3,0));
  cairo_destroy_func_t destroy = *((cairo_destroy_func_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_set_user_data(cr,key,user_data,destroy);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_save */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_save00
static int tolua_cairo_cairo_save00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_save(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_save'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_restore */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_restore00
static int tolua_cairo_cairo_restore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_restore(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_restore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_push_group */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_push_group00
static int tolua_cairo_cairo_push_group00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_push_group(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_push_group'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_push_group_with_content */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_push_group_with_content00
static int tolua_cairo_cairo_push_group_with_content00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_content_t content = ((cairo_content_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_push_group_with_content(cr,content);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_push_group_with_content'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pop_group */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pop_group00
static int tolua_cairo_cairo_pop_group00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pop_group(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pop_group'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pop_group_to_source */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pop_group_to_source00
static int tolua_cairo_cairo_pop_group_to_source00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_pop_group_to_source(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pop_group_to_source'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_operator */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_operator00
static int tolua_cairo_cairo_set_operator00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_operator_t op = ((cairo_operator_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_operator(cr,op);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_operator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_source */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_source00
static int tolua_cairo_cairo_set_source00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_pattern* source = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_source(cr,source);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_source'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_source_rgb */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_source_rgb00
static int tolua_cairo_cairo_set_source_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double red = ((double)  tolua_tonumber(tolua_S,2,0));
  double green = ((double)  tolua_tonumber(tolua_S,3,0));
  double blue = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_set_source_rgb(cr,red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_source_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_source_rgba */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_source_rgba00
static int tolua_cairo_cairo_set_source_rgba00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double red = ((double)  tolua_tonumber(tolua_S,2,0));
  double green = ((double)  tolua_tonumber(tolua_S,3,0));
  double blue = ((double)  tolua_tonumber(tolua_S,4,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_set_source_rgba(cr,red,green,blue,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_source_rgba'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_source_surface */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_source_surface00
static int tolua_cairo_cairo_set_source_surface00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,2,0));
  double x = ((double)  tolua_tonumber(tolua_S,3,0));
  double y = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_set_source_surface(cr,surface,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_source_surface'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_tolerance */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_tolerance00
static int tolua_cairo_cairo_set_tolerance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double tolerance = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_tolerance(cr,tolerance);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_tolerance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_antialias */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_antialias00
static int tolua_cairo_cairo_set_antialias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_antialias_t antialias = ((cairo_antialias_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_antialias(cr,antialias);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_antialias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_fill_rule */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_fill_rule00
static int tolua_cairo_cairo_set_fill_rule00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_fill_rule_t fill_rule = ((cairo_fill_rule_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_fill_rule(cr,fill_rule);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_fill_rule'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_line_width */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_line_width00
static int tolua_cairo_cairo_set_line_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double width = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_line_width(cr,width);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_line_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_line_cap */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_line_cap00
static int tolua_cairo_cairo_set_line_cap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_line_cap_t line_cap = ((cairo_line_cap_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_line_cap(cr,line_cap);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_line_cap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_line_join */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_line_join00
static int tolua_cairo_cairo_set_line_join00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_line_join_t line_join = ((cairo_line_join_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_line_join(cr,line_join);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_line_join'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_dash */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_dash00
static int tolua_cairo_cairo_set_dash00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const double dashes = ((const double)  tolua_tonumber(tolua_S,2,0));
  int num_dashes = ((int)  tolua_tonumber(tolua_S,3,0));
  double offset = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_set_dash(cr,&dashes,num_dashes,offset);
   tolua_pushnumber(tolua_S,(lua_Number)dashes);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_dash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_miter_limit */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_miter_limit00
static int tolua_cairo_cairo_set_miter_limit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double limit = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_miter_limit(cr,limit);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_miter_limit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_translate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_translate00
static int tolua_cairo_cairo_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double tx = ((double)  tolua_tonumber(tolua_S,2,0));
  double ty = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_translate(cr,tx,ty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scale */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scale00
static int tolua_cairo_cairo_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double sx = ((double)  tolua_tonumber(tolua_S,2,0));
  double sy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_scale(cr,sx,sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rotate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rotate00
static int tolua_cairo_cairo_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double angle = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_rotate(cr,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_transform */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_transform00
static int tolua_cairo_cairo_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_transform(cr,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_matrix00
static int tolua_cairo_cairo_set_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_matrix(cr,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_identity_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_identity_matrix00
static int tolua_cairo_cairo_identity_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_identity_matrix(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_identity_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_to_device */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_to_device00
static int tolua_cairo_cairo_user_to_device00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_user_to_device(cr,&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_to_device'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_to_device_distance */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_to_device_distance00
static int tolua_cairo_cairo_user_to_device_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dx = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_user_to_device_distance(cr,&dx,&dy);
   tolua_pushnumber(tolua_S,(lua_Number)dx);
   tolua_pushnumber(tolua_S,(lua_Number)dy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_to_device_distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_device_to_user */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_device_to_user00
static int tolua_cairo_cairo_device_to_user00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_device_to_user(cr,&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_device_to_user'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_device_to_user_distance */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_device_to_user_distance00
static int tolua_cairo_cairo_device_to_user_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dx = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_device_to_user_distance(cr,&dx,&dy);
   tolua_pushnumber(tolua_S,(lua_Number)dx);
   tolua_pushnumber(tolua_S,(lua_Number)dy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_device_to_user_distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_new_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_new_path00
static int tolua_cairo_cairo_new_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_new_path(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_new_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_move_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_move_to00
static int tolua_cairo_cairo_move_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_move_to(cr,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_move_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_new_sub_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_new_sub_path00
static int tolua_cairo_cairo_new_sub_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_new_sub_path(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_new_sub_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_line_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_line_to00
static int tolua_cairo_cairo_line_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_line_to(cr,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_line_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_curve_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_curve_to00
static int tolua_cairo_cairo_curve_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  double x3 = ((double)  tolua_tonumber(tolua_S,6,0));
  double y3 = ((double)  tolua_tonumber(tolua_S,7,0));
  {
   cairo_curve_to(cr,x1,y1,x2,y2,x3,y3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_curve_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_arc */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_arc00
static int tolua_cairo_cairo_arc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double xc = ((double)  tolua_tonumber(tolua_S,2,0));
  double yc = ((double)  tolua_tonumber(tolua_S,3,0));
  double radius = ((double)  tolua_tonumber(tolua_S,4,0));
  double angle1 = ((double)  tolua_tonumber(tolua_S,5,0));
  double angle2 = ((double)  tolua_tonumber(tolua_S,6,0));
  {
   cairo_arc(cr,xc,yc,radius,angle1,angle2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_arc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_arc_negative */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_arc_negative00
static int tolua_cairo_cairo_arc_negative00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double xc = ((double)  tolua_tonumber(tolua_S,2,0));
  double yc = ((double)  tolua_tonumber(tolua_S,3,0));
  double radius = ((double)  tolua_tonumber(tolua_S,4,0));
  double angle1 = ((double)  tolua_tonumber(tolua_S,5,0));
  double angle2 = ((double)  tolua_tonumber(tolua_S,6,0));
  {
   cairo_arc_negative(cr,xc,yc,radius,angle1,angle2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_arc_negative'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rel_move_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rel_move_to00
static int tolua_cairo_cairo_rel_move_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dx = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_rel_move_to(cr,dx,dy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rel_move_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rel_line_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rel_line_to00
static int tolua_cairo_cairo_rel_line_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dx = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_rel_line_to(cr,dx,dy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rel_line_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rel_curve_to */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rel_curve_to00
static int tolua_cairo_cairo_rel_curve_to00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dx1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double dx2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double dy2 = ((double)  tolua_tonumber(tolua_S,5,0));
  double dx3 = ((double)  tolua_tonumber(tolua_S,6,0));
  double dy3 = ((double)  tolua_tonumber(tolua_S,7,0));
  {
   cairo_rel_curve_to(cr,dx1,dy1,dx2,dy2,dx3,dy3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rel_curve_to'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rectangle */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rectangle00
static int tolua_cairo_cairo_rectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  double width = ((double)  tolua_tonumber(tolua_S,4,0));
  double height = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_rectangle(cr,x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_close_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_close_path00
static int tolua_cairo_cairo_close_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_close_path(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_close_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_path_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_path_extents00
static int tolua_cairo_cairo_path_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_path_extents(cr,&x1,&y1,&x2,&y2);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
   tolua_pushnumber(tolua_S,(lua_Number)x2);
   tolua_pushnumber(tolua_S,(lua_Number)y2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_path_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_paint */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_paint00
static int tolua_cairo_cairo_paint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_paint(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_paint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_paint_with_alpha */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_paint_with_alpha00
static int tolua_cairo_cairo_paint_with_alpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_paint_with_alpha(cr,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_paint_with_alpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_mask */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_mask00
static int tolua_cairo_cairo_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_mask(cr,pattern);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_mask_surface */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_mask_surface00
static int tolua_cairo_cairo_mask_surface00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,2,0));
  double surface_x = ((double)  tolua_tonumber(tolua_S,3,0));
  double surface_y = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_mask_surface(cr,surface,surface_x,surface_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_mask_surface'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_stroke */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_stroke00
static int tolua_cairo_cairo_stroke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_stroke(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_stroke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_stroke_preserve */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_stroke_preserve00
static int tolua_cairo_cairo_stroke_preserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_stroke_preserve(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_stroke_preserve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_fill */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_fill00
static int tolua_cairo_cairo_fill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_fill(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_fill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_fill_preserve */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_fill_preserve00
static int tolua_cairo_cairo_fill_preserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_fill_preserve(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_fill_preserve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_copy_page */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_copy_page00
static int tolua_cairo_cairo_copy_page00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_copy_page(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_copy_page'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_show_page */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_show_page00
static int tolua_cairo_cairo_show_page00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_show_page(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_show_page'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_in_stroke */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_in_stroke00
static int tolua_cairo_cairo_in_stroke00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
    int tolua_ret = (  int)  cairo_in_stroke(cr,x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_in_stroke'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_in_fill */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_in_fill00
static int tolua_cairo_cairo_in_fill00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
    int tolua_ret = (  int)  cairo_in_fill(cr,x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_in_fill'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_stroke_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_stroke_extents00
static int tolua_cairo_cairo_stroke_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_stroke_extents(cr,&x1,&y1,&x2,&y2);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
   tolua_pushnumber(tolua_S,(lua_Number)x2);
   tolua_pushnumber(tolua_S,(lua_Number)y2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_stroke_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_fill_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_fill_extents00
static int tolua_cairo_cairo_fill_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_fill_extents(cr,&x1,&y1,&x2,&y2);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
   tolua_pushnumber(tolua_S,(lua_Number)x2);
   tolua_pushnumber(tolua_S,(lua_Number)y2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_fill_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_reset_clip */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_reset_clip00
static int tolua_cairo_cairo_reset_clip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_reset_clip(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_reset_clip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_clip */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_clip00
static int tolua_cairo_cairo_clip00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_clip(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_clip'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_clip_preserve */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_clip_preserve00
static int tolua_cairo_cairo_clip_preserve00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_clip_preserve(cr);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_clip_preserve'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_clip_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_clip_extents00
static int tolua_cairo_cairo_clip_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x2 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y2 = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_clip_extents(cr,&x1,&y1,&x2,&y2);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
   tolua_pushnumber(tolua_S,(lua_Number)x2);
   tolua_pushnumber(tolua_S,(lua_Number)y2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_clip_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_t_x
static int tolua_get_cairo_rectangle_t_x(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_t_x
static int tolua_set_cairo_rectangle_t_x(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_t_y
static int tolua_get_cairo_rectangle_t_y(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_t_y
static int tolua_set_cairo_rectangle_t_y(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_t_width
static int tolua_get_cairo_rectangle_t_width(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_t_width
static int tolua_set_cairo_rectangle_t_width(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->width = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_t_height
static int tolua_get_cairo_rectangle_t_height(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  cairo_rectangle_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_t_height
static int tolua_set_cairo_rectangle_t_height(lua_State* tolua_S)
{
  cairo_rectangle_t* self = (cairo_rectangle_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: status of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_list_t_status
static int tolua_get_cairo_rectangle_list_t_status(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'status'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->status);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: status of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_list_t_status
static int tolua_set_cairo_rectangle_list_t_status(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'status'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->status = ((cairo_status_t) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rectangles of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_list_t_rectangles_ptr
static int tolua_get_cairo_rectangle_list_t_rectangles_ptr(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rectangles'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->rectangles,"cairo_rectangle_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rectangles of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_list_t_rectangles_ptr
static int tolua_set_cairo_rectangle_list_t_rectangles_ptr(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rectangles'",NULL);
  if (!tolua_isusertype(tolua_S,2,"cairo_rectangle_t",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->rectangles = ((cairo_rectangle_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: num_rectangles of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_rectangle_list_t_num_rectangles
static int tolua_get_cairo_rectangle_list_t_num_rectangles(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_rectangles'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->num_rectangles);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: num_rectangles of class  cairo_rectangle_list_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_rectangle_list_t_num_rectangles
static int tolua_set_cairo_rectangle_list_t_num_rectangles(lua_State* tolua_S)
{
  cairo_rectangle_list_t* self = (cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_rectangles'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->num_rectangles = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_copy_clip_rectangle_list */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_copy_clip_rectangle_list00
static int tolua_cairo_cairo_copy_clip_rectangle_list00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_rectangle_list_t* tolua_ret = (cairo_rectangle_list_t*)  cairo_copy_clip_rectangle_list(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_rectangle_list_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_copy_clip_rectangle_list'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_rectangle_list_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_rectangle_list_destroy00
static int tolua_cairo_cairo_rectangle_list_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_rectangle_list_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_rectangle_list_t* rectangle_list = ((cairo_rectangle_list_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_rectangle_list_destroy(rectangle_list);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_rectangle_list_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: index of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_glyph_t_unsigned_index
static int tolua_get_cairo_glyph_t_unsigned_index(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'index'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->index);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: index of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_glyph_t_unsigned_index
static int tolua_set_cairo_glyph_t_unsigned_index(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'index'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->index = ((unsigned long)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_glyph_t_x
static int tolua_get_cairo_glyph_t_x(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_glyph_t_x
static int tolua_set_cairo_glyph_t_x(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_glyph_t_y
static int tolua_get_cairo_glyph_t_y(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  cairo_glyph_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_glyph_t_y
static int tolua_set_cairo_glyph_t_y(lua_State* tolua_S)
{
  cairo_glyph_t* self = (cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_glyph_allocate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_glyph_allocate00
static int tolua_cairo_cairo_glyph_allocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   cairo_glyph_t* tolua_ret = (cairo_glyph_t*)  cairo_glyph_allocate(num_glyphs);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_glyph_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_glyph_allocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_glyph_free */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_glyph_free00
static int tolua_cairo_cairo_glyph_free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_glyph_t* glyphs = ((cairo_glyph_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_glyph_free(glyphs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_glyph_free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: num_bytes of class  cairo_text_cluster_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_cluster_t_num_bytes
static int tolua_get_cairo_text_cluster_t_num_bytes(lua_State* tolua_S)
{
  cairo_text_cluster_t* self = (cairo_text_cluster_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_bytes'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->num_bytes);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: num_bytes of class  cairo_text_cluster_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_cluster_t_num_bytes
static int tolua_set_cairo_text_cluster_t_num_bytes(lua_State* tolua_S)
{
  cairo_text_cluster_t* self = (cairo_text_cluster_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_bytes'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->num_bytes = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: num_glyphs of class  cairo_text_cluster_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_cluster_t_num_glyphs
static int tolua_get_cairo_text_cluster_t_num_glyphs(lua_State* tolua_S)
{
  cairo_text_cluster_t* self = (cairo_text_cluster_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_glyphs'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->num_glyphs);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: num_glyphs of class  cairo_text_cluster_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_cluster_t_num_glyphs
static int tolua_set_cairo_text_cluster_t_num_glyphs(lua_State* tolua_S)
{
  cairo_text_cluster_t* self = (cairo_text_cluster_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_glyphs'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->num_glyphs = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_text_cluster_allocate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_text_cluster_allocate00
static int tolua_cairo_cairo_text_cluster_allocate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int num_clusters = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   cairo_text_cluster_t* tolua_ret = (cairo_text_cluster_t*)  cairo_text_cluster_allocate(num_clusters);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_text_cluster_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_text_cluster_allocate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_text_cluster_free */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_text_cluster_free00
static int tolua_cairo_cairo_text_cluster_free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_text_cluster_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_text_cluster_t* clusters = ((cairo_text_cluster_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_text_cluster_free(clusters);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_text_cluster_free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x_bearing of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_x_bearing
static int tolua_get_cairo_text_extents_t_x_bearing(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x_bearing'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x_bearing);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x_bearing of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_x_bearing
static int tolua_set_cairo_text_extents_t_x_bearing(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x_bearing'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x_bearing = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y_bearing of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_y_bearing
static int tolua_get_cairo_text_extents_t_y_bearing(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y_bearing'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y_bearing);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y_bearing of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_y_bearing
static int tolua_set_cairo_text_extents_t_y_bearing(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y_bearing'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y_bearing = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_width
static int tolua_get_cairo_text_extents_t_width(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_width
static int tolua_set_cairo_text_extents_t_width(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->width = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_height
static int tolua_get_cairo_text_extents_t_height(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_height
static int tolua_set_cairo_text_extents_t_height(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x_advance of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_x_advance
static int tolua_get_cairo_text_extents_t_x_advance(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x_advance'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x_advance);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x_advance of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_x_advance
static int tolua_set_cairo_text_extents_t_x_advance(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x_advance'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x_advance = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y_advance of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_text_extents_t_y_advance
static int tolua_get_cairo_text_extents_t_y_advance(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y_advance'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y_advance);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y_advance of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_text_extents_t_y_advance
static int tolua_set_cairo_text_extents_t_y_advance(lua_State* tolua_S)
{
  cairo_text_extents_t* self = (cairo_text_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y_advance'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y_advance = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_cairo_text_extents_t of class  cairo_text_extents_t */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_text_extents_t_create00
static int tolua_cairo_cairo_text_extents_t_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"cairo_text_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   tolua_outside cairo_text_extents_t* tolua_ret = (tolua_outside cairo_text_extents_t*)  create_cairo_text_extents_t();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_text_extents_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: ascent of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_font_extents_t_ascent
static int tolua_get_cairo_font_extents_t_ascent(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ascent'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->ascent);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: ascent of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_font_extents_t_ascent
static int tolua_set_cairo_font_extents_t_ascent(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'ascent'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->ascent = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: descent of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_font_extents_t_descent
static int tolua_get_cairo_font_extents_t_descent(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'descent'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->descent);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: descent of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_font_extents_t_descent
static int tolua_set_cairo_font_extents_t_descent(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'descent'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->descent = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_font_extents_t_height
static int tolua_get_cairo_font_extents_t_height(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_font_extents_t_height
static int tolua_set_cairo_font_extents_t_height(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: max_x_advance of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_font_extents_t_max_x_advance
static int tolua_get_cairo_font_extents_t_max_x_advance(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'max_x_advance'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->max_x_advance);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: max_x_advance of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_font_extents_t_max_x_advance
static int tolua_set_cairo_font_extents_t_max_x_advance(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'max_x_advance'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->max_x_advance = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: max_y_advance of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_font_extents_t_max_y_advance
static int tolua_get_cairo_font_extents_t_max_y_advance(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'max_y_advance'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->max_y_advance);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: max_y_advance of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_font_extents_t_max_y_advance
static int tolua_set_cairo_font_extents_t_max_y_advance(lua_State* tolua_S)
{
  cairo_font_extents_t* self = (cairo_font_extents_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'max_y_advance'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->max_y_advance = ((double)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: create_cairo_font_extents_t of class  cairo_font_extents_t */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_extents_t_create00
static int tolua_cairo_cairo_font_extents_t_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"cairo_font_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   tolua_outside cairo_font_extents_t* tolua_ret = (tolua_outside cairo_font_extents_t*)  create_cairo_font_extents_t();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_font_extents_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_create00
static int tolua_cairo_cairo_font_options_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   struct _cairo_font_options* tolua_ret = ( struct _cairo_font_options*)  cairo_font_options_create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_options");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_copy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_copy00
static int tolua_cairo_cairo_font_options_copy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* original = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_font_options* tolua_ret = ( struct _cairo_font_options*)  cairo_font_options_copy(original);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_options");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_copy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_destroy00
static int tolua_cairo_cairo_font_options_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_options_destroy(options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_status00
static int tolua_cairo_cairo_font_options_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_font_options_status(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_merge */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_merge00
static int tolua_cairo_cairo_font_options_merge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* other = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_font_options_merge(options,other);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_merge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_equal */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_equal00
static int tolua_cairo_cairo_font_options_equal00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* other = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
    int tolua_ret = (  int)  cairo_font_options_equal(options,other);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_equal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_hash */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_hash00
static int tolua_cairo_cairo_font_options_hash00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned long tolua_ret = (unsigned long)  cairo_font_options_hash(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_hash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_set_antialias */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_set_antialias00
static int tolua_cairo_cairo_font_options_set_antialias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  cairo_antialias_t antialias = ((cairo_antialias_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_font_options_set_antialias(options,antialias);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_set_antialias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_get_antialias */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_get_antialias00
static int tolua_cairo_cairo_font_options_get_antialias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_antialias_t tolua_ret = (cairo_antialias_t)  cairo_font_options_get_antialias(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_get_antialias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_set_subpixel_order */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_set_subpixel_order00
static int tolua_cairo_cairo_font_options_set_subpixel_order00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  cairo_subpixel_order_t subpixel_order = ((cairo_subpixel_order_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_font_options_set_subpixel_order(options,subpixel_order);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_set_subpixel_order'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_get_subpixel_order */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_get_subpixel_order00
static int tolua_cairo_cairo_font_options_get_subpixel_order00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_subpixel_order_t tolua_ret = (cairo_subpixel_order_t)  cairo_font_options_get_subpixel_order(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_get_subpixel_order'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_set_hint_style */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_set_hint_style00
static int tolua_cairo_cairo_font_options_set_hint_style00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  cairo_hint_style_t hint_style = ((cairo_hint_style_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_font_options_set_hint_style(options,hint_style);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_set_hint_style'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_get_hint_style */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_get_hint_style00
static int tolua_cairo_cairo_font_options_get_hint_style00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_hint_style_t tolua_ret = (cairo_hint_style_t)  cairo_font_options_get_hint_style(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_get_hint_style'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_set_hint_metrics */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_set_hint_metrics00
static int tolua_cairo_cairo_font_options_set_hint_metrics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  cairo_hint_metrics_t hint_metrics = ((cairo_hint_metrics_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_font_options_set_hint_metrics(options,hint_metrics);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_set_hint_metrics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_options_get_hint_metrics */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_options_get_hint_metrics00
static int tolua_cairo_cairo_font_options_get_hint_metrics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_hint_metrics_t tolua_ret = (cairo_hint_metrics_t)  cairo_font_options_get_hint_metrics(options);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_options_get_hint_metrics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_select_font_face */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_select_font_face00
static int tolua_cairo_cairo_select_font_face00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const char* family = ((const char*)  tolua_tostring(tolua_S,2,0));
  cairo_font_slant_t slant = ((cairo_font_slant_t) (int)  tolua_tonumber(tolua_S,3,0));
  cairo_font_weight_t weight = ((cairo_font_weight_t) (int)  tolua_tonumber(tolua_S,4,0));
  {
   cairo_select_font_face(cr,family,slant,weight);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_select_font_face'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_font_size */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_font_size00
static int tolua_cairo_cairo_set_font_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double size = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_set_font_size(cr,size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_font_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_font_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_font_matrix00
static int tolua_cairo_cairo_set_font_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_font_matrix(cr,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_font_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_font_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_font_matrix00
static int tolua_cairo_cairo_get_font_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_get_font_matrix(cr,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_font_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_font_options */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_font_options00
static int tolua_cairo_cairo_set_font_options00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_font_options(cr,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_font_options'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_font_options */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_font_options00
static int tolua_cairo_cairo_get_font_options00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_get_font_options(cr,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_font_options'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_font_face */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_font_face00
static int tolua_cairo_cairo_set_font_face00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_font_face(cr,font_face);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_font_face'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_font_face */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_font_face00
static int tolua_cairo_cairo_get_font_face00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_font_face* tolua_ret = ( struct _cairo_font_face*)  cairo_get_font_face(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_face");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_font_face'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_set_scaled_font */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_set_scaled_font00
static int tolua_cairo_cairo_set_scaled_font00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_set_scaled_font(cr,scaled_font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_set_scaled_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_scaled_font */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_scaled_font00
static int tolua_cairo_cairo_get_scaled_font00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_scaled_font* tolua_ret = ( struct _cairo_scaled_font*)  cairo_get_scaled_font(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_scaled_font");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_scaled_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_show_text */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_show_text00
static int tolua_cairo_cairo_show_text00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   cairo_show_text(cr,utf8);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_show_text'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_show_glyphs */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_show_glyphs00
static int tolua_cairo_cairo_show_glyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_glyph_t* glyphs = ((const cairo_glyph_t*)  tolua_tousertype(tolua_S,2,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_show_glyphs(cr,glyphs,num_glyphs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_show_glyphs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_show_text_glyphs */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_show_text_glyphs00
static int tolua_cairo_cairo_show_text_glyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"const cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"const cairo_text_cluster_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,2,0));
  int utf8_len = ((int)  tolua_tonumber(tolua_S,3,0));
  const cairo_glyph_t* glyphs = ((const cairo_glyph_t*)  tolua_tousertype(tolua_S,4,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,5,0));
  const cairo_text_cluster_t* clusters = ((const cairo_text_cluster_t*)  tolua_tousertype(tolua_S,6,0));
  int num_clusters = ((int)  tolua_tonumber(tolua_S,7,0));
  cairo_text_cluster_flags_t cluster_flags = ((cairo_text_cluster_flags_t) (int)  tolua_tonumber(tolua_S,8,0));
  {
   cairo_show_text_glyphs(cr,utf8,utf8_len,glyphs,num_glyphs,clusters,num_clusters,cluster_flags);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_show_text_glyphs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_text_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_text_path00
static int tolua_cairo_cairo_text_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   cairo_text_path(cr,utf8);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_text_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_glyph_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_glyph_path00
static int tolua_cairo_cairo_glyph_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_glyph_t* glyphs = ((const cairo_glyph_t*)  tolua_tousertype(tolua_S,2,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_glyph_path(cr,glyphs,num_glyphs);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_glyph_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_text_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_text_extents00
static int tolua_cairo_cairo_text_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cairo_text_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,2,0));
  cairo_text_extents_t* extents = ((cairo_text_extents_t*)  tolua_tousertype(tolua_S,3,0));
  {
   cairo_text_extents(cr,utf8,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_text_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_glyph_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_glyph_extents00
static int tolua_cairo_cairo_glyph_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"cairo_text_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_glyph_t* glyphs = ((const cairo_glyph_t*)  tolua_tousertype(tolua_S,2,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,3,0));
  cairo_text_extents_t* extents = ((cairo_text_extents_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_glyph_extents(cr,glyphs,num_glyphs,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_glyph_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_extents00
static int tolua_cairo_cairo_font_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_font_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_font_extents_t* extents = ((cairo_font_extents_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_font_extents(cr,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_reference */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_reference00
static int tolua_cairo_cairo_font_face_reference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_font_face* tolua_ret = ( struct _cairo_font_face*)  cairo_font_face_reference(font_face);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_face");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_reference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_destroy00
static int tolua_cairo_cairo_font_face_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_face_destroy(font_face);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_get_reference_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_get_reference_count00
static int tolua_cairo_cairo_font_face_get_reference_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  cairo_font_face_get_reference_count(font_face);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_get_reference_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_status00
static int tolua_cairo_cairo_font_face_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_font_face_status(font_face);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_get_type */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_get_type00
static int tolua_cairo_cairo_font_face_get_type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_type_t tolua_ret = (cairo_font_type_t)  cairo_font_face_get_type(font_face);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_get_type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_get_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_get_user_data00
static int tolua_cairo_cairo_font_face_get_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  {
   void* tolua_ret = (void*)  cairo_font_face_get_user_data(font_face,key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_get_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_font_face_set_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_font_face_set_user_data00
static int tolua_cairo_cairo_font_face_set_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cairo_destroy_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  void* user_data = ((void*)  tolua_touserdata(tolua_S,3,0));
  cairo_destroy_func_t destroy = *((cairo_destroy_func_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_font_face_set_user_data(font_face,key,user_data,destroy);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_font_face_set_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_create00
static int tolua_cairo_cairo_scaled_font_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* font_matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  cairo_matrix_t* ctm = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,3,0));
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,4,0));
  {
   struct _cairo_scaled_font* tolua_ret = ( struct _cairo_scaled_font*)  cairo_scaled_font_create(font_face,font_matrix,ctm,options);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_scaled_font");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_reference */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_reference00
static int tolua_cairo_cairo_scaled_font_reference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_scaled_font* tolua_ret = ( struct _cairo_scaled_font*)  cairo_scaled_font_reference(scaled_font);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_scaled_font");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_reference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_destroy00
static int tolua_cairo_cairo_scaled_font_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_scaled_font_destroy(scaled_font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_reference_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_reference_count00
static int tolua_cairo_cairo_scaled_font_get_reference_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  cairo_scaled_font_get_reference_count(scaled_font);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_reference_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_status00
static int tolua_cairo_cairo_scaled_font_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_scaled_font_status(scaled_font);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_type */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_type00
static int tolua_cairo_cairo_scaled_font_get_type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_type_t tolua_ret = (cairo_font_type_t)  cairo_scaled_font_get_type(scaled_font);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_user_data00
static int tolua_cairo_cairo_scaled_font_get_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  {
   void* tolua_ret = (void*)  cairo_scaled_font_get_user_data(scaled_font,key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_set_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_set_user_data00
static int tolua_cairo_cairo_scaled_font_set_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cairo_destroy_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  void* user_data = ((void*)  tolua_touserdata(tolua_S,3,0));
  cairo_destroy_func_t destroy = *((cairo_destroy_func_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_scaled_font_set_user_data(scaled_font,key,user_data,destroy);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_set_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_extents00
static int tolua_cairo_cairo_scaled_font_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_font_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  cairo_font_extents_t* extents = ((cairo_font_extents_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_scaled_font_extents(scaled_font,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_text_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_text_extents00
static int tolua_cairo_cairo_scaled_font_text_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cairo_text_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,2,0));
  cairo_text_extents_t* extents = ((cairo_text_extents_t*)  tolua_tousertype(tolua_S,3,0));
  {
   cairo_scaled_font_text_extents(scaled_font,utf8,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_text_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_glyph_extents */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_glyph_extents00
static int tolua_cairo_cairo_scaled_font_glyph_extents00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"cairo_text_extents_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  const cairo_glyph_t* glyphs = ((const cairo_glyph_t*)  tolua_tousertype(tolua_S,2,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,3,0));
  cairo_text_extents_t* extents = ((cairo_text_extents_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_scaled_font_glyph_extents(scaled_font,glyphs,num_glyphs,extents);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_glyph_extents'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_text_to_glyphs */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_text_to_glyphs00
static int tolua_cairo_cairo_scaled_font_text_to_glyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,6,"cairo_glyph_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,8,"cairo_text_cluster_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  const char* utf8 = ((const char*)  tolua_tostring(tolua_S,4,0));
  int utf8_len = ((int)  tolua_tonumber(tolua_S,5,0));
  cairo_glyph_t* glyphs = ((cairo_glyph_t*)  tolua_tousertype(tolua_S,6,0));
  int num_glyphs = ((int)  tolua_tonumber(tolua_S,7,0));
  cairo_text_cluster_t* clusters = ((cairo_text_cluster_t*)  tolua_tousertype(tolua_S,8,0));
  int num_clusters = ((int)  tolua_tonumber(tolua_S,9,0));
  cairo_text_cluster_flags_t cluster_flags = ((cairo_text_cluster_flags_t) (int)  tolua_tonumber(tolua_S,10,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_scaled_font_text_to_glyphs(scaled_font,x,y,utf8,utf8_len,&glyphs,&num_glyphs,&clusters,&num_clusters,&cluster_flags);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
    tolua_pushusertype(tolua_S,(void*)glyphs,"cairo_glyph_t");
   tolua_pushnumber(tolua_S,(lua_Number)num_glyphs);
    tolua_pushusertype(tolua_S,(void*)clusters,"cairo_text_cluster_t");
   tolua_pushnumber(tolua_S,(lua_Number)num_clusters);
   tolua_pushnumber(tolua_S,(lua_Number)cluster_flags);
  }
 }
 return 6;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_text_to_glyphs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_font_face */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_font_face00
static int tolua_cairo_cairo_scaled_font_get_font_face00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_font_face* tolua_ret = ( struct _cairo_font_face*)  cairo_scaled_font_get_font_face(scaled_font);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_face");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_font_face'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_font_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_font_matrix00
static int tolua_cairo_cairo_scaled_font_get_font_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* font_matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_scaled_font_get_font_matrix(scaled_font,font_matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_font_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_ctm */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_ctm00
static int tolua_cairo_cairo_scaled_font_get_ctm00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* ctm = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_scaled_font_get_ctm(scaled_font,ctm);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_ctm'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_scale_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_scale_matrix00
static int tolua_cairo_cairo_scaled_font_get_scale_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* scale_matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_scaled_font_get_scale_matrix(scaled_font,scale_matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_scale_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_scaled_font_get_font_options */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_scaled_font_get_font_options00
static int tolua_cairo_cairo_scaled_font_get_font_options00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_scaled_font",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_scaled_font* scaled_font = (( struct _cairo_scaled_font*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_scaled_font_get_font_options(scaled_font,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_scaled_font_get_font_options'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_toy_font_face_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_toy_font_face_create00
static int tolua_cairo_cairo_toy_font_face_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* family = ((const char*)  tolua_tostring(tolua_S,1,0));
  cairo_font_slant_t slant = ((cairo_font_slant_t) (int)  tolua_tonumber(tolua_S,2,0));
  cairo_font_weight_t weight = ((cairo_font_weight_t) (int)  tolua_tonumber(tolua_S,3,0));
  {
   struct _cairo_font_face* tolua_ret = ( struct _cairo_font_face*)  cairo_toy_font_face_create(family,slant,weight);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_face");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_toy_font_face_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_toy_font_face_get_family */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_toy_font_face_get_family00
static int tolua_cairo_cairo_toy_font_face_get_family00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   const char* tolua_ret = (const char*)  cairo_toy_font_face_get_family(font_face);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_toy_font_face_get_family'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_toy_font_face_get_slant */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_toy_font_face_get_slant00
static int tolua_cairo_cairo_toy_font_face_get_slant00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_slant_t tolua_ret = (cairo_font_slant_t)  cairo_toy_font_face_get_slant(font_face);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_toy_font_face_get_slant'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_toy_font_face_get_weight */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_toy_font_face_get_weight00
static int tolua_cairo_cairo_toy_font_face_get_weight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_font_weight_t tolua_ret = (cairo_font_weight_t)  cairo_toy_font_face_get_weight(font_face);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_toy_font_face_get_weight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_create00
static int tolua_cairo_cairo_user_font_face_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   struct _cairo_font_face* tolua_ret = ( struct _cairo_font_face*)  cairo_user_font_face_create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_font_face");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_set_init_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_set_init_func00
static int tolua_cairo_cairo_user_font_face_set_init_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cairo_user_scaled_font_init_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  cairo_user_scaled_font_init_func_t init_func = *((cairo_user_scaled_font_init_func_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_user_font_face_set_init_func(font_face,init_func);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_set_init_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_set_render_glyph_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_set_render_glyph_func00
static int tolua_cairo_cairo_user_font_face_set_render_glyph_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cairo_user_scaled_font_render_glyph_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  cairo_user_scaled_font_render_glyph_func_t render_glyph_func = *((cairo_user_scaled_font_render_glyph_func_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_user_font_face_set_render_glyph_func(font_face,render_glyph_func);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_set_render_glyph_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_set_text_to_glyphs_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_set_text_to_glyphs_func00
static int tolua_cairo_cairo_user_font_face_set_text_to_glyphs_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cairo_user_scaled_font_text_to_glyphs_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  cairo_user_scaled_font_text_to_glyphs_func_t text_to_glyphs_func = *((cairo_user_scaled_font_text_to_glyphs_func_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_user_font_face_set_text_to_glyphs_func(font_face,text_to_glyphs_func);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_set_text_to_glyphs_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_set_unicode_to_glyph_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_set_unicode_to_glyph_func00
static int tolua_cairo_cairo_user_font_face_set_unicode_to_glyph_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cairo_user_scaled_font_unicode_to_glyph_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  cairo_user_scaled_font_unicode_to_glyph_func_t unicode_to_glyph_func = *((cairo_user_scaled_font_unicode_to_glyph_func_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_user_font_face_set_unicode_to_glyph_func(font_face,unicode_to_glyph_func);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_set_unicode_to_glyph_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_get_init_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_get_init_func00
static int tolua_cairo_cairo_user_font_face_get_init_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_user_scaled_font_init_func_t tolua_ret = (cairo_user_scaled_font_init_func_t)  cairo_user_font_face_get_init_func(font_face);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cairo_user_scaled_font_init_func_t)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_init_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cairo_user_scaled_font_init_func_t));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_init_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_get_init_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_get_render_glyph_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_get_render_glyph_func00
static int tolua_cairo_cairo_user_font_face_get_render_glyph_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_user_scaled_font_render_glyph_func_t tolua_ret = (cairo_user_scaled_font_render_glyph_func_t)  cairo_user_font_face_get_render_glyph_func(font_face);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cairo_user_scaled_font_render_glyph_func_t)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_render_glyph_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cairo_user_scaled_font_render_glyph_func_t));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_render_glyph_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_get_render_glyph_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_get_text_to_glyphs_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_get_text_to_glyphs_func00
static int tolua_cairo_cairo_user_font_face_get_text_to_glyphs_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_user_scaled_font_text_to_glyphs_func_t tolua_ret = (cairo_user_scaled_font_text_to_glyphs_func_t)  cairo_user_font_face_get_text_to_glyphs_func(font_face);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cairo_user_scaled_font_text_to_glyphs_func_t)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_text_to_glyphs_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cairo_user_scaled_font_text_to_glyphs_func_t));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_text_to_glyphs_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_get_text_to_glyphs_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_user_font_face_get_unicode_to_glyph_func */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_user_font_face_get_unicode_to_glyph_func00
static int tolua_cairo_cairo_user_font_face_get_unicode_to_glyph_func00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_font_face",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_font_face* font_face = (( struct _cairo_font_face*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_user_scaled_font_unicode_to_glyph_func_t tolua_ret = (cairo_user_scaled_font_unicode_to_glyph_func_t)  cairo_user_font_face_get_unicode_to_glyph_func(font_face);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((cairo_user_scaled_font_unicode_to_glyph_func_t)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_unicode_to_glyph_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(cairo_user_scaled_font_unicode_to_glyph_func_t));
     tolua_pushusertype(tolua_S,tolua_obj,"cairo_user_scaled_font_unicode_to_glyph_func_t");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_user_font_face_get_unicode_to_glyph_func'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_operator */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_operator00
static int tolua_cairo_cairo_get_operator00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_operator_t tolua_ret = (cairo_operator_t)  cairo_get_operator(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_operator'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_source */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_source00
static int tolua_cairo_cairo_get_source00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_get_source(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_source'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_tolerance */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_tolerance00
static int tolua_cairo_cairo_get_tolerance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   double tolua_ret = (double)  cairo_get_tolerance(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_tolerance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_antialias */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_antialias00
static int tolua_cairo_cairo_get_antialias00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_antialias_t tolua_ret = (cairo_antialias_t)  cairo_get_antialias(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_antialias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_has_current_point */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_has_current_point00
static int tolua_cairo_cairo_has_current_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
    int tolua_ret = (  int)  cairo_has_current_point(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_has_current_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_current_point */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_current_point00
static int tolua_cairo_cairo_get_current_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_get_current_point(cr,&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_current_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_fill_rule */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_fill_rule00
static int tolua_cairo_cairo_get_fill_rule00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_fill_rule_t tolua_ret = (cairo_fill_rule_t)  cairo_get_fill_rule(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_fill_rule'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_line_width */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_line_width00
static int tolua_cairo_cairo_get_line_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   double tolua_ret = (double)  cairo_get_line_width(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_line_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_line_cap */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_line_cap00
static int tolua_cairo_cairo_get_line_cap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_line_cap_t tolua_ret = (cairo_line_cap_t)  cairo_get_line_cap(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_line_cap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_line_join */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_line_join00
static int tolua_cairo_cairo_get_line_join00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_line_join_t tolua_ret = (cairo_line_join_t)  cairo_get_line_join(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_line_join'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_miter_limit */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_miter_limit00
static int tolua_cairo_cairo_get_miter_limit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   double tolua_ret = (double)  cairo_get_miter_limit(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_miter_limit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_dash_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_dash_count00
static int tolua_cairo_cairo_get_dash_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_get_dash_count(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_dash_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_dash */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_dash00
static int tolua_cairo_cairo_get_dash00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  double dashes = ((double)  tolua_tonumber(tolua_S,2,0));
  double offset = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_get_dash(cr,&dashes,&offset);
   tolua_pushnumber(tolua_S,(lua_Number)dashes);
   tolua_pushnumber(tolua_S,(lua_Number)offset);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_dash'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_matrix00
static int tolua_cairo_cairo_get_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_get_matrix(cr,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_target */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_target00
static int tolua_cairo_cairo_get_target00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_get_target(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_target'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_get_group_target */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_get_group_target00
static int tolua_cairo_cairo_get_group_target00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_get_group_target(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_get_group_target'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: status of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_path_t_status
static int tolua_get_cairo_path_t_status(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'status'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->status);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: status of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_path_t_status
static int tolua_set_cairo_path_t_status(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'status'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->status = ((cairo_status_t) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: data of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_path_t_data_ptr
static int tolua_get_cairo_path_t_data_ptr(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)self->data,"_cairo_path_data_t");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: data of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_path_t_data_ptr
static int tolua_set_cairo_path_t_data_ptr(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'data'",NULL);
  if (!tolua_isusertype(tolua_S,2,"_cairo_path_data_t",0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->data = (( union _cairo_path_data_t*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: num_data of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_get_cairo_path_t_num_data
static int tolua_get_cairo_path_t_num_data(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_data'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->num_data);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: num_data of class  cairo_path_t */
#ifndef TOLUA_DISABLE_tolua_set_cairo_path_t_num_data
static int tolua_set_cairo_path_t_num_data(lua_State* tolua_S)
{
  cairo_path_t* self = (cairo_path_t*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'num_data'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->num_data = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_copy_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_copy_path00
static int tolua_cairo_cairo_copy_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_path_t* tolua_ret = (cairo_path_t*)  cairo_copy_path(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_path_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_copy_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_copy_path_flat */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_copy_path_flat00
static int tolua_cairo_cairo_copy_path_flat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_path_t* tolua_ret = (cairo_path_t*)  cairo_copy_path_flat(cr);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"cairo_path_t");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_copy_path_flat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_append_path */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_append_path00
static int tolua_cairo_cairo_append_path00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_path_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  const cairo_path_t* path = ((const cairo_path_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_append_path(cr,path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_append_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_path_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_path_destroy00
static int tolua_cairo_cairo_path_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_path_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_path_t* path = ((cairo_path_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_path_destroy(path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_path_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_status00
static int tolua_cairo_cairo_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo* cr = (( struct _cairo*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_status(cr);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_status_to_string */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_status_to_string00
static int tolua_cairo_cairo_status_to_string00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_status_t status = ((cairo_status_t) (int)  tolua_tonumber(tolua_S,1,0));
  {
   const char* tolua_ret = (const char*)  cairo_status_to_string(status);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_status_to_string'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_create_similar */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_create_similar00
static int tolua_cairo_cairo_surface_create_similar00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* other = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  cairo_content_t content = ((cairo_content_t) (int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_surface_create_similar(other,content,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_create_similar'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_reference */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_reference00
static int tolua_cairo_cairo_surface_reference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_surface_reference(surface);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_reference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_finish */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_finish00
static int tolua_cairo_cairo_surface_finish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_finish(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_finish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_destroy00
static int tolua_cairo_cairo_surface_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_destroy(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_reference_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_reference_count00
static int tolua_cairo_cairo_surface_get_reference_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  cairo_surface_get_reference_count(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_reference_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_status00
static int tolua_cairo_cairo_surface_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_surface_status(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_type */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_type00
static int tolua_cairo_cairo_surface_get_type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_type_t tolua_ret = (cairo_surface_type_t)  cairo_surface_get_type(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_content */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_content00
static int tolua_cairo_cairo_surface_get_content00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_content_t tolua_ret = (cairo_content_t)  cairo_surface_get_content(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_content'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_write_to_png */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_write_to_png00
static int tolua_cairo_cairo_surface_write_to_png00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  const char* filename = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_surface_write_to_png(surface,filename);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_write_to_png'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_write_to_png_stream */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_write_to_png_stream00
static int tolua_cairo_cairo_surface_write_to_png_stream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cairo_write_func_t",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  cairo_write_func_t write_func = *((cairo_write_func_t*)  tolua_tousertype(tolua_S,2,0));
  void* closure = ((void*)  tolua_touserdata(tolua_S,3,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_surface_write_to_png_stream(surface,write_func,closure);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_write_to_png_stream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_user_data00
static int tolua_cairo_cairo_surface_get_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  {
   void* tolua_ret = (void*)  cairo_surface_get_user_data(surface,key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_set_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_set_user_data00
static int tolua_cairo_cairo_surface_set_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cairo_destroy_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  void* user_data = ((void*)  tolua_touserdata(tolua_S,3,0));
  cairo_destroy_func_t destroy = *((cairo_destroy_func_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_surface_set_user_data(surface,key,user_data,destroy);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_set_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_font_options */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_font_options00
static int tolua_cairo_cairo_surface_get_font_options00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_font_options",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_font_options* options = (( struct _cairo_font_options*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_surface_get_font_options(surface,options);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_font_options'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_flush */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_flush00
static int tolua_cairo_cairo_surface_flush00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_flush(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_flush'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_mark_dirty */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_mark_dirty00
static int tolua_cairo_cairo_surface_mark_dirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_mark_dirty(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_mark_dirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_mark_dirty_rectangle */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_mark_dirty_rectangle00
static int tolua_cairo_cairo_surface_mark_dirty_rectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_surface_mark_dirty_rectangle(surface,x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_mark_dirty_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_set_device_offset */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_set_device_offset00
static int tolua_cairo_cairo_surface_set_device_offset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  double x_offset = ((double)  tolua_tonumber(tolua_S,2,0));
  double y_offset = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_surface_set_device_offset(surface,x_offset,y_offset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_set_device_offset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_device_offset */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_device_offset00
static int tolua_cairo_cairo_surface_get_device_offset00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  double x_offset = ((double)  tolua_tonumber(tolua_S,2,0));
  double y_offset = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_surface_get_device_offset(surface,&x_offset,&y_offset);
   tolua_pushnumber(tolua_S,(lua_Number)x_offset);
   tolua_pushnumber(tolua_S,(lua_Number)y_offset);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_device_offset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_set_fallback_resolution */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_set_fallback_resolution00
static int tolua_cairo_cairo_surface_set_fallback_resolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  double x_pixels_per_inch = ((double)  tolua_tonumber(tolua_S,2,0));
  double y_pixels_per_inch = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_surface_set_fallback_resolution(surface,x_pixels_per_inch,y_pixels_per_inch);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_set_fallback_resolution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_get_fallback_resolution */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_get_fallback_resolution00
static int tolua_cairo_cairo_surface_get_fallback_resolution00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  double x_pixels_per_inch = ((double)  tolua_tonumber(tolua_S,2,0));
  double y_pixels_per_inch = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_surface_get_fallback_resolution(surface,&x_pixels_per_inch,&y_pixels_per_inch);
   tolua_pushnumber(tolua_S,(lua_Number)x_pixels_per_inch);
   tolua_pushnumber(tolua_S,(lua_Number)y_pixels_per_inch);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_get_fallback_resolution'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_copy_page */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_copy_page00
static int tolua_cairo_cairo_surface_copy_page00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_copy_page(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_copy_page'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_show_page */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_show_page00
static int tolua_cairo_cairo_surface_show_page00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_surface_show_page(surface);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_show_page'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_surface_has_show_text_glyphs */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_surface_has_show_text_glyphs00
static int tolua_cairo_cairo_surface_has_show_text_glyphs00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
    int tolua_ret = (  int)  cairo_surface_has_show_text_glyphs(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_surface_has_show_text_glyphs'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_create */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_create00
static int tolua_cairo_cairo_image_surface_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_format_t format = ((cairo_format_t) (int)  tolua_tonumber(tolua_S,1,0));
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  int height = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_image_surface_create(format,width,height);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_format_stride_for_width */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_format_stride_for_width00
static int tolua_cairo_cairo_format_stride_for_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_format_t format = ((cairo_format_t) (int)  tolua_tonumber(tolua_S,1,0));
  int width = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   int tolua_ret = (int)  cairo_format_stride_for_width(format,width);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_format_stride_for_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_create_for_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_create_for_data00
static int tolua_cairo_cairo_image_surface_create_for_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char* data = ((unsigned char*)  tolua_tostring(tolua_S,1,0));
  cairo_format_t format = ((cairo_format_t) (int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  int stride = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_image_surface_create_for_data(data,format,width,height,stride);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_create_for_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_get_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_get_data00
static int tolua_cairo_cairo_image_surface_get_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned char* tolua_ret = (unsigned char*)  cairo_image_surface_get_data(surface);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_get_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_get_format */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_get_format00
static int tolua_cairo_cairo_image_surface_get_format00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_format_t tolua_ret = (cairo_format_t)  cairo_image_surface_get_format(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_get_format'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_get_width */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_get_width00
static int tolua_cairo_cairo_image_surface_get_width00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_image_surface_get_width(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_get_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_get_height */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_get_height00
static int tolua_cairo_cairo_image_surface_get_height00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_image_surface_get_height(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_get_height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_get_stride */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_get_stride00
static int tolua_cairo_cairo_image_surface_get_stride00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   int tolua_ret = (int)  cairo_image_surface_get_stride(surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_get_stride'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_create_from_png */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_create_from_png00
static int tolua_cairo_cairo_image_surface_create_from_png00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_image_surface_create_from_png(filename);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_create_from_png'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_image_surface_create_from_png_stream */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_image_surface_create_from_png_stream00
static int tolua_cairo_cairo_image_surface_create_from_png_stream00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"cairo_read_func_t",0,&tolua_err)) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_read_func_t read_func = *((cairo_read_func_t*)  tolua_tousertype(tolua_S,1,0));
  void* closure = ((void*)  tolua_touserdata(tolua_S,2,0));
  {
   struct _cairo_surface* tolua_ret = ( struct _cairo_surface*)  cairo_image_surface_create_from_png_stream(read_func,closure);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_surface");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_image_surface_create_from_png_stream'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_create_rgb */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_create_rgb00
static int tolua_cairo_cairo_pattern_create_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double red = ((double)  tolua_tonumber(tolua_S,1,0));
  double green = ((double)  tolua_tonumber(tolua_S,2,0));
  double blue = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_create_rgb(red,green,blue);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_create_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_create_rgba */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_create_rgba00
static int tolua_cairo_cairo_pattern_create_rgba00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double red = ((double)  tolua_tonumber(tolua_S,1,0));
  double green = ((double)  tolua_tonumber(tolua_S,2,0));
  double blue = ((double)  tolua_tonumber(tolua_S,3,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_create_rgba(red,green,blue,alpha);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_create_rgba'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_create_for_surface */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_create_for_surface00
static int tolua_cairo_cairo_pattern_create_for_surface00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_create_for_surface(surface);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_create_for_surface'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_create_linear */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_create_linear00
static int tolua_cairo_cairo_pattern_create_linear00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double x0 = ((double)  tolua_tonumber(tolua_S,1,0));
  double y0 = ((double)  tolua_tonumber(tolua_S,2,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,3,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,4,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_create_linear(x0,y0,x1,y1);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_create_linear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_create_radial */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_create_radial00
static int tolua_cairo_cairo_pattern_create_radial00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double cx0 = ((double)  tolua_tonumber(tolua_S,1,0));
  double cy0 = ((double)  tolua_tonumber(tolua_S,2,0));
  double radius0 = ((double)  tolua_tonumber(tolua_S,3,0));
  double cx1 = ((double)  tolua_tonumber(tolua_S,4,0));
  double cy1 = ((double)  tolua_tonumber(tolua_S,5,0));
  double radius1 = ((double)  tolua_tonumber(tolua_S,6,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_create_radial(cx0,cy0,radius0,cx1,cy1,radius1);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_create_radial'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_reference */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_reference00
static int tolua_cairo_cairo_pattern_reference00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   struct _cairo_pattern* tolua_ret = ( struct _cairo_pattern*)  cairo_pattern_reference(pattern);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_cairo_pattern");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_reference'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_destroy */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_destroy00
static int tolua_cairo_cairo_pattern_destroy00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_pattern_destroy(pattern);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_destroy'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_reference_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_reference_count00
static int tolua_cairo_cairo_pattern_get_reference_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   unsigned int tolua_ret = (unsigned int)  cairo_pattern_get_reference_count(pattern);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_reference_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_status */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_status00
static int tolua_cairo_cairo_pattern_status00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_status(pattern);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_status'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_user_data00
static int tolua_cairo_cairo_pattern_get_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  {
   void* tolua_ret = (void*)  cairo_pattern_get_user_data(pattern,key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_set_user_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_set_user_data00
static int tolua_cairo_cairo_pattern_set_user_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const cairo_user_data_key_t",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"cairo_destroy_func_t",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  const cairo_user_data_key_t* key = ((const cairo_user_data_key_t*)  tolua_tousertype(tolua_S,2,0));
  void* user_data = ((void*)  tolua_touserdata(tolua_S,3,0));
  cairo_destroy_func_t destroy = *((cairo_destroy_func_t*)  tolua_tousertype(tolua_S,4,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_set_user_data(pattern,key,user_data,destroy);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_set_user_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_type */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_type00
static int tolua_cairo_cairo_pattern_get_type00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_pattern_type_t tolua_ret = (cairo_pattern_type_t)  cairo_pattern_get_type(pattern);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_type'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_add_color_stop_rgb */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_add_color_stop_rgb00
static int tolua_cairo_cairo_pattern_add_color_stop_rgb00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  double offset = ((double)  tolua_tonumber(tolua_S,2,0));
  double red = ((double)  tolua_tonumber(tolua_S,3,0));
  double green = ((double)  tolua_tonumber(tolua_S,4,0));
  double blue = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_pattern_add_color_stop_rgb(pattern,offset,red,green,blue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_add_color_stop_rgb'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_add_color_stop_rgba */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_add_color_stop_rgba00
static int tolua_cairo_cairo_pattern_add_color_stop_rgba00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  double offset = ((double)  tolua_tonumber(tolua_S,2,0));
  double red = ((double)  tolua_tonumber(tolua_S,3,0));
  double green = ((double)  tolua_tonumber(tolua_S,4,0));
  double blue = ((double)  tolua_tonumber(tolua_S,5,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,6,0));
  {
   cairo_pattern_add_color_stop_rgba(pattern,offset,red,green,blue,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_add_color_stop_rgba'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_set_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_set_matrix00
static int tolua_cairo_cairo_pattern_set_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_pattern_set_matrix(pattern,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_set_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_matrix */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_matrix00
static int tolua_cairo_cairo_pattern_get_matrix00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_pattern_get_matrix(pattern,matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_matrix'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_set_extend */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_set_extend00
static int tolua_cairo_cairo_pattern_set_extend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  cairo_extend_t extend = ((cairo_extend_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_pattern_set_extend(pattern,extend);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_set_extend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_extend */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_extend00
static int tolua_cairo_cairo_pattern_get_extend00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_extend_t tolua_ret = (cairo_extend_t)  cairo_pattern_get_extend(pattern);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_extend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_set_filter */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_set_filter00
static int tolua_cairo_cairo_pattern_set_filter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  cairo_filter_t filter = ((cairo_filter_t) (int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_pattern_set_filter(pattern,filter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_set_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_filter */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_filter00
static int tolua_cairo_cairo_pattern_get_filter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_filter_t tolua_ret = (cairo_filter_t)  cairo_pattern_get_filter(pattern);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_rgba */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_rgba00
static int tolua_cairo_cairo_pattern_get_rgba00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  double red = ((double)  tolua_tonumber(tolua_S,2,0));
  double green = ((double)  tolua_tonumber(tolua_S,3,0));
  double blue = ((double)  tolua_tonumber(tolua_S,4,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_rgba(pattern,&red,&green,&blue,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)red);
   tolua_pushnumber(tolua_S,(lua_Number)green);
   tolua_pushnumber(tolua_S,(lua_Number)blue);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 5;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_rgba'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_surface */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_surface00
static int tolua_cairo_cairo_pattern_get_surface00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_cairo_surface",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  struct _cairo_surface* surface = (( struct _cairo_surface*)  tolua_tousertype(tolua_S,2,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_surface(pattern,&surface);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
    tolua_pushusertype(tolua_S,(void*)surface,"_cairo_surface");
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_surface'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_color_stop_rgba */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_color_stop_rgba00
static int tolua_cairo_cairo_pattern_get_color_stop_rgba00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  double offset = ((double)  tolua_tonumber(tolua_S,3,0));
  double red = ((double)  tolua_tonumber(tolua_S,4,0));
  double green = ((double)  tolua_tonumber(tolua_S,5,0));
  double blue = ((double)  tolua_tonumber(tolua_S,6,0));
  double alpha = ((double)  tolua_tonumber(tolua_S,7,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_color_stop_rgba(pattern,index,&offset,&red,&green,&blue,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)offset);
   tolua_pushnumber(tolua_S,(lua_Number)red);
   tolua_pushnumber(tolua_S,(lua_Number)green);
   tolua_pushnumber(tolua_S,(lua_Number)blue);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 6;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_color_stop_rgba'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_color_stop_count */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_color_stop_count00
static int tolua_cairo_cairo_pattern_get_color_stop_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  int count = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_color_stop_count(pattern,&count);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)count);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_color_stop_count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_linear_points */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_linear_points00
static int tolua_cairo_cairo_pattern_get_linear_points00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  double x0 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y0 = ((double)  tolua_tonumber(tolua_S,3,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,4,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_linear_points(pattern,&x0,&y0,&x1,&y1);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)x0);
   tolua_pushnumber(tolua_S,(lua_Number)y0);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
  }
 }
 return 5;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_linear_points'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_pattern_get_radial_circles */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_pattern_get_radial_circles00
static int tolua_cairo_cairo_pattern_get_radial_circles00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_cairo_pattern",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _cairo_pattern* pattern = (( struct _cairo_pattern*)  tolua_tousertype(tolua_S,1,0));
  double x0 = ((double)  tolua_tonumber(tolua_S,2,0));
  double y0 = ((double)  tolua_tonumber(tolua_S,3,0));
  double r0 = ((double)  tolua_tonumber(tolua_S,4,0));
  double x1 = ((double)  tolua_tonumber(tolua_S,5,0));
  double y1 = ((double)  tolua_tonumber(tolua_S,6,0));
  double r1 = ((double)  tolua_tonumber(tolua_S,7,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_pattern_get_radial_circles(pattern,&x0,&y0,&r0,&x1,&y1,&r1);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)x0);
   tolua_pushnumber(tolua_S,(lua_Number)y0);
   tolua_pushnumber(tolua_S,(lua_Number)r0);
   tolua_pushnumber(tolua_S,(lua_Number)x1);
   tolua_pushnumber(tolua_S,(lua_Number)y1);
   tolua_pushnumber(tolua_S,(lua_Number)r1);
  }
 }
 return 7;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_pattern_get_radial_circles'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_init */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_init00
static int tolua_cairo_cairo_matrix_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,8,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double xx = ((double)  tolua_tonumber(tolua_S,2,0));
  double yx = ((double)  tolua_tonumber(tolua_S,3,0));
  double xy = ((double)  tolua_tonumber(tolua_S,4,0));
  double yy = ((double)  tolua_tonumber(tolua_S,5,0));
  double x0 = ((double)  tolua_tonumber(tolua_S,6,0));
  double y0 = ((double)  tolua_tonumber(tolua_S,7,0));
  {
   cairo_matrix_init(matrix,xx,yx,xy,yy,x0,y0);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_init_identity */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_init_identity00
static int tolua_cairo_cairo_matrix_init_identity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_matrix_init_identity(matrix);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_init_identity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_init_translate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_init_translate00
static int tolua_cairo_cairo_matrix_init_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double tx = ((double)  tolua_tonumber(tolua_S,2,0));
  double ty = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_init_translate(matrix,tx,ty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_init_translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_init_scale */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_init_scale00
static int tolua_cairo_cairo_matrix_init_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double sx = ((double)  tolua_tonumber(tolua_S,2,0));
  double sy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_init_scale(matrix,sx,sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_init_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_init_rotate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_init_rotate00
static int tolua_cairo_cairo_matrix_init_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double radians = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_matrix_init_rotate(matrix,radians);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_init_rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_translate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_translate00
static int tolua_cairo_cairo_matrix_translate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double tx = ((double)  tolua_tonumber(tolua_S,2,0));
  double ty = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_translate(matrix,tx,ty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_translate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_scale */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_scale00
static int tolua_cairo_cairo_matrix_scale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double sx = ((double)  tolua_tonumber(tolua_S,2,0));
  double sy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_scale(matrix,sx,sy);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_scale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_rotate */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_rotate00
static int tolua_cairo_cairo_matrix_rotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double radians = ((double)  tolua_tonumber(tolua_S,2,0));
  {
   cairo_matrix_rotate(matrix,radians);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_rotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_invert */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_invert00
static int tolua_cairo_cairo_matrix_invert00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  {
   cairo_status_t tolua_ret = (cairo_status_t)  cairo_matrix_invert(matrix);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_invert'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_multiply */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_multiply00
static int tolua_cairo_cairo_matrix_multiply00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* result = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  cairo_matrix_t* a = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,2,0));
  cairo_matrix_t* b = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,3,0));
  {
   cairo_matrix_multiply(result,a,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_multiply'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_transform_distance */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_transform_distance00
static int tolua_cairo_cairo_matrix_transform_distance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double dx = ((double)  tolua_tonumber(tolua_S,2,0));
  double dy = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_transform_distance(matrix,&dx,&dy);
   tolua_pushnumber(tolua_S,(lua_Number)dx);
   tolua_pushnumber(tolua_S,(lua_Number)dy);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_transform_distance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_matrix_transform_point */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_matrix_transform_point00
static int tolua_cairo_cairo_matrix_transform_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"cairo_matrix_t",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  cairo_matrix_t* matrix = ((cairo_matrix_t*)  tolua_tousertype(tolua_S,1,0));
  double x = ((double)  tolua_tonumber(tolua_S,2,0));
  double y = ((double)  tolua_tonumber(tolua_S,3,0));
  {
   cairo_matrix_transform_point(matrix,&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_matrix_transform_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: cairo_debug_reset_static_data */
#ifndef TOLUA_DISABLE_tolua_cairo_cairo_debug_reset_static_data00
static int tolua_cairo_cairo_debug_reset_static_data00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnoobj(tolua_S,1,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   cairo_debug_reset_static_data();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cairo_debug_reset_static_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_cairo_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"CAIRO_ANTIALIAS_DEFAULT",CAIRO_ANTIALIAS_DEFAULT);
  tolua_constant(tolua_S,"CAIRO_ANTIALIAS_NONE",CAIRO_ANTIALIAS_NONE);
  tolua_constant(tolua_S,"CAIRO_ANTIALIAS_GRAY",CAIRO_ANTIALIAS_GRAY);
  tolua_constant(tolua_S,"CAIRO_ANTIALIAS_SUBPIXEL",CAIRO_ANTIALIAS_SUBPIXEL);
  tolua_cclass(tolua_S,"cairo_matrix_t","cairo_matrix_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_matrix_t");
   tolua_variable(tolua_S,"xx",tolua_get_cairo_matrix_t_xx,tolua_set_cairo_matrix_t_xx);
   tolua_variable(tolua_S,"yx",tolua_get_cairo_matrix_t_yx,tolua_set_cairo_matrix_t_yx);
   tolua_variable(tolua_S,"xy",tolua_get_cairo_matrix_t_xy,tolua_set_cairo_matrix_t_xy);
   tolua_variable(tolua_S,"yy",tolua_get_cairo_matrix_t_yy,tolua_set_cairo_matrix_t_yy);
   tolua_variable(tolua_S,"x0",tolua_get_cairo_matrix_t_x0,tolua_set_cairo_matrix_t_x0);
   tolua_variable(tolua_S,"y0",tolua_get_cairo_matrix_t_y0,tolua_set_cairo_matrix_t_y0);
   tolua_function(tolua_S,"create",tolua_cairo_cairo_matrix_t_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"cairo_user_data_key_t","cairo_user_data_key_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_user_data_key_t");
   tolua_variable(tolua_S,"unused",tolua_get_cairo_user_data_key_t_unused,tolua_set_cairo_user_data_key_t_unused);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CAIRO_STATUS_SUCCESS",CAIRO_STATUS_SUCCESS);
  tolua_constant(tolua_S,"CAIRO_STATUS_NO_MEMORY",CAIRO_STATUS_NO_MEMORY);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_RESTORE",CAIRO_STATUS_INVALID_RESTORE);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_POP_GROUP",CAIRO_STATUS_INVALID_POP_GROUP);
  tolua_constant(tolua_S,"CAIRO_STATUS_NO_CURRENT_POINT",CAIRO_STATUS_NO_CURRENT_POINT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_MATRIX",CAIRO_STATUS_INVALID_MATRIX);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_STATUS",CAIRO_STATUS_INVALID_STATUS);
  tolua_constant(tolua_S,"CAIRO_STATUS_NULL_POINTER",CAIRO_STATUS_NULL_POINTER);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_STRING",CAIRO_STATUS_INVALID_STRING);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_PATH_DATA",CAIRO_STATUS_INVALID_PATH_DATA);
  tolua_constant(tolua_S,"CAIRO_STATUS_READ_ERROR",CAIRO_STATUS_READ_ERROR);
  tolua_constant(tolua_S,"CAIRO_STATUS_WRITE_ERROR",CAIRO_STATUS_WRITE_ERROR);
  tolua_constant(tolua_S,"CAIRO_STATUS_SURFACE_FINISHED",CAIRO_STATUS_SURFACE_FINISHED);
  tolua_constant(tolua_S,"CAIRO_STATUS_SURFACE_TYPE_MISMATCH",CAIRO_STATUS_SURFACE_TYPE_MISMATCH);
  tolua_constant(tolua_S,"CAIRO_STATUS_PATTERN_TYPE_MISMATCH",CAIRO_STATUS_PATTERN_TYPE_MISMATCH);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_CONTENT",CAIRO_STATUS_INVALID_CONTENT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_FORMAT",CAIRO_STATUS_INVALID_FORMAT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_VISUAL",CAIRO_STATUS_INVALID_VISUAL);
  tolua_constant(tolua_S,"CAIRO_STATUS_FILE_NOT_FOUND",CAIRO_STATUS_FILE_NOT_FOUND);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_DASH",CAIRO_STATUS_INVALID_DASH);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_DSC_COMMENT",CAIRO_STATUS_INVALID_DSC_COMMENT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_INDEX",CAIRO_STATUS_INVALID_INDEX);
  tolua_constant(tolua_S,"CAIRO_STATUS_CLIP_NOT_REPRESENTABLE",CAIRO_STATUS_CLIP_NOT_REPRESENTABLE);
  tolua_constant(tolua_S,"CAIRO_STATUS_TEMP_FILE_ERROR",CAIRO_STATUS_TEMP_FILE_ERROR);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_STRIDE",CAIRO_STATUS_INVALID_STRIDE);
  tolua_constant(tolua_S,"CAIRO_STATUS_FONT_TYPE_MISMATCH",CAIRO_STATUS_FONT_TYPE_MISMATCH);
  tolua_constant(tolua_S,"CAIRO_STATUS_USER_FONT_IMMUTABLE",CAIRO_STATUS_USER_FONT_IMMUTABLE);
  tolua_constant(tolua_S,"CAIRO_STATUS_USER_FONT_ERROR",CAIRO_STATUS_USER_FONT_ERROR);
  tolua_constant(tolua_S,"CAIRO_STATUS_NEGATIVE_COUNT",CAIRO_STATUS_NEGATIVE_COUNT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_CLUSTERS",CAIRO_STATUS_INVALID_CLUSTERS);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_SLANT",CAIRO_STATUS_INVALID_SLANT);
  tolua_constant(tolua_S,"CAIRO_STATUS_INVALID_WEIGHT",CAIRO_STATUS_INVALID_WEIGHT);
  tolua_constant(tolua_S,"CAIRO_CONTENT_COLOR",CAIRO_CONTENT_COLOR);
  tolua_constant(tolua_S,"CAIRO_CONTENT_ALPHA",CAIRO_CONTENT_ALPHA);
  tolua_constant(tolua_S,"CAIRO_CONTENT_COLOR_ALPHA",CAIRO_CONTENT_COLOR_ALPHA);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_CLEAR",CAIRO_OPERATOR_CLEAR);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_SOURCE",CAIRO_OPERATOR_SOURCE);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_OVER",CAIRO_OPERATOR_OVER);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_IN",CAIRO_OPERATOR_IN);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_OUT",CAIRO_OPERATOR_OUT);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_ATOP",CAIRO_OPERATOR_ATOP);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_DEST",CAIRO_OPERATOR_DEST);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_DEST_OVER",CAIRO_OPERATOR_DEST_OVER);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_DEST_IN",CAIRO_OPERATOR_DEST_IN);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_DEST_OUT",CAIRO_OPERATOR_DEST_OUT);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_DEST_ATOP",CAIRO_OPERATOR_DEST_ATOP);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_XOR",CAIRO_OPERATOR_XOR);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_ADD",CAIRO_OPERATOR_ADD);
  tolua_constant(tolua_S,"CAIRO_OPERATOR_SATURATE",CAIRO_OPERATOR_SATURATE);
  tolua_constant(tolua_S,"CAIRO_FILTER_FAST",CAIRO_FILTER_FAST);
  tolua_constant(tolua_S,"CAIRO_FILTER_GOOD",CAIRO_FILTER_GOOD);
  tolua_constant(tolua_S,"CAIRO_FILTER_BEST",CAIRO_FILTER_BEST);
  tolua_constant(tolua_S,"CAIRO_FILTER_NEAREST",CAIRO_FILTER_NEAREST);
  tolua_constant(tolua_S,"CAIRO_FILTER_BILINEAR",CAIRO_FILTER_BILINEAR);
  tolua_constant(tolua_S,"CAIRO_FILTER_GAUSSIAN",CAIRO_FILTER_GAUSSIAN);
  tolua_function(tolua_S,"cairo_xlib_surface_create",tolua_cairo_cairo_xlib_surface_create00);
  tolua_function(tolua_S,"cairo_xlib_surface_create_for_bitmap",tolua_cairo_cairo_xlib_surface_create_for_bitmap00);
  tolua_function(tolua_S,"cairo_xlib_surface_set_size",tolua_cairo_cairo_xlib_surface_set_size00);
  tolua_function(tolua_S,"cairo_xlib_surface_set_drawable",tolua_cairo_cairo_xlib_surface_set_drawable00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_display",tolua_cairo_cairo_xlib_surface_get_display00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_drawable",tolua_cairo_cairo_xlib_surface_get_drawable00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_screen",tolua_cairo_cairo_xlib_surface_get_screen00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_visual",tolua_cairo_cairo_xlib_surface_get_visual00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_depth",tolua_cairo_cairo_xlib_surface_get_depth00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_width",tolua_cairo_cairo_xlib_surface_get_width00);
  tolua_function(tolua_S,"cairo_xlib_surface_get_height",tolua_cairo_cairo_xlib_surface_get_height00);
  tolua_function(tolua_S,"cairo_version",tolua_cairo_cairo_version00);
  tolua_function(tolua_S,"cairo_version_string",tolua_cairo_cairo_version_string00);
  tolua_function(tolua_S,"cairo_create",tolua_cairo_cairo_create00);
  tolua_function(tolua_S,"cairo_reference",tolua_cairo_cairo_reference00);
  tolua_function(tolua_S,"cairo_destroy",tolua_cairo_cairo_destroy00);
  tolua_function(tolua_S,"cairo_get_reference_count",tolua_cairo_cairo_get_reference_count00);
  tolua_function(tolua_S,"cairo_get_user_data",tolua_cairo_cairo_get_user_data00);
  tolua_function(tolua_S,"cairo_set_user_data",tolua_cairo_cairo_set_user_data00);
  tolua_function(tolua_S,"cairo_save",tolua_cairo_cairo_save00);
  tolua_function(tolua_S,"cairo_restore",tolua_cairo_cairo_restore00);
  tolua_function(tolua_S,"cairo_push_group",tolua_cairo_cairo_push_group00);
  tolua_function(tolua_S,"cairo_push_group_with_content",tolua_cairo_cairo_push_group_with_content00);
  tolua_function(tolua_S,"cairo_pop_group",tolua_cairo_cairo_pop_group00);
  tolua_function(tolua_S,"cairo_pop_group_to_source",tolua_cairo_cairo_pop_group_to_source00);
  tolua_function(tolua_S,"cairo_set_operator",tolua_cairo_cairo_set_operator00);
  tolua_function(tolua_S,"cairo_set_source",tolua_cairo_cairo_set_source00);
  tolua_function(tolua_S,"cairo_set_source_rgb",tolua_cairo_cairo_set_source_rgb00);
  tolua_function(tolua_S,"cairo_set_source_rgba",tolua_cairo_cairo_set_source_rgba00);
  tolua_function(tolua_S,"cairo_set_source_surface",tolua_cairo_cairo_set_source_surface00);
  tolua_function(tolua_S,"cairo_set_tolerance",tolua_cairo_cairo_set_tolerance00);
  tolua_function(tolua_S,"cairo_set_antialias",tolua_cairo_cairo_set_antialias00);
  tolua_constant(tolua_S,"CAIRO_FILL_RULE_WINDING",CAIRO_FILL_RULE_WINDING);
  tolua_constant(tolua_S,"CAIRO_FILL_RULE_EVEN_ODD",CAIRO_FILL_RULE_EVEN_ODD);
  tolua_function(tolua_S,"cairo_set_fill_rule",tolua_cairo_cairo_set_fill_rule00);
  tolua_function(tolua_S,"cairo_set_line_width",tolua_cairo_cairo_set_line_width00);
  tolua_constant(tolua_S,"CAIRO_LINE_CAP_BUTT",CAIRO_LINE_CAP_BUTT);
  tolua_constant(tolua_S,"CAIRO_LINE_CAP_ROUND",CAIRO_LINE_CAP_ROUND);
  tolua_constant(tolua_S,"CAIRO_LINE_CAP_SQUARE",CAIRO_LINE_CAP_SQUARE);
  tolua_function(tolua_S,"cairo_set_line_cap",tolua_cairo_cairo_set_line_cap00);
  tolua_constant(tolua_S,"CAIRO_LINE_JOIN_MITER",CAIRO_LINE_JOIN_MITER);
  tolua_constant(tolua_S,"CAIRO_LINE_JOIN_ROUND",CAIRO_LINE_JOIN_ROUND);
  tolua_constant(tolua_S,"CAIRO_LINE_JOIN_BEVEL",CAIRO_LINE_JOIN_BEVEL);
  tolua_function(tolua_S,"cairo_set_line_join",tolua_cairo_cairo_set_line_join00);
  tolua_function(tolua_S,"cairo_set_dash",tolua_cairo_cairo_set_dash00);
  tolua_function(tolua_S,"cairo_set_miter_limit",tolua_cairo_cairo_set_miter_limit00);
  tolua_function(tolua_S,"cairo_translate",tolua_cairo_cairo_translate00);
  tolua_function(tolua_S,"cairo_scale",tolua_cairo_cairo_scale00);
  tolua_function(tolua_S,"cairo_rotate",tolua_cairo_cairo_rotate00);
  tolua_function(tolua_S,"cairo_transform",tolua_cairo_cairo_transform00);
  tolua_function(tolua_S,"cairo_set_matrix",tolua_cairo_cairo_set_matrix00);
  tolua_function(tolua_S,"cairo_identity_matrix",tolua_cairo_cairo_identity_matrix00);
  tolua_function(tolua_S,"cairo_user_to_device",tolua_cairo_cairo_user_to_device00);
  tolua_function(tolua_S,"cairo_user_to_device_distance",tolua_cairo_cairo_user_to_device_distance00);
  tolua_function(tolua_S,"cairo_device_to_user",tolua_cairo_cairo_device_to_user00);
  tolua_function(tolua_S,"cairo_device_to_user_distance",tolua_cairo_cairo_device_to_user_distance00);
  tolua_function(tolua_S,"cairo_new_path",tolua_cairo_cairo_new_path00);
  tolua_function(tolua_S,"cairo_move_to",tolua_cairo_cairo_move_to00);
  tolua_function(tolua_S,"cairo_new_sub_path",tolua_cairo_cairo_new_sub_path00);
  tolua_function(tolua_S,"cairo_line_to",tolua_cairo_cairo_line_to00);
  tolua_function(tolua_S,"cairo_curve_to",tolua_cairo_cairo_curve_to00);
  tolua_function(tolua_S,"cairo_arc",tolua_cairo_cairo_arc00);
  tolua_function(tolua_S,"cairo_arc_negative",tolua_cairo_cairo_arc_negative00);
  tolua_function(tolua_S,"cairo_rel_move_to",tolua_cairo_cairo_rel_move_to00);
  tolua_function(tolua_S,"cairo_rel_line_to",tolua_cairo_cairo_rel_line_to00);
  tolua_function(tolua_S,"cairo_rel_curve_to",tolua_cairo_cairo_rel_curve_to00);
  tolua_function(tolua_S,"cairo_rectangle",tolua_cairo_cairo_rectangle00);
  tolua_function(tolua_S,"cairo_close_path",tolua_cairo_cairo_close_path00);
  tolua_function(tolua_S,"cairo_path_extents",tolua_cairo_cairo_path_extents00);
  tolua_function(tolua_S,"cairo_paint",tolua_cairo_cairo_paint00);
  tolua_function(tolua_S,"cairo_paint_with_alpha",tolua_cairo_cairo_paint_with_alpha00);
  tolua_function(tolua_S,"cairo_mask",tolua_cairo_cairo_mask00);
  tolua_function(tolua_S,"cairo_mask_surface",tolua_cairo_cairo_mask_surface00);
  tolua_function(tolua_S,"cairo_stroke",tolua_cairo_cairo_stroke00);
  tolua_function(tolua_S,"cairo_stroke_preserve",tolua_cairo_cairo_stroke_preserve00);
  tolua_function(tolua_S,"cairo_fill",tolua_cairo_cairo_fill00);
  tolua_function(tolua_S,"cairo_fill_preserve",tolua_cairo_cairo_fill_preserve00);
  tolua_function(tolua_S,"cairo_copy_page",tolua_cairo_cairo_copy_page00);
  tolua_function(tolua_S,"cairo_show_page",tolua_cairo_cairo_show_page00);
  tolua_function(tolua_S,"cairo_in_stroke",tolua_cairo_cairo_in_stroke00);
  tolua_function(tolua_S,"cairo_in_fill",tolua_cairo_cairo_in_fill00);
  tolua_function(tolua_S,"cairo_stroke_extents",tolua_cairo_cairo_stroke_extents00);
  tolua_function(tolua_S,"cairo_fill_extents",tolua_cairo_cairo_fill_extents00);
  tolua_function(tolua_S,"cairo_reset_clip",tolua_cairo_cairo_reset_clip00);
  tolua_function(tolua_S,"cairo_clip",tolua_cairo_cairo_clip00);
  tolua_function(tolua_S,"cairo_clip_preserve",tolua_cairo_cairo_clip_preserve00);
  tolua_function(tolua_S,"cairo_clip_extents",tolua_cairo_cairo_clip_extents00);
  tolua_cclass(tolua_S,"cairo_rectangle_t","cairo_rectangle_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_rectangle_t");
   tolua_variable(tolua_S,"x",tolua_get_cairo_rectangle_t_x,tolua_set_cairo_rectangle_t_x);
   tolua_variable(tolua_S,"y",tolua_get_cairo_rectangle_t_y,tolua_set_cairo_rectangle_t_y);
   tolua_variable(tolua_S,"width",tolua_get_cairo_rectangle_t_width,tolua_set_cairo_rectangle_t_width);
   tolua_variable(tolua_S,"height",tolua_get_cairo_rectangle_t_height,tolua_set_cairo_rectangle_t_height);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"cairo_rectangle_list_t","cairo_rectangle_list_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_rectangle_list_t");
   tolua_variable(tolua_S,"status",tolua_get_cairo_rectangle_list_t_status,tolua_set_cairo_rectangle_list_t_status);
   tolua_variable(tolua_S,"rectangles",tolua_get_cairo_rectangle_list_t_rectangles_ptr,tolua_set_cairo_rectangle_list_t_rectangles_ptr);
   tolua_variable(tolua_S,"num_rectangles",tolua_get_cairo_rectangle_list_t_num_rectangles,tolua_set_cairo_rectangle_list_t_num_rectangles);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"cairo_copy_clip_rectangle_list",tolua_cairo_cairo_copy_clip_rectangle_list00);
  tolua_function(tolua_S,"cairo_rectangle_list_destroy",tolua_cairo_cairo_rectangle_list_destroy00);
  tolua_cclass(tolua_S,"cairo_glyph_t","cairo_glyph_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_glyph_t");
   tolua_variable(tolua_S,"index",tolua_get_cairo_glyph_t_unsigned_index,tolua_set_cairo_glyph_t_unsigned_index);
   tolua_variable(tolua_S,"x",tolua_get_cairo_glyph_t_x,tolua_set_cairo_glyph_t_x);
   tolua_variable(tolua_S,"y",tolua_get_cairo_glyph_t_y,tolua_set_cairo_glyph_t_y);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"cairo_glyph_allocate",tolua_cairo_cairo_glyph_allocate00);
  tolua_function(tolua_S,"cairo_glyph_free",tolua_cairo_cairo_glyph_free00);
  tolua_cclass(tolua_S,"cairo_text_cluster_t","cairo_text_cluster_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_text_cluster_t");
   tolua_variable(tolua_S,"num_bytes",tolua_get_cairo_text_cluster_t_num_bytes,tolua_set_cairo_text_cluster_t_num_bytes);
   tolua_variable(tolua_S,"num_glyphs",tolua_get_cairo_text_cluster_t_num_glyphs,tolua_set_cairo_text_cluster_t_num_glyphs);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"cairo_text_cluster_allocate",tolua_cairo_cairo_text_cluster_allocate00);
  tolua_function(tolua_S,"cairo_text_cluster_free",tolua_cairo_cairo_text_cluster_free00);
  tolua_constant(tolua_S,"CAIRO_TEXT_CLUSTER_FLAG_BACKWARD",CAIRO_TEXT_CLUSTER_FLAG_BACKWARD);
  tolua_cclass(tolua_S,"cairo_text_extents_t","cairo_text_extents_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_text_extents_t");
   tolua_variable(tolua_S,"x_bearing",tolua_get_cairo_text_extents_t_x_bearing,tolua_set_cairo_text_extents_t_x_bearing);
   tolua_variable(tolua_S,"y_bearing",tolua_get_cairo_text_extents_t_y_bearing,tolua_set_cairo_text_extents_t_y_bearing);
   tolua_variable(tolua_S,"width",tolua_get_cairo_text_extents_t_width,tolua_set_cairo_text_extents_t_width);
   tolua_variable(tolua_S,"height",tolua_get_cairo_text_extents_t_height,tolua_set_cairo_text_extents_t_height);
   tolua_variable(tolua_S,"x_advance",tolua_get_cairo_text_extents_t_x_advance,tolua_set_cairo_text_extents_t_x_advance);
   tolua_variable(tolua_S,"y_advance",tolua_get_cairo_text_extents_t_y_advance,tolua_set_cairo_text_extents_t_y_advance);
   tolua_function(tolua_S,"create",tolua_cairo_cairo_text_extents_t_create00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"cairo_font_extents_t","cairo_font_extents_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_font_extents_t");
   tolua_variable(tolua_S,"ascent",tolua_get_cairo_font_extents_t_ascent,tolua_set_cairo_font_extents_t_ascent);
   tolua_variable(tolua_S,"descent",tolua_get_cairo_font_extents_t_descent,tolua_set_cairo_font_extents_t_descent);
   tolua_variable(tolua_S,"height",tolua_get_cairo_font_extents_t_height,tolua_set_cairo_font_extents_t_height);
   tolua_variable(tolua_S,"max_x_advance",tolua_get_cairo_font_extents_t_max_x_advance,tolua_set_cairo_font_extents_t_max_x_advance);
   tolua_variable(tolua_S,"max_y_advance",tolua_get_cairo_font_extents_t_max_y_advance,tolua_set_cairo_font_extents_t_max_y_advance);
   tolua_function(tolua_S,"create",tolua_cairo_cairo_font_extents_t_create00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CAIRO_FONT_SLANT_NORMAL",CAIRO_FONT_SLANT_NORMAL);
  tolua_constant(tolua_S,"CAIRO_FONT_SLANT_ITALIC",CAIRO_FONT_SLANT_ITALIC);
  tolua_constant(tolua_S,"CAIRO_FONT_SLANT_OBLIQUE",CAIRO_FONT_SLANT_OBLIQUE);
  tolua_constant(tolua_S,"CAIRO_FONT_WEIGHT_NORMAL",CAIRO_FONT_WEIGHT_NORMAL);
  tolua_constant(tolua_S,"CAIRO_FONT_WEIGHT_BOLD",CAIRO_FONT_WEIGHT_BOLD);
  tolua_constant(tolua_S,"CAIRO_SUBPIXEL_ORDER_DEFAULT",CAIRO_SUBPIXEL_ORDER_DEFAULT);
  tolua_constant(tolua_S,"CAIRO_SUBPIXEL_ORDER_RGB",CAIRO_SUBPIXEL_ORDER_RGB);
  tolua_constant(tolua_S,"CAIRO_SUBPIXEL_ORDER_BGR",CAIRO_SUBPIXEL_ORDER_BGR);
  tolua_constant(tolua_S,"CAIRO_SUBPIXEL_ORDER_VRGB",CAIRO_SUBPIXEL_ORDER_VRGB);
  tolua_constant(tolua_S,"CAIRO_SUBPIXEL_ORDER_VBGR",CAIRO_SUBPIXEL_ORDER_VBGR);
  tolua_constant(tolua_S,"CAIRO_HINT_STYLE_DEFAULT",CAIRO_HINT_STYLE_DEFAULT);
  tolua_constant(tolua_S,"CAIRO_HINT_STYLE_NONE",CAIRO_HINT_STYLE_NONE);
  tolua_constant(tolua_S,"CAIRO_HINT_STYLE_SLIGHT",CAIRO_HINT_STYLE_SLIGHT);
  tolua_constant(tolua_S,"CAIRO_HINT_STYLE_MEDIUM",CAIRO_HINT_STYLE_MEDIUM);
  tolua_constant(tolua_S,"CAIRO_HINT_STYLE_FULL",CAIRO_HINT_STYLE_FULL);
  tolua_constant(tolua_S,"CAIRO_HINT_METRICS_DEFAULT",CAIRO_HINT_METRICS_DEFAULT);
  tolua_constant(tolua_S,"CAIRO_HINT_METRICS_OFF",CAIRO_HINT_METRICS_OFF);
  tolua_constant(tolua_S,"CAIRO_HINT_METRICS_ON",CAIRO_HINT_METRICS_ON);
  tolua_function(tolua_S,"cairo_font_options_create",tolua_cairo_cairo_font_options_create00);
  tolua_function(tolua_S,"cairo_font_options_copy",tolua_cairo_cairo_font_options_copy00);
  tolua_function(tolua_S,"cairo_font_options_destroy",tolua_cairo_cairo_font_options_destroy00);
  tolua_function(tolua_S,"cairo_font_options_status",tolua_cairo_cairo_font_options_status00);
  tolua_function(tolua_S,"cairo_font_options_merge",tolua_cairo_cairo_font_options_merge00);
  tolua_function(tolua_S,"cairo_font_options_equal",tolua_cairo_cairo_font_options_equal00);
  tolua_function(tolua_S,"cairo_font_options_hash",tolua_cairo_cairo_font_options_hash00);
  tolua_function(tolua_S,"cairo_font_options_set_antialias",tolua_cairo_cairo_font_options_set_antialias00);
  tolua_function(tolua_S,"cairo_font_options_get_antialias",tolua_cairo_cairo_font_options_get_antialias00);
  tolua_function(tolua_S,"cairo_font_options_set_subpixel_order",tolua_cairo_cairo_font_options_set_subpixel_order00);
  tolua_function(tolua_S,"cairo_font_options_get_subpixel_order",tolua_cairo_cairo_font_options_get_subpixel_order00);
  tolua_function(tolua_S,"cairo_font_options_set_hint_style",tolua_cairo_cairo_font_options_set_hint_style00);
  tolua_function(tolua_S,"cairo_font_options_get_hint_style",tolua_cairo_cairo_font_options_get_hint_style00);
  tolua_function(tolua_S,"cairo_font_options_set_hint_metrics",tolua_cairo_cairo_font_options_set_hint_metrics00);
  tolua_function(tolua_S,"cairo_font_options_get_hint_metrics",tolua_cairo_cairo_font_options_get_hint_metrics00);
  tolua_function(tolua_S,"cairo_select_font_face",tolua_cairo_cairo_select_font_face00);
  tolua_function(tolua_S,"cairo_set_font_size",tolua_cairo_cairo_set_font_size00);
  tolua_function(tolua_S,"cairo_set_font_matrix",tolua_cairo_cairo_set_font_matrix00);
  tolua_function(tolua_S,"cairo_get_font_matrix",tolua_cairo_cairo_get_font_matrix00);
  tolua_function(tolua_S,"cairo_set_font_options",tolua_cairo_cairo_set_font_options00);
  tolua_function(tolua_S,"cairo_get_font_options",tolua_cairo_cairo_get_font_options00);
  tolua_function(tolua_S,"cairo_set_font_face",tolua_cairo_cairo_set_font_face00);
  tolua_function(tolua_S,"cairo_get_font_face",tolua_cairo_cairo_get_font_face00);
  tolua_function(tolua_S,"cairo_set_scaled_font",tolua_cairo_cairo_set_scaled_font00);
  tolua_function(tolua_S,"cairo_get_scaled_font",tolua_cairo_cairo_get_scaled_font00);
  tolua_function(tolua_S,"cairo_show_text",tolua_cairo_cairo_show_text00);
  tolua_function(tolua_S,"cairo_show_glyphs",tolua_cairo_cairo_show_glyphs00);
  tolua_function(tolua_S,"cairo_show_text_glyphs",tolua_cairo_cairo_show_text_glyphs00);
  tolua_function(tolua_S,"cairo_text_path",tolua_cairo_cairo_text_path00);
  tolua_function(tolua_S,"cairo_glyph_path",tolua_cairo_cairo_glyph_path00);
  tolua_function(tolua_S,"cairo_text_extents",tolua_cairo_cairo_text_extents00);
  tolua_function(tolua_S,"cairo_glyph_extents",tolua_cairo_cairo_glyph_extents00);
  tolua_function(tolua_S,"cairo_font_extents",tolua_cairo_cairo_font_extents00);
  tolua_function(tolua_S,"cairo_font_face_reference",tolua_cairo_cairo_font_face_reference00);
  tolua_function(tolua_S,"cairo_font_face_destroy",tolua_cairo_cairo_font_face_destroy00);
  tolua_function(tolua_S,"cairo_font_face_get_reference_count",tolua_cairo_cairo_font_face_get_reference_count00);
  tolua_function(tolua_S,"cairo_font_face_status",tolua_cairo_cairo_font_face_status00);
  tolua_constant(tolua_S,"CAIRO_FONT_TYPE_TOY",CAIRO_FONT_TYPE_TOY);
  tolua_constant(tolua_S,"CAIRO_FONT_TYPE_FT",CAIRO_FONT_TYPE_FT);
  tolua_constant(tolua_S,"CAIRO_FONT_TYPE_WIN32",CAIRO_FONT_TYPE_WIN32);
  tolua_constant(tolua_S,"CAIRO_FONT_TYPE_QUARTZ",CAIRO_FONT_TYPE_QUARTZ);
  tolua_constant(tolua_S,"CAIRO_FONT_TYPE_USER",CAIRO_FONT_TYPE_USER);
  tolua_function(tolua_S,"cairo_font_face_get_type",tolua_cairo_cairo_font_face_get_type00);
  tolua_function(tolua_S,"cairo_font_face_get_user_data",tolua_cairo_cairo_font_face_get_user_data00);
  tolua_function(tolua_S,"cairo_font_face_set_user_data",tolua_cairo_cairo_font_face_set_user_data00);
  tolua_function(tolua_S,"cairo_scaled_font_create",tolua_cairo_cairo_scaled_font_create00);
  tolua_function(tolua_S,"cairo_scaled_font_reference",tolua_cairo_cairo_scaled_font_reference00);
  tolua_function(tolua_S,"cairo_scaled_font_destroy",tolua_cairo_cairo_scaled_font_destroy00);
  tolua_function(tolua_S,"cairo_scaled_font_get_reference_count",tolua_cairo_cairo_scaled_font_get_reference_count00);
  tolua_function(tolua_S,"cairo_scaled_font_status",tolua_cairo_cairo_scaled_font_status00);
  tolua_function(tolua_S,"cairo_scaled_font_get_type",tolua_cairo_cairo_scaled_font_get_type00);
  tolua_function(tolua_S,"cairo_scaled_font_get_user_data",tolua_cairo_cairo_scaled_font_get_user_data00);
  tolua_function(tolua_S,"cairo_scaled_font_set_user_data",tolua_cairo_cairo_scaled_font_set_user_data00);
  tolua_function(tolua_S,"cairo_scaled_font_extents",tolua_cairo_cairo_scaled_font_extents00);
  tolua_function(tolua_S,"cairo_scaled_font_text_extents",tolua_cairo_cairo_scaled_font_text_extents00);
  tolua_function(tolua_S,"cairo_scaled_font_glyph_extents",tolua_cairo_cairo_scaled_font_glyph_extents00);
  tolua_function(tolua_S,"cairo_scaled_font_text_to_glyphs",tolua_cairo_cairo_scaled_font_text_to_glyphs00);
  tolua_function(tolua_S,"cairo_scaled_font_get_font_face",tolua_cairo_cairo_scaled_font_get_font_face00);
  tolua_function(tolua_S,"cairo_scaled_font_get_font_matrix",tolua_cairo_cairo_scaled_font_get_font_matrix00);
  tolua_function(tolua_S,"cairo_scaled_font_get_ctm",tolua_cairo_cairo_scaled_font_get_ctm00);
  tolua_function(tolua_S,"cairo_scaled_font_get_scale_matrix",tolua_cairo_cairo_scaled_font_get_scale_matrix00);
  tolua_function(tolua_S,"cairo_scaled_font_get_font_options",tolua_cairo_cairo_scaled_font_get_font_options00);
  tolua_function(tolua_S,"cairo_toy_font_face_create",tolua_cairo_cairo_toy_font_face_create00);
  tolua_function(tolua_S,"cairo_toy_font_face_get_family",tolua_cairo_cairo_toy_font_face_get_family00);
  tolua_function(tolua_S,"cairo_toy_font_face_get_slant",tolua_cairo_cairo_toy_font_face_get_slant00);
  tolua_function(tolua_S,"cairo_toy_font_face_get_weight",tolua_cairo_cairo_toy_font_face_get_weight00);
  tolua_function(tolua_S,"cairo_user_font_face_create",tolua_cairo_cairo_user_font_face_create00);
  tolua_function(tolua_S,"cairo_user_font_face_set_init_func",tolua_cairo_cairo_user_font_face_set_init_func00);
  tolua_function(tolua_S,"cairo_user_font_face_set_render_glyph_func",tolua_cairo_cairo_user_font_face_set_render_glyph_func00);
  tolua_function(tolua_S,"cairo_user_font_face_set_text_to_glyphs_func",tolua_cairo_cairo_user_font_face_set_text_to_glyphs_func00);
  tolua_function(tolua_S,"cairo_user_font_face_set_unicode_to_glyph_func",tolua_cairo_cairo_user_font_face_set_unicode_to_glyph_func00);
  tolua_function(tolua_S,"cairo_user_font_face_get_init_func",tolua_cairo_cairo_user_font_face_get_init_func00);
  tolua_function(tolua_S,"cairo_user_font_face_get_render_glyph_func",tolua_cairo_cairo_user_font_face_get_render_glyph_func00);
  tolua_function(tolua_S,"cairo_user_font_face_get_text_to_glyphs_func",tolua_cairo_cairo_user_font_face_get_text_to_glyphs_func00);
  tolua_function(tolua_S,"cairo_user_font_face_get_unicode_to_glyph_func",tolua_cairo_cairo_user_font_face_get_unicode_to_glyph_func00);
  tolua_function(tolua_S,"cairo_get_operator",tolua_cairo_cairo_get_operator00);
  tolua_function(tolua_S,"cairo_get_source",tolua_cairo_cairo_get_source00);
  tolua_function(tolua_S,"cairo_get_tolerance",tolua_cairo_cairo_get_tolerance00);
  tolua_function(tolua_S,"cairo_get_antialias",tolua_cairo_cairo_get_antialias00);
  tolua_function(tolua_S,"cairo_has_current_point",tolua_cairo_cairo_has_current_point00);
  tolua_function(tolua_S,"cairo_get_current_point",tolua_cairo_cairo_get_current_point00);
  tolua_function(tolua_S,"cairo_get_fill_rule",tolua_cairo_cairo_get_fill_rule00);
  tolua_function(tolua_S,"cairo_get_line_width",tolua_cairo_cairo_get_line_width00);
  tolua_function(tolua_S,"cairo_get_line_cap",tolua_cairo_cairo_get_line_cap00);
  tolua_function(tolua_S,"cairo_get_line_join",tolua_cairo_cairo_get_line_join00);
  tolua_function(tolua_S,"cairo_get_miter_limit",tolua_cairo_cairo_get_miter_limit00);
  tolua_function(tolua_S,"cairo_get_dash_count",tolua_cairo_cairo_get_dash_count00);
  tolua_function(tolua_S,"cairo_get_dash",tolua_cairo_cairo_get_dash00);
  tolua_function(tolua_S,"cairo_get_matrix",tolua_cairo_cairo_get_matrix00);
  tolua_function(tolua_S,"cairo_get_target",tolua_cairo_cairo_get_target00);
  tolua_function(tolua_S,"cairo_get_group_target",tolua_cairo_cairo_get_group_target00);
  tolua_constant(tolua_S,"CAIRO_PATH_MOVE_TO",CAIRO_PATH_MOVE_TO);
  tolua_constant(tolua_S,"CAIRO_PATH_LINE_TO",CAIRO_PATH_LINE_TO);
  tolua_constant(tolua_S,"CAIRO_PATH_CURVE_TO",CAIRO_PATH_CURVE_TO);
  tolua_constant(tolua_S,"CAIRO_PATH_CLOSE_PATH",CAIRO_PATH_CLOSE_PATH);
  tolua_cclass(tolua_S,"cairo_path_t","cairo_path_t","",NULL);
  tolua_beginmodule(tolua_S,"cairo_path_t");
   tolua_variable(tolua_S,"status",tolua_get_cairo_path_t_status,tolua_set_cairo_path_t_status);
   tolua_variable(tolua_S,"data",tolua_get_cairo_path_t_data_ptr,tolua_set_cairo_path_t_data_ptr);
   tolua_variable(tolua_S,"num_data",tolua_get_cairo_path_t_num_data,tolua_set_cairo_path_t_num_data);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"cairo_copy_path",tolua_cairo_cairo_copy_path00);
  tolua_function(tolua_S,"cairo_copy_path_flat",tolua_cairo_cairo_copy_path_flat00);
  tolua_function(tolua_S,"cairo_append_path",tolua_cairo_cairo_append_path00);
  tolua_function(tolua_S,"cairo_path_destroy",tolua_cairo_cairo_path_destroy00);
  tolua_function(tolua_S,"cairo_status",tolua_cairo_cairo_status00);
  tolua_function(tolua_S,"cairo_status_to_string",tolua_cairo_cairo_status_to_string00);
  tolua_function(tolua_S,"cairo_surface_create_similar",tolua_cairo_cairo_surface_create_similar00);
  tolua_function(tolua_S,"cairo_surface_reference",tolua_cairo_cairo_surface_reference00);
  tolua_function(tolua_S,"cairo_surface_finish",tolua_cairo_cairo_surface_finish00);
  tolua_function(tolua_S,"cairo_surface_destroy",tolua_cairo_cairo_surface_destroy00);
  tolua_function(tolua_S,"cairo_surface_get_reference_count",tolua_cairo_cairo_surface_get_reference_count00);
  tolua_function(tolua_S,"cairo_surface_status",tolua_cairo_cairo_surface_status00);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_IMAGE",CAIRO_SURFACE_TYPE_IMAGE);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_PDF",CAIRO_SURFACE_TYPE_PDF);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_PS",CAIRO_SURFACE_TYPE_PS);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_XLIB",CAIRO_SURFACE_TYPE_XLIB);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_XCB",CAIRO_SURFACE_TYPE_XCB);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_GLITZ",CAIRO_SURFACE_TYPE_GLITZ);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_QUARTZ",CAIRO_SURFACE_TYPE_QUARTZ);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_WIN32",CAIRO_SURFACE_TYPE_WIN32);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_BEOS",CAIRO_SURFACE_TYPE_BEOS);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_DIRECTFB",CAIRO_SURFACE_TYPE_DIRECTFB);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_SVG",CAIRO_SURFACE_TYPE_SVG);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_OS2",CAIRO_SURFACE_TYPE_OS2);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_WIN32_PRINTING",CAIRO_SURFACE_TYPE_WIN32_PRINTING);
  tolua_constant(tolua_S,"CAIRO_SURFACE_TYPE_QUARTZ_IMAGE",CAIRO_SURFACE_TYPE_QUARTZ_IMAGE);
  tolua_function(tolua_S,"cairo_surface_get_type",tolua_cairo_cairo_surface_get_type00);
  tolua_function(tolua_S,"cairo_surface_get_content",tolua_cairo_cairo_surface_get_content00);
  tolua_function(tolua_S,"cairo_surface_write_to_png",tolua_cairo_cairo_surface_write_to_png00);
  tolua_function(tolua_S,"cairo_surface_write_to_png_stream",tolua_cairo_cairo_surface_write_to_png_stream00);
  tolua_function(tolua_S,"cairo_surface_get_user_data",tolua_cairo_cairo_surface_get_user_data00);
  tolua_function(tolua_S,"cairo_surface_set_user_data",tolua_cairo_cairo_surface_set_user_data00);
  tolua_function(tolua_S,"cairo_surface_get_font_options",tolua_cairo_cairo_surface_get_font_options00);
  tolua_function(tolua_S,"cairo_surface_flush",tolua_cairo_cairo_surface_flush00);
  tolua_function(tolua_S,"cairo_surface_mark_dirty",tolua_cairo_cairo_surface_mark_dirty00);
  tolua_function(tolua_S,"cairo_surface_mark_dirty_rectangle",tolua_cairo_cairo_surface_mark_dirty_rectangle00);
  tolua_function(tolua_S,"cairo_surface_set_device_offset",tolua_cairo_cairo_surface_set_device_offset00);
  tolua_function(tolua_S,"cairo_surface_get_device_offset",tolua_cairo_cairo_surface_get_device_offset00);
  tolua_function(tolua_S,"cairo_surface_set_fallback_resolution",tolua_cairo_cairo_surface_set_fallback_resolution00);
  tolua_function(tolua_S,"cairo_surface_get_fallback_resolution",tolua_cairo_cairo_surface_get_fallback_resolution00);
  tolua_function(tolua_S,"cairo_surface_copy_page",tolua_cairo_cairo_surface_copy_page00);
  tolua_function(tolua_S,"cairo_surface_show_page",tolua_cairo_cairo_surface_show_page00);
  tolua_function(tolua_S,"cairo_surface_has_show_text_glyphs",tolua_cairo_cairo_surface_has_show_text_glyphs00);
  tolua_constant(tolua_S,"CAIRO_FORMAT_ARGB32",CAIRO_FORMAT_ARGB32);
  tolua_constant(tolua_S,"CAIRO_FORMAT_RGB24",CAIRO_FORMAT_RGB24);
  tolua_constant(tolua_S,"CAIRO_FORMAT_A8",CAIRO_FORMAT_A8);
  tolua_constant(tolua_S,"CAIRO_FORMAT_A1",CAIRO_FORMAT_A1);
  tolua_function(tolua_S,"cairo_image_surface_create",tolua_cairo_cairo_image_surface_create00);
  tolua_function(tolua_S,"cairo_format_stride_for_width",tolua_cairo_cairo_format_stride_for_width00);
  tolua_function(tolua_S,"cairo_image_surface_create_for_data",tolua_cairo_cairo_image_surface_create_for_data00);
  tolua_function(tolua_S,"cairo_image_surface_get_data",tolua_cairo_cairo_image_surface_get_data00);
  tolua_function(tolua_S,"cairo_image_surface_get_format",tolua_cairo_cairo_image_surface_get_format00);
  tolua_function(tolua_S,"cairo_image_surface_get_width",tolua_cairo_cairo_image_surface_get_width00);
  tolua_function(tolua_S,"cairo_image_surface_get_height",tolua_cairo_cairo_image_surface_get_height00);
  tolua_function(tolua_S,"cairo_image_surface_get_stride",tolua_cairo_cairo_image_surface_get_stride00);
  tolua_function(tolua_S,"cairo_image_surface_create_from_png",tolua_cairo_cairo_image_surface_create_from_png00);
  tolua_function(tolua_S,"cairo_image_surface_create_from_png_stream",tolua_cairo_cairo_image_surface_create_from_png_stream00);
  tolua_function(tolua_S,"cairo_pattern_create_rgb",tolua_cairo_cairo_pattern_create_rgb00);
  tolua_function(tolua_S,"cairo_pattern_create_rgba",tolua_cairo_cairo_pattern_create_rgba00);
  tolua_function(tolua_S,"cairo_pattern_create_for_surface",tolua_cairo_cairo_pattern_create_for_surface00);
  tolua_function(tolua_S,"cairo_pattern_create_linear",tolua_cairo_cairo_pattern_create_linear00);
  tolua_function(tolua_S,"cairo_pattern_create_radial",tolua_cairo_cairo_pattern_create_radial00);
  tolua_function(tolua_S,"cairo_pattern_reference",tolua_cairo_cairo_pattern_reference00);
  tolua_function(tolua_S,"cairo_pattern_destroy",tolua_cairo_cairo_pattern_destroy00);
  tolua_function(tolua_S,"cairo_pattern_get_reference_count",tolua_cairo_cairo_pattern_get_reference_count00);
  tolua_function(tolua_S,"cairo_pattern_status",tolua_cairo_cairo_pattern_status00);
  tolua_function(tolua_S,"cairo_pattern_get_user_data",tolua_cairo_cairo_pattern_get_user_data00);
  tolua_function(tolua_S,"cairo_pattern_set_user_data",tolua_cairo_cairo_pattern_set_user_data00);
  tolua_constant(tolua_S,"CAIRO_PATTERN_TYPE_SOLID",CAIRO_PATTERN_TYPE_SOLID);
  tolua_constant(tolua_S,"CAIRO_PATTERN_TYPE_SURFACE",CAIRO_PATTERN_TYPE_SURFACE);
  tolua_constant(tolua_S,"CAIRO_PATTERN_TYPE_LINEAR",CAIRO_PATTERN_TYPE_LINEAR);
  tolua_constant(tolua_S,"CAIRO_PATTERN_TYPE_RADIAL",CAIRO_PATTERN_TYPE_RADIAL);
  tolua_function(tolua_S,"cairo_pattern_get_type",tolua_cairo_cairo_pattern_get_type00);
  tolua_function(tolua_S,"cairo_pattern_add_color_stop_rgb",tolua_cairo_cairo_pattern_add_color_stop_rgb00);
  tolua_function(tolua_S,"cairo_pattern_add_color_stop_rgba",tolua_cairo_cairo_pattern_add_color_stop_rgba00);
  tolua_function(tolua_S,"cairo_pattern_set_matrix",tolua_cairo_cairo_pattern_set_matrix00);
  tolua_function(tolua_S,"cairo_pattern_get_matrix",tolua_cairo_cairo_pattern_get_matrix00);
  tolua_constant(tolua_S,"CAIRO_EXTEND_NONE",CAIRO_EXTEND_NONE);
  tolua_constant(tolua_S,"CAIRO_EXTEND_REPEAT",CAIRO_EXTEND_REPEAT);
  tolua_constant(tolua_S,"CAIRO_EXTEND_REFLECT",CAIRO_EXTEND_REFLECT);
  tolua_constant(tolua_S,"CAIRO_EXTEND_PAD",CAIRO_EXTEND_PAD);
  tolua_function(tolua_S,"cairo_pattern_set_extend",tolua_cairo_cairo_pattern_set_extend00);
  tolua_function(tolua_S,"cairo_pattern_get_extend",tolua_cairo_cairo_pattern_get_extend00);
  tolua_function(tolua_S,"cairo_pattern_set_filter",tolua_cairo_cairo_pattern_set_filter00);
  tolua_function(tolua_S,"cairo_pattern_get_filter",tolua_cairo_cairo_pattern_get_filter00);
  tolua_function(tolua_S,"cairo_pattern_get_rgba",tolua_cairo_cairo_pattern_get_rgba00);
  tolua_function(tolua_S,"cairo_pattern_get_surface",tolua_cairo_cairo_pattern_get_surface00);
  tolua_function(tolua_S,"cairo_pattern_get_color_stop_rgba",tolua_cairo_cairo_pattern_get_color_stop_rgba00);
  tolua_function(tolua_S,"cairo_pattern_get_color_stop_count",tolua_cairo_cairo_pattern_get_color_stop_count00);
  tolua_function(tolua_S,"cairo_pattern_get_linear_points",tolua_cairo_cairo_pattern_get_linear_points00);
  tolua_function(tolua_S,"cairo_pattern_get_radial_circles",tolua_cairo_cairo_pattern_get_radial_circles00);
  tolua_function(tolua_S,"cairo_matrix_init",tolua_cairo_cairo_matrix_init00);
  tolua_function(tolua_S,"cairo_matrix_init_identity",tolua_cairo_cairo_matrix_init_identity00);
  tolua_function(tolua_S,"cairo_matrix_init_translate",tolua_cairo_cairo_matrix_init_translate00);
  tolua_function(tolua_S,"cairo_matrix_init_scale",tolua_cairo_cairo_matrix_init_scale00);
  tolua_function(tolua_S,"cairo_matrix_init_rotate",tolua_cairo_cairo_matrix_init_rotate00);
  tolua_function(tolua_S,"cairo_matrix_translate",tolua_cairo_cairo_matrix_translate00);
  tolua_function(tolua_S,"cairo_matrix_scale",tolua_cairo_cairo_matrix_scale00);
  tolua_function(tolua_S,"cairo_matrix_rotate",tolua_cairo_cairo_matrix_rotate00);
  tolua_function(tolua_S,"cairo_matrix_invert",tolua_cairo_cairo_matrix_invert00);
  tolua_function(tolua_S,"cairo_matrix_multiply",tolua_cairo_cairo_matrix_multiply00);
  tolua_function(tolua_S,"cairo_matrix_transform_distance",tolua_cairo_cairo_matrix_transform_distance00);
  tolua_function(tolua_S,"cairo_matrix_transform_point",tolua_cairo_cairo_matrix_transform_point00);
  tolua_function(tolua_S,"cairo_debug_reset_static_data",tolua_cairo_cairo_debug_reset_static_data00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cairo (lua_State* tolua_S) {
 return tolua_cairo_open(tolua_S);
};
#endif

