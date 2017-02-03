/*
** Lua binding: imlib2
** Generated automatically by tolua++-1.0.93 on Thu May  3 14:52:34 2012.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

/* Exported function */
TOLUA_API int  tolua_imlib2_open (lua_State* tolua_S);

#include <Imlib2.h>
#include <X11/Xlib.h>
#define _userdata void*

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_Pixmap (lua_State* tolua_S)
{
 Pixmap* self = (Pixmap*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Colormap (lua_State* tolua_S)
{
 Colormap* self = (Colormap*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Drawable (lua_State* tolua_S)
{
 Drawable* self = (Drawable*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_Imlib_Progress_Function (lua_State* tolua_S)
{
 Imlib_Progress_Function* self = (Imlib_Progress_Function*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"Visual");
 tolua_usertype(tolua_S,"Imlib_Data_Destructor_Function");
 tolua_usertype(tolua_S,"Imlib_Progress_Function");
 tolua_usertype(tolua_S,"Pixmap");
 tolua_usertype(tolua_S,"Colormap");
 tolua_usertype(tolua_S,"Drawable");
 tolua_usertype(tolua_S,"Display");
 tolua_usertype(tolua_S,"XImage");
 tolua_usertype(tolua_S,"_imlib_border");
 tolua_usertype(tolua_S,"_imlib_color");
}

/* function: imlib_context_new */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_new00
static int tolua_imlib2_imlib_context_new00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_new();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_free */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_free00
static int tolua_imlib2_imlib_context_free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata context = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_free(context);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_push */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_push00
static int tolua_imlib2_imlib_context_push00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata context = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_push(context);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_push'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_pop */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_pop00
static int tolua_imlib2_imlib_context_pop00(lua_State* tolua_S)
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
   imlib_context_pop();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_pop'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get00
static int tolua_imlib2_imlib_context_get00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_display */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_display00
static int tolua_imlib2_imlib_context_set_display00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Display",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Display* display = ((Display*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_display(display);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_disconnect_display */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_disconnect_display00
static int tolua_imlib2_imlib_context_disconnect_display00(lua_State* tolua_S)
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
   imlib_context_disconnect_display();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_disconnect_display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_visual */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_visual00
static int tolua_imlib2_imlib_context_set_visual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Visual",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Visual* visual = ((Visual*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_visual(visual);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_visual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_colormap */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_colormap00
static int tolua_imlib2_imlib_context_set_colormap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Colormap",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Colormap colormap = *((Colormap*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_colormap(colormap);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_colormap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_drawable00
static int tolua_imlib2_imlib_context_set_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Drawable",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Drawable drawable = *((Drawable*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_drawable(drawable);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_mask */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_mask00
static int tolua_imlib2_imlib_context_set_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap mask = *((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_mask(mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_dither_mask */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_dither_mask00
static int tolua_imlib2_imlib_context_set_dither_mask00(lua_State* tolua_S)
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
  char dither_mask = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_dither_mask(dither_mask);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_dither_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_mask_alpha_threshold */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_mask_alpha_threshold00
static int tolua_imlib2_imlib_context_set_mask_alpha_threshold00(lua_State* tolua_S)
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
  int mask_alpha_threshold = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_mask_alpha_threshold(mask_alpha_threshold);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_mask_alpha_threshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_anti_alias */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_anti_alias00
static int tolua_imlib2_imlib_context_set_anti_alias00(lua_State* tolua_S)
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
  char anti_alias = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_anti_alias(anti_alias);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_anti_alias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_dither */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_dither00
static int tolua_imlib2_imlib_context_set_dither00(lua_State* tolua_S)
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
  char dither = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_dither(dither);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_dither'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_blend */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_blend00
static int tolua_imlib2_imlib_context_set_blend00(lua_State* tolua_S)
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
  char blend = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_blend(blend);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_blend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color_modifier00
static int tolua_imlib2_imlib_context_set_color_modifier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata color_modifier = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_set_color_modifier(color_modifier);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_operation */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_operation00
static int tolua_imlib2_imlib_context_set_operation00(lua_State* tolua_S)
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
  Imlib_Operation operation = ((Imlib_Operation) (int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_operation(operation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_operation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_font */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_font00
static int tolua_imlib2_imlib_context_set_font00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata font = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_set_font(font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_direction */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_direction00
static int tolua_imlib2_imlib_context_set_direction00(lua_State* tolua_S)
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
  Imlib_Text_Direction direction = ((Imlib_Text_Direction) (int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_direction(direction);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_direction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_angle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_angle00
static int tolua_imlib2_imlib_context_set_angle00(lua_State* tolua_S)
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
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_angle(angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color00
static int tolua_imlib2_imlib_context_set_color00(lua_State* tolua_S)
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
  int red = ((int)  tolua_tonumber(tolua_S,1,0));
  int green = ((int)  tolua_tonumber(tolua_S,2,0));
  int blue = ((int)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_set_color(red,green,blue,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color_hsva */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color_hsva00
static int tolua_imlib2_imlib_context_set_color_hsva00(lua_State* tolua_S)
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
  float hue = ((float)  tolua_tonumber(tolua_S,1,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,2,0));
  float value = ((float)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_set_color_hsva(hue,saturation,value,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color_hsva'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color_hlsa */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color_hlsa00
static int tolua_imlib2_imlib_context_set_color_hlsa00(lua_State* tolua_S)
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
  float hue = ((float)  tolua_tonumber(tolua_S,1,0));
  float lightness = ((float)  tolua_tonumber(tolua_S,2,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_set_color_hlsa(hue,lightness,saturation,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color_hlsa'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color_cmya */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color_cmya00
static int tolua_imlib2_imlib_context_set_color_cmya00(lua_State* tolua_S)
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
  int cyan = ((int)  tolua_tonumber(tolua_S,1,0));
  int magenta = ((int)  tolua_tonumber(tolua_S,2,0));
  int yellow = ((int)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_set_color_cmya(cyan,magenta,yellow,alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color_cmya'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_color_range */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_color_range00
static int tolua_imlib2_imlib_context_set_color_range00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata color_range = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_set_color_range(color_range);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_color_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_progress_function */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_progress_function00
static int tolua_imlib2_imlib_context_set_progress_function00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Imlib_Progress_Function",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Imlib_Progress_Function progress_function = *((Imlib_Progress_Function*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_context_set_progress_function(progress_function);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_progress_function'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_progress_granularity */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_progress_granularity00
static int tolua_imlib2_imlib_context_set_progress_granularity00(lua_State* tolua_S)
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
  char progress_granularity = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_progress_granularity(progress_granularity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_progress_granularity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_image00
static int tolua_imlib2_imlib_context_set_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata image = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_set_image(image);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_cliprect */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_cliprect00
static int tolua_imlib2_imlib_context_set_cliprect00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int w = ((int)  tolua_tonumber(tolua_S,3,0));
  int h = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_set_cliprect(x,y,w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_cliprect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_TTF_encoding */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_TTF_encoding00
static int tolua_imlib2_imlib_context_set_TTF_encoding00(lua_State* tolua_S)
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
  Imlib_TTF_Encoding encoding = ((Imlib_TTF_Encoding) (int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_context_set_TTF_encoding(encoding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_TTF_encoding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_display */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_display00
static int tolua_imlib2_imlib_context_get_display00(lua_State* tolua_S)
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
   Display* tolua_ret = (Display*)  imlib_context_get_display();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Display");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_display'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_visual */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_visual00
static int tolua_imlib2_imlib_context_get_visual00(lua_State* tolua_S)
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
   Visual* tolua_ret = (Visual*)  imlib_context_get_visual();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Visual");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_visual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_colormap */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_colormap00
static int tolua_imlib2_imlib_context_get_colormap00(lua_State* tolua_S)
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
   Colormap tolua_ret = (Colormap)  imlib_context_get_colormap();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Colormap)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Colormap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Colormap));
     tolua_pushusertype(tolua_S,tolua_obj,"Colormap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_colormap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_drawable00
static int tolua_imlib2_imlib_context_get_drawable00(lua_State* tolua_S)
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
   Drawable tolua_ret = (Drawable)  imlib_context_get_drawable();
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
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_mask */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_mask00
static int tolua_imlib2_imlib_context_get_mask00(lua_State* tolua_S)
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
   Pixmap tolua_ret = (Pixmap)  imlib_context_get_mask();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Pixmap)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Pixmap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Pixmap));
     tolua_pushusertype(tolua_S,tolua_obj,"Pixmap");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_dither_mask */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_dither_mask00
static int tolua_imlib2_imlib_context_get_dither_mask00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_context_get_dither_mask();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_dither_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_anti_alias */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_anti_alias00
static int tolua_imlib2_imlib_context_get_anti_alias00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_context_get_anti_alias();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_anti_alias'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_mask_alpha_threshold */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_mask_alpha_threshold00
static int tolua_imlib2_imlib_context_get_mask_alpha_threshold00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_context_get_mask_alpha_threshold();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_mask_alpha_threshold'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_dither */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_dither00
static int tolua_imlib2_imlib_context_get_dither00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_context_get_dither();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_dither'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_blend */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_blend00
static int tolua_imlib2_imlib_context_get_blend00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_context_get_blend();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_blend'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color_modifier00
static int tolua_imlib2_imlib_context_get_color_modifier00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get_color_modifier();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_operation */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_operation00
static int tolua_imlib2_imlib_context_get_operation00(lua_State* tolua_S)
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
   Imlib_Operation tolua_ret = (Imlib_Operation)  imlib_context_get_operation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_operation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_font */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_font00
static int tolua_imlib2_imlib_context_get_font00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get_font();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_angle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_angle00
static int tolua_imlib2_imlib_context_get_angle00(lua_State* tolua_S)
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
   double tolua_ret = (double)  imlib_context_get_angle();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_direction */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_direction00
static int tolua_imlib2_imlib_context_get_direction00(lua_State* tolua_S)
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
   Imlib_Text_Direction tolua_ret = (Imlib_Text_Direction)  imlib_context_get_direction();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_direction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color00
static int tolua_imlib2_imlib_context_get_color00(lua_State* tolua_S)
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
  int red = ((int)  tolua_tonumber(tolua_S,1,0));
  int green = ((int)  tolua_tonumber(tolua_S,2,0));
  int blue = ((int)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_get_color(&red,&green,&blue,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)red);
   tolua_pushnumber(tolua_S,(lua_Number)green);
   tolua_pushnumber(tolua_S,(lua_Number)blue);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color_hsva */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color_hsva00
static int tolua_imlib2_imlib_context_get_color_hsva00(lua_State* tolua_S)
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
  float hue = ((float)  tolua_tonumber(tolua_S,1,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,2,0));
  float value = ((float)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_get_color_hsva(&hue,&saturation,&value,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)hue);
   tolua_pushnumber(tolua_S,(lua_Number)saturation);
   tolua_pushnumber(tolua_S,(lua_Number)value);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color_hsva'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color_hlsa */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color_hlsa00
static int tolua_imlib2_imlib_context_get_color_hlsa00(lua_State* tolua_S)
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
  float hue = ((float)  tolua_tonumber(tolua_S,1,0));
  float lightness = ((float)  tolua_tonumber(tolua_S,2,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_get_color_hlsa(&hue,&lightness,&saturation,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)hue);
   tolua_pushnumber(tolua_S,(lua_Number)lightness);
   tolua_pushnumber(tolua_S,(lua_Number)saturation);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color_hlsa'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color_cmya */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color_cmya00
static int tolua_imlib2_imlib_context_get_color_cmya00(lua_State* tolua_S)
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
  int cyan = ((int)  tolua_tonumber(tolua_S,1,0));
  int magenta = ((int)  tolua_tonumber(tolua_S,2,0));
  int yellow = ((int)  tolua_tonumber(tolua_S,3,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_get_color_cmya(&cyan,&magenta,&yellow,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)cyan);
   tolua_pushnumber(tolua_S,(lua_Number)magenta);
   tolua_pushnumber(tolua_S,(lua_Number)yellow);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color_cmya'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_imlib_color */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_imlib_color00
static int tolua_imlib2_imlib_context_get_imlib_color00(lua_State* tolua_S)
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
   struct _imlib_color* tolua_ret = ( struct _imlib_color*)  imlib_context_get_imlib_color();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_imlib_color");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_imlib_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_color_range */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_color_range00
static int tolua_imlib2_imlib_context_get_color_range00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get_color_range();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_color_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_progress_function */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_progress_function00
static int tolua_imlib2_imlib_context_get_progress_function00(lua_State* tolua_S)
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
   Imlib_Progress_Function tolua_ret = (Imlib_Progress_Function)  imlib_context_get_progress_function();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((Imlib_Progress_Function)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"Imlib_Progress_Function");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(Imlib_Progress_Function));
     tolua_pushusertype(tolua_S,tolua_obj,"Imlib_Progress_Function");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_progress_function'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_progress_granularity */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_progress_granularity00
static int tolua_imlib2_imlib_context_get_progress_granularity00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_context_get_progress_granularity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_progress_granularity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_image00
static int tolua_imlib2_imlib_context_get_image00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get_image();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_cliprect */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_cliprect00
static int tolua_imlib2_imlib_context_get_cliprect00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int w = ((int)  tolua_tonumber(tolua_S,3,0));
  int h = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_context_get_cliprect(&x,&y,&w,&h);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
   tolua_pushnumber(tolua_S,(lua_Number)w);
   tolua_pushnumber(tolua_S,(lua_Number)h);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_cliprect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_TTF_encoding */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_TTF_encoding00
static int tolua_imlib2_imlib_context_get_TTF_encoding00(lua_State* tolua_S)
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
   Imlib_TTF_Encoding tolua_ret = (Imlib_TTF_Encoding)  imlib_context_get_TTF_encoding();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_TTF_encoding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_cache_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_cache_size00
static int tolua_imlib2_imlib_get_cache_size00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_cache_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_cache_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_set_cache_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_set_cache_size00
static int tolua_imlib2_imlib_set_cache_size00(lua_State* tolua_S)
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
  int bytes = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_set_cache_size(bytes);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_set_cache_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_color_usage */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_color_usage00
static int tolua_imlib2_imlib_get_color_usage00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_color_usage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_color_usage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_set_color_usage */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_set_color_usage00
static int tolua_imlib2_imlib_set_color_usage00(lua_State* tolua_S)
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
  int max = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_set_color_usage(max);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_set_color_usage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_flush_loaders */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_flush_loaders00
static int tolua_imlib2_imlib_flush_loaders00(lua_State* tolua_S)
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
   imlib_flush_loaders();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_flush_loaders'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_visual_depth */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_visual_depth00
static int tolua_imlib2_imlib_get_visual_depth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Display",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Visual",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Display* display = ((Display*)  tolua_tousertype(tolua_S,1,0));
  Visual* visual = ((Visual*)  tolua_tousertype(tolua_S,2,0));
  {
   int tolua_ret = (int)  imlib_get_visual_depth(display,visual);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_visual_depth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_best_visual */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_best_visual00
static int tolua_imlib2_imlib_get_best_visual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Display",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Display* display = ((Display*)  tolua_tousertype(tolua_S,1,0));
  int screen = ((int)  tolua_tonumber(tolua_S,2,0));
  int depth_return = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   Visual* tolua_ret = (Visual*)  imlib_get_best_visual(display,screen,&depth_return);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"Visual");
   tolua_pushnumber(tolua_S,(lua_Number)depth_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_best_visual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_image00
static int tolua_imlib2_imlib_load_image00(lua_State* tolua_S)
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
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_image(file);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_image_immediately */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_image_immediately00
static int tolua_imlib2_imlib_load_image_immediately00(lua_State* tolua_S)
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
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_image_immediately(file);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_image_immediately'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_image_without_cache */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_image_without_cache00
static int tolua_imlib2_imlib_load_image_without_cache00(lua_State* tolua_S)
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
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_image_without_cache(file);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_image_without_cache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_image_immediately_without_cache */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_image_immediately_without_cache00
static int tolua_imlib2_imlib_load_image_immediately_without_cache00(lua_State* tolua_S)
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
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_image_immediately_without_cache(file);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_image_immediately_without_cache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_image_with_error_return */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_image_with_error_return00
static int tolua_imlib2_imlib_load_image_with_error_return00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,1,0));
  Imlib_Load_Error error_return = ((Imlib_Load_Error) (int)  tolua_tonumber(tolua_S,2,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_image_with_error_return(file,&error_return);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)error_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_image_with_error_return'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_image00
static int tolua_imlib2_imlib_free_image00(lua_State* tolua_S)
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
   imlib_free_image();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_image_and_decache */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_image_and_decache00
static int tolua_imlib2_imlib_free_image_and_decache00(lua_State* tolua_S)
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
   imlib_free_image_and_decache();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_image_and_decache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_width */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_width00
static int tolua_imlib2_imlib_image_get_width00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_image_get_width();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_width'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_height */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_height00
static int tolua_imlib2_imlib_image_get_height00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_image_get_height();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_height'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_filename */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_filename00
static int tolua_imlib2_imlib_image_get_filename00(lua_State* tolua_S)
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
   const char* tolua_ret = (const char*)  imlib_image_get_filename();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_filename'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_data */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_data00
static int tolua_imlib2_imlib_image_get_data00(lua_State* tolua_S)
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
   void* tolua_ret = (void*)  imlib_image_get_data();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_data_for_reading_only */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_data_for_reading_only00
static int tolua_imlib2_imlib_image_get_data_for_reading_only00(lua_State* tolua_S)
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
   void* tolua_ret = (void*)  imlib_image_get_data_for_reading_only();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_data_for_reading_only'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_put_back_data */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_put_back_data00
static int tolua_imlib2_imlib_image_put_back_data00(lua_State* tolua_S)
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
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_put_back_data(&data);
   tolua_pushnumber(tolua_S,(lua_Number)data);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_put_back_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_has_alpha */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_has_alpha00
static int tolua_imlib2_imlib_image_has_alpha00(lua_State* tolua_S)
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
   char tolua_ret = (char)  imlib_image_has_alpha();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_has_alpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_changes_on_disk */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_changes_on_disk00
static int tolua_imlib2_imlib_image_set_changes_on_disk00(lua_State* tolua_S)
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
   imlib_image_set_changes_on_disk();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_changes_on_disk'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_border */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_border00
static int tolua_imlib2_imlib_image_get_border00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_imlib_border",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _imlib_border* border = (( struct _imlib_border*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_image_get_border(border);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_border'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_border */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_border00
static int tolua_imlib2_imlib_image_set_border00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"_imlib_border",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  struct _imlib_border* border = (( struct _imlib_border*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_image_set_border(border);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_border'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_format */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_format00
static int tolua_imlib2_imlib_image_set_format00(lua_State* tolua_S)
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
  const char* format = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   imlib_image_set_format(format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_format'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_irrelevant_format */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_irrelevant_format00
static int tolua_imlib2_imlib_image_set_irrelevant_format00(lua_State* tolua_S)
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
  char irrelevant = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_set_irrelevant_format(irrelevant);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_irrelevant_format'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_irrelevant_border */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_irrelevant_border00
static int tolua_imlib2_imlib_image_set_irrelevant_border00(lua_State* tolua_S)
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
  char irrelevant = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_set_irrelevant_border(irrelevant);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_irrelevant_border'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_irrelevant_alpha */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_irrelevant_alpha00
static int tolua_imlib2_imlib_image_set_irrelevant_alpha00(lua_State* tolua_S)
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
  char irrelevant = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_set_irrelevant_alpha(irrelevant);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_irrelevant_alpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_format */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_format00
static int tolua_imlib2_imlib_image_format00(lua_State* tolua_S)
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
   char* tolua_ret = (char*)  imlib_image_format();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_format'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_set_has_alpha */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_set_has_alpha00
static int tolua_imlib2_imlib_image_set_has_alpha00(lua_State* tolua_S)
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
  char has_alpha = ((char)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_set_has_alpha(has_alpha);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_set_has_alpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_query_pixel */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_query_pixel00
static int tolua_imlib2_imlib_image_query_pixel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"_imlib_color",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  struct _imlib_color* color_return = (( struct _imlib_color*)  tolua_tousertype(tolua_S,3,0));
  {
   imlib_image_query_pixel(x,y,color_return);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_query_pixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_query_pixel_hsva */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_query_pixel_hsva00
static int tolua_imlib2_imlib_image_query_pixel_hsva00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  float hue = ((float)  tolua_tonumber(tolua_S,3,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,4,0));
  float value = ((float)  tolua_tonumber(tolua_S,5,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_image_query_pixel_hsva(x,y,&hue,&saturation,&value,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)hue);
   tolua_pushnumber(tolua_S,(lua_Number)saturation);
   tolua_pushnumber(tolua_S,(lua_Number)value);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_query_pixel_hsva'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_query_pixel_hlsa */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_query_pixel_hlsa00
static int tolua_imlib2_imlib_image_query_pixel_hlsa00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  float hue = ((float)  tolua_tonumber(tolua_S,3,0));
  float lightness = ((float)  tolua_tonumber(tolua_S,4,0));
  float saturation = ((float)  tolua_tonumber(tolua_S,5,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_image_query_pixel_hlsa(x,y,&hue,&lightness,&saturation,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)hue);
   tolua_pushnumber(tolua_S,(lua_Number)lightness);
   tolua_pushnumber(tolua_S,(lua_Number)saturation);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_query_pixel_hlsa'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_query_pixel_cmya */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_query_pixel_cmya00
static int tolua_imlib2_imlib_image_query_pixel_cmya00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int cyan = ((int)  tolua_tonumber(tolua_S,3,0));
  int magenta = ((int)  tolua_tonumber(tolua_S,4,0));
  int yellow = ((int)  tolua_tonumber(tolua_S,5,0));
  int alpha = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_image_query_pixel_cmya(x,y,&cyan,&magenta,&yellow,&alpha);
   tolua_pushnumber(tolua_S,(lua_Number)cyan);
   tolua_pushnumber(tolua_S,(lua_Number)magenta);
   tolua_pushnumber(tolua_S,(lua_Number)yellow);
   tolua_pushnumber(tolua_S,(lua_Number)alpha);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_query_pixel_cmya'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_pixmaps_for_whole_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_pixmaps_for_whole_image00
static int tolua_imlib2_imlib_render_pixmaps_for_whole_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Pixmap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap* pixmap_return = ((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  Pixmap* mask_return = ((Pixmap*)  tolua_tousertype(tolua_S,2,0));
  {
   imlib_render_pixmaps_for_whole_image(pixmap_return,mask_return);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_pixmaps_for_whole_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_pixmaps_for_whole_image_at_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_pixmaps_for_whole_image_at_size00
static int tolua_imlib2_imlib_render_pixmaps_for_whole_image_at_size00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"Pixmap",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap* pixmap_return = ((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  Pixmap* mask_return = ((Pixmap*)  tolua_tousertype(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_render_pixmaps_for_whole_image_at_size(pixmap_return,mask_return,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_pixmaps_for_whole_image_at_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_pixmap_and_mask */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_pixmap_and_mask00
static int tolua_imlib2_imlib_free_pixmap_and_mask00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap pixmap = *((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  {
   imlib_free_pixmap_and_mask(pixmap);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_pixmap_and_mask'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_on_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_on_drawable00
static int tolua_imlib2_imlib_render_image_on_drawable00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   imlib_render_image_on_drawable(x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_on_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_on_drawable_at_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_on_drawable_at_size00
static int tolua_imlib2_imlib_render_image_on_drawable_at_size00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_render_image_on_drawable_at_size(x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_on_drawable_at_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_part_on_drawable_at_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_part_on_drawable_at_size00
static int tolua_imlib2_imlib_render_image_part_on_drawable_at_size00(lua_State* tolua_S)
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
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int source_x = ((int)  tolua_tonumber(tolua_S,1,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,2,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,4,0));
  int x = ((int)  tolua_tonumber(tolua_S,5,0));
  int y = ((int)  tolua_tonumber(tolua_S,6,0));
  int width = ((int)  tolua_tonumber(tolua_S,7,0));
  int height = ((int)  tolua_tonumber(tolua_S,8,0));
  {
   imlib_render_image_part_on_drawable_at_size(source_x,source_y,source_width,source_height,x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_part_on_drawable_at_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_get_pixel_color */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_get_pixel_color00
static int tolua_imlib2_imlib_render_get_pixel_color00(lua_State* tolua_S)
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
   unsigned int tolua_ret = (unsigned int)  imlib_render_get_pixel_color();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_get_pixel_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_blend_image_onto_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_blend_image_onto_image00
static int tolua_imlib2_imlib_blend_image_onto_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata source_image = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  char merge_alpha = ((char)  tolua_tonumber(tolua_S,2,0));
  int source_x = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,5,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,7,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,8,0));
  int destination_width = ((int)  tolua_tonumber(tolua_S,9,0));
  int destination_height = ((int)  tolua_tonumber(tolua_S,10,0));
  {
   imlib_blend_image_onto_image(source_image,merge_alpha,source_x,source_y,source_width,source_height,destination_x,destination_y,destination_width,destination_height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_blend_image_onto_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_image00
static int tolua_imlib2_imlib_create_image00(lua_State* tolua_S)
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
  int width = ((int)  tolua_tonumber(tolua_S,1,0));
  int height = ((int)  tolua_tonumber(tolua_S,2,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_image(width,height);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_image_using_data */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_image_using_data00
static int tolua_imlib2_imlib_create_image_using_data00(lua_State* tolua_S)
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
  int width = ((int)  tolua_tonumber(tolua_S,1,0));
  int height = ((int)  tolua_tonumber(tolua_S,2,0));
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_image_using_data(width,height,&data);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)data);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_image_using_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_image_using_copied_data */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_image_using_copied_data00
static int tolua_imlib2_imlib_create_image_using_copied_data00(lua_State* tolua_S)
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
  int width = ((int)  tolua_tonumber(tolua_S,1,0));
  int height = ((int)  tolua_tonumber(tolua_S,2,0));
  unsigned int data = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_image_using_copied_data(width,height,&data);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)data);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_image_using_copied_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_image_from_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_image_from_drawable00
static int tolua_imlib2_imlib_create_image_from_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err)) ||
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
  Pixmap mask = *((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  char need_to_grab_x = ((char)  tolua_tonumber(tolua_S,6,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_image_from_drawable(mask,x,y,width,height,need_to_grab_x);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_image_from_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_image_from_ximage */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_image_from_ximage00
static int tolua_imlib2_imlib_create_image_from_ximage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"XImage",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"XImage",0,&tolua_err) ||
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
  XImage* image = ((XImage*)  tolua_tousertype(tolua_S,1,0));
  XImage* mask = ((XImage*)  tolua_tousertype(tolua_S,2,0));
  int x = ((int)  tolua_tonumber(tolua_S,3,0));
  int y = ((int)  tolua_tonumber(tolua_S,4,0));
  int width = ((int)  tolua_tonumber(tolua_S,5,0));
  int height = ((int)  tolua_tonumber(tolua_S,6,0));
  char need_to_grab_x = ((char)  tolua_tonumber(tolua_S,7,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_image_from_ximage(image,mask,x,y,width,height,need_to_grab_x);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_image_from_ximage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_scaled_image_from_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_scaled_image_from_drawable00
static int tolua_imlib2_imlib_create_scaled_image_from_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,10,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap mask = *((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  int source_x = ((int)  tolua_tonumber(tolua_S,2,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,4,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_width = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_height = ((int)  tolua_tonumber(tolua_S,7,0));
  char need_to_grab_x = ((char)  tolua_tonumber(tolua_S,8,0));
  char get_mask_from_shape = ((char)  tolua_tonumber(tolua_S,9,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_scaled_image_from_drawable(mask,source_x,source_y,source_width,source_height,destination_width,destination_height,need_to_grab_x,get_mask_from_shape);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_scaled_image_from_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_copy_drawable_to_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_copy_drawable_to_image00
static int tolua_imlib2_imlib_copy_drawable_to_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"Pixmap",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  Pixmap mask = *((Pixmap*)  tolua_tousertype(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,7,0));
  char need_to_grab_x = ((char)  tolua_tonumber(tolua_S,8,0));
  {
   char tolua_ret = (char)  imlib_copy_drawable_to_image(mask,x,y,width,height,destination_x,destination_y,need_to_grab_x);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_copy_drawable_to_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_clone_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_clone_image00
static int tolua_imlib2_imlib_clone_image00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_clone_image();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_clone_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_cropped_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_cropped_image00
static int tolua_imlib2_imlib_create_cropped_image00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_cropped_image(x,y,width,height);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_cropped_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_cropped_scaled_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_cropped_scaled_image00
static int tolua_imlib2_imlib_create_cropped_scaled_image00(lua_State* tolua_S)
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
  int source_x = ((int)  tolua_tonumber(tolua_S,1,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,2,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,4,0));
  int destination_width = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_height = ((int)  tolua_tonumber(tolua_S,6,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_cropped_scaled_image(source_x,source_y,source_width,source_height,destination_width,destination_height);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_cropped_scaled_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_clone */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_clone00
static int tolua_imlib2_imlib_updates_clone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_updates_clone(updates);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_clone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_update_append_rect */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_update_append_rect00
static int tolua_imlib2_imlib_update_append_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int w = ((int)  tolua_tonumber(tolua_S,4,0));
  int h = ((int)  tolua_tonumber(tolua_S,5,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_update_append_rect(updates,x,y,w,h);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_update_append_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_merge */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_merge00
static int tolua_imlib2_imlib_updates_merge00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_updates_merge(updates,w,h);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_merge'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_merge_for_rendering */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_merge_for_rendering00
static int tolua_imlib2_imlib_updates_merge_for_rendering00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int w = ((int)  tolua_tonumber(tolua_S,2,0));
  int h = ((int)  tolua_tonumber(tolua_S,3,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_updates_merge_for_rendering(updates,w,h);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_merge_for_rendering'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_free */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_free00
static int tolua_imlib2_imlib_updates_free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_updates_free(updates);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_get_next */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_get_next00
static int tolua_imlib2_imlib_updates_get_next00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_updates_get_next(updates);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_get_next'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_get_coordinates */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_get_coordinates00
static int tolua_imlib2_imlib_updates_get_coordinates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x_return = ((int)  tolua_tonumber(tolua_S,2,0));
  int y_return = ((int)  tolua_tonumber(tolua_S,3,0));
  int width_return = ((int)  tolua_tonumber(tolua_S,4,0));
  int height_return = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   imlib_updates_get_coordinates(updates,&x_return,&y_return,&width_return,&height_return);
   tolua_pushnumber(tolua_S,(lua_Number)x_return);
   tolua_pushnumber(tolua_S,(lua_Number)y_return);
   tolua_pushnumber(tolua_S,(lua_Number)width_return);
   tolua_pushnumber(tolua_S,(lua_Number)height_return);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_get_coordinates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_set_coordinates */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_set_coordinates00
static int tolua_imlib2_imlib_updates_set_coordinates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   imlib_updates_set_coordinates(updates,x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_set_coordinates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_updates_on_drawable */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_updates_on_drawable00
static int tolua_imlib2_imlib_render_image_updates_on_drawable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   imlib_render_image_updates_on_drawable(updates,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_updates_on_drawable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_init */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_init00
static int tolua_imlib2_imlib_updates_init00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_updates_init();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_updates_append_updates */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_updates_append_updates00
static int tolua_imlib2_imlib_updates_append_updates00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata updates = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
   _userdata appended_updates = ((  _userdata)  tolua_touserdata(tolua_S,2,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_updates_append_updates(updates,appended_updates);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_updates_append_updates'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_flip_horizontal */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_flip_horizontal00
static int tolua_imlib2_imlib_image_flip_horizontal00(lua_State* tolua_S)
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
   imlib_image_flip_horizontal();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_flip_horizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_flip_vertical */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_flip_vertical00
static int tolua_imlib2_imlib_image_flip_vertical00(lua_State* tolua_S)
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
   imlib_image_flip_vertical();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_flip_vertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_flip_diagonal */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_flip_diagonal00
static int tolua_imlib2_imlib_image_flip_diagonal00(lua_State* tolua_S)
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
   imlib_image_flip_diagonal();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_flip_diagonal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_orientate */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_orientate00
static int tolua_imlib2_imlib_image_orientate00(lua_State* tolua_S)
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
  int orientation = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_orientate(orientation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_orientate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_blur */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_blur00
static int tolua_imlib2_imlib_image_blur00(lua_State* tolua_S)
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
  int radius = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_blur(radius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_blur'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_sharpen */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_sharpen00
static int tolua_imlib2_imlib_image_sharpen00(lua_State* tolua_S)
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
  int radius = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_image_sharpen(radius);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_sharpen'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_tile_horizontal */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_tile_horizontal00
static int tolua_imlib2_imlib_image_tile_horizontal00(lua_State* tolua_S)
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
   imlib_image_tile_horizontal();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_tile_horizontal'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_tile_vertical */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_tile_vertical00
static int tolua_imlib2_imlib_image_tile_vertical00(lua_State* tolua_S)
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
   imlib_image_tile_vertical();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_tile_vertical'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_tile */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_tile00
static int tolua_imlib2_imlib_image_tile00(lua_State* tolua_S)
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
   imlib_image_tile();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_tile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_load_font */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_load_font00
static int tolua_imlib2_imlib_load_font00(lua_State* tolua_S)
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
  const char* font_name = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_load_font(font_name);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_load_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_font */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_font00
static int tolua_imlib2_imlib_free_font00(lua_State* tolua_S)
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
   imlib_free_font();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_font'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_insert_font_into_fallback_chain */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_insert_font_into_fallback_chain00
static int tolua_imlib2_imlib_insert_font_into_fallback_chain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata font = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
   _userdata fallback_font = ((  _userdata)  tolua_touserdata(tolua_S,2,0));
  {
   int tolua_ret = (int)  imlib_insert_font_into_fallback_chain(font,fallback_font);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_insert_font_into_fallback_chain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_remove_font_from_fallback_chain */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_remove_font_from_fallback_chain00
static int tolua_imlib2_imlib_remove_font_from_fallback_chain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata fallback_font = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_remove_font_from_fallback_chain(fallback_font);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_remove_font_from_fallback_chain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_prev_font_in_fallback_chain */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_prev_font_in_fallback_chain00
static int tolua_imlib2_imlib_get_prev_font_in_fallback_chain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata fn = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_get_prev_font_in_fallback_chain(fn);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_prev_font_in_fallback_chain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_next_font_in_fallback_chain */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_next_font_in_fallback_chain00
static int tolua_imlib2_imlib_get_next_font_in_fallback_chain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata fn = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_get_next_font_in_fallback_chain(fn);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_next_font_in_fallback_chain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_text_draw */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_text_draw00
static int tolua_imlib2_imlib_text_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   imlib_text_draw(x,y,text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_text_draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_text_draw_with_return_metrics */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_text_draw_with_return_metrics00
static int tolua_imlib2_imlib_text_draw_with_return_metrics00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  const char* text = ((const char*)  tolua_tostring(tolua_S,3,0));
  int width_return = ((int)  tolua_tonumber(tolua_S,4,0));
  int height_return = ((int)  tolua_tonumber(tolua_S,5,0));
  int horizontal_advance_return = ((int)  tolua_tonumber(tolua_S,6,0));
  int vertical_advance_return = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   imlib_text_draw_with_return_metrics(x,y,text,&width_return,&height_return,&horizontal_advance_return,&vertical_advance_return);
   tolua_pushnumber(tolua_S,(lua_Number)width_return);
   tolua_pushnumber(tolua_S,(lua_Number)height_return);
   tolua_pushnumber(tolua_S,(lua_Number)horizontal_advance_return);
   tolua_pushnumber(tolua_S,(lua_Number)vertical_advance_return);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_text_draw_with_return_metrics'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_text_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_text_size00
static int tolua_imlib2_imlib_get_text_size00(lua_State* tolua_S)
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  int width_return = ((int)  tolua_tonumber(tolua_S,2,0));
  int height_return = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   imlib_get_text_size(text,&width_return,&height_return);
   tolua_pushnumber(tolua_S,(lua_Number)width_return);
   tolua_pushnumber(tolua_S,(lua_Number)height_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_text_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_text_advance */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_text_advance00
static int tolua_imlib2_imlib_get_text_advance00(lua_State* tolua_S)
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  int horizontal_advance_return = ((int)  tolua_tonumber(tolua_S,2,0));
  int vertical_advance_return = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   imlib_get_text_advance(text,&horizontal_advance_return,&vertical_advance_return);
   tolua_pushnumber(tolua_S,(lua_Number)horizontal_advance_return);
   tolua_pushnumber(tolua_S,(lua_Number)vertical_advance_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_text_advance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_text_inset */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_text_inset00
static int tolua_imlib2_imlib_get_text_inset00(lua_State* tolua_S)
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   int tolua_ret = (int)  imlib_get_text_inset(text);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_text_inset'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_add_path_to_font_path */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_add_path_to_font_path00
static int tolua_imlib2_imlib_add_path_to_font_path00(lua_State* tolua_S)
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
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   imlib_add_path_to_font_path(path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_add_path_to_font_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_remove_path_from_font_path */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_remove_path_from_font_path00
static int tolua_imlib2_imlib_remove_path_from_font_path00(lua_State* tolua_S)
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
  const char* path = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   imlib_remove_path_from_font_path(path);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_remove_path_from_font_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_list_font_path */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_list_font_path00
static int tolua_imlib2_imlib_list_font_path00(lua_State* tolua_S)
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
  int number_return = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   char* tolua_ret = (char*)  imlib_list_font_path(&number_return);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)number_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_list_font_path'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_text_get_index_and_location */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_text_get_index_and_location00
static int tolua_imlib2_imlib_text_get_index_and_location00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int char_x_return = ((int)  tolua_tonumber(tolua_S,4,0));
  int char_y_return = ((int)  tolua_tonumber(tolua_S,5,0));
  int char_width_return = ((int)  tolua_tonumber(tolua_S,6,0));
  int char_height_return = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   int tolua_ret = (int)  imlib_text_get_index_and_location(text,x,y,&char_x_return,&char_y_return,&char_width_return,&char_height_return);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)char_x_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_y_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_width_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_height_return);
  }
 }
 return 5;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_text_get_index_and_location'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_text_get_location_at_index */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_text_get_location_at_index00
static int tolua_imlib2_imlib_text_get_location_at_index00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
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
  const char* text = ((const char*)  tolua_tostring(tolua_S,1,0));
  int index = ((int)  tolua_tonumber(tolua_S,2,0));
  int char_x_return = ((int)  tolua_tonumber(tolua_S,3,0));
  int char_y_return = ((int)  tolua_tonumber(tolua_S,4,0));
  int char_width_return = ((int)  tolua_tonumber(tolua_S,5,0));
  int char_height_return = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_text_get_location_at_index(text,index,&char_x_return,&char_y_return,&char_width_return,&char_height_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_x_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_y_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_width_return);
   tolua_pushnumber(tolua_S,(lua_Number)char_height_return);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_text_get_location_at_index'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_list_fonts */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_list_fonts00
static int tolua_imlib2_imlib_list_fonts00(lua_State* tolua_S)
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
  int number_return = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   char* tolua_ret = (char*)  imlib_list_fonts(&number_return);
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)number_return);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_list_fonts'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_font_list */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_font_list00
static int tolua_imlib2_imlib_free_font_list00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  char* font_list = ((char*)  tolua_tostring(tolua_S,1,0));
  int number = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   imlib_free_font_list(&font_list,number);
   tolua_pushstring(tolua_S,(const char*)font_list);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_font_list'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_font_cache_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_font_cache_size00
static int tolua_imlib2_imlib_get_font_cache_size00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_font_cache_size();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_font_cache_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_set_font_cache_size */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_set_font_cache_size00
static int tolua_imlib2_imlib_set_font_cache_size00(lua_State* tolua_S)
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
  int bytes = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_set_font_cache_size(bytes);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_set_font_cache_size'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_flush_font_cache */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_flush_font_cache00
static int tolua_imlib2_imlib_flush_font_cache00(lua_State* tolua_S)
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
   imlib_flush_font_cache();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_flush_font_cache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_font_ascent */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_font_ascent00
static int tolua_imlib2_imlib_get_font_ascent00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_font_ascent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_font_ascent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_font_descent */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_font_descent00
static int tolua_imlib2_imlib_get_font_descent00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_font_descent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_font_descent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_maximum_font_ascent */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_maximum_font_ascent00
static int tolua_imlib2_imlib_get_maximum_font_ascent00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_maximum_font_ascent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_maximum_font_ascent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_maximum_font_descent */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_maximum_font_descent00
static int tolua_imlib2_imlib_get_maximum_font_descent00(lua_State* tolua_S)
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
   int tolua_ret = (int)  imlib_get_maximum_font_descent();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_maximum_font_descent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_color_modifier00
static int tolua_imlib2_imlib_create_color_modifier00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_create_color_modifier();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_color_modifier00
static int tolua_imlib2_imlib_free_color_modifier00(lua_State* tolua_S)
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
   imlib_free_color_modifier();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_modify_color_modifier_gamma */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_modify_color_modifier_gamma00
static int tolua_imlib2_imlib_modify_color_modifier_gamma00(lua_State* tolua_S)
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
  double gamma_value = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_modify_color_modifier_gamma(gamma_value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_modify_color_modifier_gamma'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_modify_color_modifier_brightness */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_modify_color_modifier_brightness00
static int tolua_imlib2_imlib_modify_color_modifier_brightness00(lua_State* tolua_S)
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
  double brightness_value = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_modify_color_modifier_brightness(brightness_value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_modify_color_modifier_brightness'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_modify_color_modifier_contrast */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_modify_color_modifier_contrast00
static int tolua_imlib2_imlib_modify_color_modifier_contrast00(lua_State* tolua_S)
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
  double contrast_value = ((double)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_modify_color_modifier_contrast(contrast_value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_modify_color_modifier_contrast'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_set_color_modifier_tables */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_set_color_modifier_tables00
static int tolua_imlib2_imlib_set_color_modifier_tables00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char* red_table = ((unsigned char*)  tolua_tostring(tolua_S,1,0));
  unsigned char* green_table = ((unsigned char*)  tolua_tostring(tolua_S,2,0));
  unsigned char* blue_table = ((unsigned char*)  tolua_tostring(tolua_S,3,0));
  unsigned char* alpha_table = ((unsigned char*)  tolua_tostring(tolua_S,4,0));
  {
   imlib_set_color_modifier_tables(red_table,green_table,blue_table,alpha_table);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_set_color_modifier_tables'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_get_color_modifier_tables */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_get_color_modifier_tables00
static int tolua_imlib2_imlib_get_color_modifier_tables00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned char* red_table = ((unsigned char*)  tolua_tostring(tolua_S,1,0));
  unsigned char* green_table = ((unsigned char*)  tolua_tostring(tolua_S,2,0));
  unsigned char* blue_table = ((unsigned char*)  tolua_tostring(tolua_S,3,0));
  unsigned char* alpha_table = ((unsigned char*)  tolua_tostring(tolua_S,4,0));
  {
   imlib_get_color_modifier_tables(red_table,green_table,blue_table,alpha_table);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_get_color_modifier_tables'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_reset_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_reset_color_modifier00
static int tolua_imlib2_imlib_reset_color_modifier00(lua_State* tolua_S)
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
   imlib_reset_color_modifier();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_reset_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_apply_color_modifier */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_apply_color_modifier00
static int tolua_imlib2_imlib_apply_color_modifier00(lua_State* tolua_S)
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
   imlib_apply_color_modifier();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_apply_color_modifier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_apply_color_modifier_to_rectangle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_apply_color_modifier_to_rectangle00
static int tolua_imlib2_imlib_apply_color_modifier_to_rectangle00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_apply_color_modifier_to_rectangle(x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_apply_color_modifier_to_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_draw_pixel */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_draw_pixel00
static int tolua_imlib2_imlib_image_draw_pixel00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  char make_updates = ((char)  tolua_tonumber(tolua_S,3,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_image_draw_pixel(x,y,make_updates);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_draw_pixel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_draw_line */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_draw_line00
static int tolua_imlib2_imlib_image_draw_line00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
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
  int x1 = ((int)  tolua_tonumber(tolua_S,1,0));
  int y1 = ((int)  tolua_tonumber(tolua_S,2,0));
  int x2 = ((int)  tolua_tonumber(tolua_S,3,0));
  int y2 = ((int)  tolua_tonumber(tolua_S,4,0));
  char make_updates = ((char)  tolua_tonumber(tolua_S,5,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_image_draw_line(x1,y1,x2,y2,make_updates);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_draw_line'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_draw_rectangle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_draw_rectangle00
static int tolua_imlib2_imlib_image_draw_rectangle00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_image_draw_rectangle(x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_draw_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_fill_rectangle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_fill_rectangle00
static int tolua_imlib2_imlib_image_fill_rectangle00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_image_fill_rectangle(x,y,width,height);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_fill_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_copy_alpha_to_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_copy_alpha_to_image00
static int tolua_imlib2_imlib_image_copy_alpha_to_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata image_source = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   imlib_image_copy_alpha_to_image(image_source,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_copy_alpha_to_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_copy_alpha_rectangle_to_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_copy_alpha_rectangle_to_image00
static int tolua_imlib2_imlib_image_copy_alpha_rectangle_to_image00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
   _userdata image_source = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  int width = ((int)  tolua_tonumber(tolua_S,4,0));
  int height = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,7,0));
  {
   imlib_image_copy_alpha_rectangle_to_image(image_source,x,y,width,height,destination_x,destination_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_copy_alpha_rectangle_to_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_scroll_rect */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_scroll_rect00
static int tolua_imlib2_imlib_image_scroll_rect00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  int delta_x = ((int)  tolua_tonumber(tolua_S,5,0));
  int delta_y = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_image_scroll_rect(x,y,width,height,delta_x,delta_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_scroll_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_copy_rect */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_copy_rect00
static int tolua_imlib2_imlib_image_copy_rect00(lua_State* tolua_S)
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  int new_x = ((int)  tolua_tonumber(tolua_S,5,0));
  int new_y = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_image_copy_rect(x,y,width,height,new_x,new_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_copy_rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_polygon_new */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_polygon_new00
static int tolua_imlib2_imlib_polygon_new00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_polygon_new();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_polygon_new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_polygon_free */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_polygon_free00
static int tolua_imlib2_imlib_polygon_free00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_polygon_free(poly);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_polygon_free'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_polygon_add_point */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_polygon_add_point00
static int tolua_imlib2_imlib_polygon_add_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   imlib_polygon_add_point(poly,x,y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_polygon_add_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_draw_polygon */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_draw_polygon00
static int tolua_imlib2_imlib_image_draw_polygon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  unsigned char closed = ((unsigned char)  tolua_tonumber(tolua_S,2,0));
  {
   imlib_image_draw_polygon(poly,closed);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_draw_polygon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_fill_polygon */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_fill_polygon00
static int tolua_imlib2_imlib_image_fill_polygon00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_image_fill_polygon(poly);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_fill_polygon'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_polygon_get_bounds */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_polygon_get_bounds00
static int tolua_imlib2_imlib_polygon_get_bounds00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
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
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int px1 = ((int)  tolua_tonumber(tolua_S,2,0));
  int py1 = ((int)  tolua_tonumber(tolua_S,3,0));
  int px2 = ((int)  tolua_tonumber(tolua_S,4,0));
  int py2 = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   imlib_polygon_get_bounds(poly,&px1,&py1,&px2,&py2);
   tolua_pushnumber(tolua_S,(lua_Number)px1);
   tolua_pushnumber(tolua_S,(lua_Number)py1);
   tolua_pushnumber(tolua_S,(lua_Number)px2);
   tolua_pushnumber(tolua_S,(lua_Number)py2);
  }
 }
 return 4;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_polygon_get_bounds'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_polygon_contains_point */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_polygon_contains_point00
static int tolua_imlib2_imlib_polygon_contains_point00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata poly = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  int x = ((int)  tolua_tonumber(tolua_S,2,0));
  int y = ((int)  tolua_tonumber(tolua_S,3,0));
  {
   unsigned char tolua_ret = (unsigned char)  imlib_polygon_contains_point(poly,x,y);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_polygon_contains_point'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_draw_ellipse */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_draw_ellipse00
static int tolua_imlib2_imlib_image_draw_ellipse00(lua_State* tolua_S)
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
  int xc = ((int)  tolua_tonumber(tolua_S,1,0));
  int yc = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_image_draw_ellipse(xc,yc,a,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_draw_ellipse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_fill_ellipse */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_fill_ellipse00
static int tolua_imlib2_imlib_image_fill_ellipse00(lua_State* tolua_S)
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
  int xc = ((int)  tolua_tonumber(tolua_S,1,0));
  int yc = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_image_fill_ellipse(xc,yc,a,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_fill_ellipse'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_color_range */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_color_range00
static int tolua_imlib2_imlib_create_color_range00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_create_color_range();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_color_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_color_range */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_color_range00
static int tolua_imlib2_imlib_free_color_range00(lua_State* tolua_S)
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
   imlib_free_color_range();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_color_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_add_color_to_color_range */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_add_color_to_color_range00
static int tolua_imlib2_imlib_add_color_to_color_range00(lua_State* tolua_S)
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
  int distance_away = ((int)  tolua_tonumber(tolua_S,1,0));
  {
   imlib_add_color_to_color_range(distance_away);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_add_color_to_color_range'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_fill_color_range_rectangle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_fill_color_range_rectangle00
static int tolua_imlib2_imlib_image_fill_color_range_rectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  double angle = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   imlib_image_fill_color_range_rectangle(x,y,width,height,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_fill_color_range_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_fill_hsva_color_range_rectangle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_fill_hsva_color_range_rectangle00
static int tolua_imlib2_imlib_image_fill_hsva_color_range_rectangle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
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
  int x = ((int)  tolua_tonumber(tolua_S,1,0));
  int y = ((int)  tolua_tonumber(tolua_S,2,0));
  int width = ((int)  tolua_tonumber(tolua_S,3,0));
  int height = ((int)  tolua_tonumber(tolua_S,4,0));
  double angle = ((double)  tolua_tonumber(tolua_S,5,0));
  {
   imlib_image_fill_hsva_color_range_rectangle(x,y,width,height,angle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_fill_hsva_color_range_rectangle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_attach_data_value */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_attach_data_value00
static int tolua_imlib2_imlib_image_attach_data_value00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"Imlib_Data_Destructor_Function",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* key = ((const char*)  tolua_tostring(tolua_S,1,0));
  void* data = ((void*)  tolua_touserdata(tolua_S,2,0));
  int value = ((int)  tolua_tonumber(tolua_S,3,0));
  Imlib_Data_Destructor_Function destructor_function = *((Imlib_Data_Destructor_Function*)  tolua_tousertype(tolua_S,4,0));
  {
   imlib_image_attach_data_value(key,data,value,destructor_function);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_attach_data_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_attached_data */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_attached_data00
static int tolua_imlib2_imlib_image_get_attached_data00(lua_State* tolua_S)
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
  const char* key = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   void* tolua_ret = (void*)  imlib_image_get_attached_data(key);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_attached_data'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_get_attached_value */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_get_attached_value00
static int tolua_imlib2_imlib_image_get_attached_value00(lua_State* tolua_S)
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
  const char* key = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   int tolua_ret = (int)  imlib_image_get_attached_value(key);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_get_attached_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_remove_attached_data_value */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_remove_attached_data_value00
static int tolua_imlib2_imlib_image_remove_attached_data_value00(lua_State* tolua_S)
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
  const char* key = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   imlib_image_remove_attached_data_value(key);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_remove_attached_data_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_remove_and_free_attached_data_value */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_remove_and_free_attached_data_value00
static int tolua_imlib2_imlib_image_remove_and_free_attached_data_value00(lua_State* tolua_S)
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
  const char* key = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   imlib_image_remove_and_free_attached_data_value(key);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_remove_and_free_attached_data_value'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_save_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_save_image00
static int tolua_imlib2_imlib_save_image00(lua_State* tolua_S)
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
   imlib_save_image(filename);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_save_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_save_image_with_error_return */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_save_image_with_error_return00
static int tolua_imlib2_imlib_save_image_with_error_return00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* filename = ((const char*)  tolua_tostring(tolua_S,1,0));
  Imlib_Load_Error error_return = ((Imlib_Load_Error) (int)  tolua_tonumber(tolua_S,2,0));
  {
   imlib_save_image_with_error_return(filename,&error_return);
   tolua_pushnumber(tolua_S,(lua_Number)error_return);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_save_image_with_error_return'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_rotated_image */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_rotated_image00
static int tolua_imlib2_imlib_create_rotated_image00(lua_State* tolua_S)
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
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_rotated_image(angle);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_rotated_image'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_rotate_image_from_buffer */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_rotate_image_from_buffer00
static int tolua_imlib2_imlib_rotate_image_from_buffer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  double angle = ((double)  tolua_tonumber(tolua_S,1,0));
   _userdata source_image = ((  _userdata)  tolua_touserdata(tolua_S,2,0));
  {
   imlib_rotate_image_from_buffer(angle,source_image);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_rotate_image_from_buffer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_blend_image_onto_image_at_angle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_blend_image_onto_image_at_angle00
static int tolua_imlib2_imlib_blend_image_onto_image_at_angle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata source_image = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  char merge_alpha = ((char)  tolua_tonumber(tolua_S,2,0));
  int source_x = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,5,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,7,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,8,0));
  int angle_x = ((int)  tolua_tonumber(tolua_S,9,0));
  int angle_y = ((int)  tolua_tonumber(tolua_S,10,0));
  {
   imlib_blend_image_onto_image_at_angle(source_image,merge_alpha,source_x,source_y,source_width,source_height,destination_x,destination_y,angle_x,angle_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_blend_image_onto_image_at_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_blend_image_onto_image_skewed */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_blend_image_onto_image_skewed00
static int tolua_imlib2_imlib_blend_image_onto_image_skewed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,11,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,12,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,13,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata source_image = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  char merge_alpha = ((char)  tolua_tonumber(tolua_S,2,0));
  int source_x = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,4,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,5,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,6,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,7,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,8,0));
  int h_angle_x = ((int)  tolua_tonumber(tolua_S,9,0));
  int h_angle_y = ((int)  tolua_tonumber(tolua_S,10,0));
  int v_angle_x = ((int)  tolua_tonumber(tolua_S,11,0));
  int v_angle_y = ((int)  tolua_tonumber(tolua_S,12,0));
  {
   imlib_blend_image_onto_image_skewed(source_image,merge_alpha,source_x,source_y,source_width,source_height,destination_x,destination_y,h_angle_x,h_angle_y,v_angle_x,v_angle_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_blend_image_onto_image_skewed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_on_drawable_skewed */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_on_drawable_skewed00
static int tolua_imlib2_imlib_render_image_on_drawable_skewed00(lua_State* tolua_S)
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
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,9,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,10,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,11,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int source_x = ((int)  tolua_tonumber(tolua_S,1,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,2,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,4,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,6,0));
  int h_angle_x = ((int)  tolua_tonumber(tolua_S,7,0));
  int h_angle_y = ((int)  tolua_tonumber(tolua_S,8,0));
  int v_angle_x = ((int)  tolua_tonumber(tolua_S,9,0));
  int v_angle_y = ((int)  tolua_tonumber(tolua_S,10,0));
  {
   imlib_render_image_on_drawable_skewed(source_x,source_y,source_width,source_height,destination_x,destination_y,h_angle_x,h_angle_y,v_angle_x,v_angle_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_on_drawable_skewed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_render_image_on_drawable_at_angle */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_render_image_on_drawable_at_angle00
static int tolua_imlib2_imlib_render_image_on_drawable_at_angle00(lua_State* tolua_S)
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
     !tolua_isnumber(tolua_S,7,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,8,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,9,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int source_x = ((int)  tolua_tonumber(tolua_S,1,0));
  int source_y = ((int)  tolua_tonumber(tolua_S,2,0));
  int source_width = ((int)  tolua_tonumber(tolua_S,3,0));
  int source_height = ((int)  tolua_tonumber(tolua_S,4,0));
  int destination_x = ((int)  tolua_tonumber(tolua_S,5,0));
  int destination_y = ((int)  tolua_tonumber(tolua_S,6,0));
  int angle_x = ((int)  tolua_tonumber(tolua_S,7,0));
  int angle_y = ((int)  tolua_tonumber(tolua_S,8,0));
  {
   imlib_render_image_on_drawable_at_angle(source_x,source_y,source_width,source_height,destination_x,destination_y,angle_x,angle_y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_render_image_on_drawable_at_angle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_filter */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_filter00
static int tolua_imlib2_imlib_image_filter00(lua_State* tolua_S)
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
   imlib_image_filter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_create_filter */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_create_filter00
static int tolua_imlib2_imlib_create_filter00(lua_State* tolua_S)
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
  int initsize = ((int)  tolua_tonumber(tolua_S,1,0));
  {
    _userdata tolua_ret = (  _userdata)  imlib_create_filter(initsize);
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_create_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_set_filter */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_set_filter00
static int tolua_imlib2_imlib_context_set_filter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isuserdata(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
   _userdata filter = ((  _userdata)  tolua_touserdata(tolua_S,1,0));
  {
   imlib_context_set_filter(filter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_set_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_context_get_filter */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_context_get_filter00
static int tolua_imlib2_imlib_context_get_filter00(lua_State* tolua_S)
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
    _userdata tolua_ret = (  _userdata)  imlib_context_get_filter();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_context_get_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_free_filter */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_free_filter00
static int tolua_imlib2_imlib_free_filter00(lua_State* tolua_S)
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
   imlib_free_filter();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_free_filter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_set */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_set00
static int tolua_imlib2_imlib_filter_set00(lua_State* tolua_S)
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
  int xoff = ((int)  tolua_tonumber(tolua_S,1,0));
  int yoff = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int r = ((int)  tolua_tonumber(tolua_S,4,0));
  int g = ((int)  tolua_tonumber(tolua_S,5,0));
  int b = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_filter_set(xoff,yoff,a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_set'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_set_alpha */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_set_alpha00
static int tolua_imlib2_imlib_filter_set_alpha00(lua_State* tolua_S)
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
  int xoff = ((int)  tolua_tonumber(tolua_S,1,0));
  int yoff = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int r = ((int)  tolua_tonumber(tolua_S,4,0));
  int g = ((int)  tolua_tonumber(tolua_S,5,0));
  int b = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_filter_set_alpha(xoff,yoff,a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_set_alpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_set_red */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_set_red00
static int tolua_imlib2_imlib_filter_set_red00(lua_State* tolua_S)
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
  int xoff = ((int)  tolua_tonumber(tolua_S,1,0));
  int yoff = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int r = ((int)  tolua_tonumber(tolua_S,4,0));
  int g = ((int)  tolua_tonumber(tolua_S,5,0));
  int b = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_filter_set_red(xoff,yoff,a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_set_red'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_set_green */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_set_green00
static int tolua_imlib2_imlib_filter_set_green00(lua_State* tolua_S)
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
  int xoff = ((int)  tolua_tonumber(tolua_S,1,0));
  int yoff = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int r = ((int)  tolua_tonumber(tolua_S,4,0));
  int g = ((int)  tolua_tonumber(tolua_S,5,0));
  int b = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_filter_set_green(xoff,yoff,a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_set_green'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_set_blue */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_set_blue00
static int tolua_imlib2_imlib_filter_set_blue00(lua_State* tolua_S)
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
  int xoff = ((int)  tolua_tonumber(tolua_S,1,0));
  int yoff = ((int)  tolua_tonumber(tolua_S,2,0));
  int a = ((int)  tolua_tonumber(tolua_S,3,0));
  int r = ((int)  tolua_tonumber(tolua_S,4,0));
  int g = ((int)  tolua_tonumber(tolua_S,5,0));
  int b = ((int)  tolua_tonumber(tolua_S,6,0));
  {
   imlib_filter_set_blue(xoff,yoff,a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_set_blue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_constants */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_constants00
static int tolua_imlib2_imlib_filter_constants00(lua_State* tolua_S)
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
  int a = ((int)  tolua_tonumber(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  int g = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_filter_constants(a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_constants'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_filter_divisors */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_filter_divisors00
static int tolua_imlib2_imlib_filter_divisors00(lua_State* tolua_S)
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
  int a = ((int)  tolua_tonumber(tolua_S,1,0));
  int r = ((int)  tolua_tonumber(tolua_S,2,0));
  int g = ((int)  tolua_tonumber(tolua_S,3,0));
  int b = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_filter_divisors(a,r,g,b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_filter_divisors'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_clear */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_clear00
static int tolua_imlib2_imlib_image_clear00(lua_State* tolua_S)
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
   imlib_image_clear();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_clear'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: imlib_image_clear_color */
#ifndef TOLUA_DISABLE_tolua_imlib2_imlib_image_clear_color00
static int tolua_imlib2_imlib_image_clear_color00(lua_State* tolua_S)
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
  int r = ((int)  tolua_tonumber(tolua_S,1,0));
  int g = ((int)  tolua_tonumber(tolua_S,2,0));
  int b = ((int)  tolua_tonumber(tolua_S,3,0));
  int a = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   imlib_image_clear_color(r,g,b,a);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'imlib_image_clear_color'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_imlib2_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"IMLIB_OP_COPY",IMLIB_OP_COPY);
  tolua_constant(tolua_S,"IMLIB_OP_ADD",IMLIB_OP_ADD);
  tolua_constant(tolua_S,"IMLIB_OP_SUBTRACT",IMLIB_OP_SUBTRACT);
  tolua_constant(tolua_S,"IMLIB_OP_RESHADE",IMLIB_OP_RESHADE);
  tolua_constant(tolua_S,"IMLIB_TEXT_TO_RIGHT",IMLIB_TEXT_TO_RIGHT);
  tolua_constant(tolua_S,"IMLIB_TEXT_TO_LEFT",IMLIB_TEXT_TO_LEFT);
  tolua_constant(tolua_S,"IMLIB_TEXT_TO_DOWN",IMLIB_TEXT_TO_DOWN);
  tolua_constant(tolua_S,"IMLIB_TEXT_TO_UP",IMLIB_TEXT_TO_UP);
  tolua_constant(tolua_S,"IMLIB_TEXT_TO_ANGLE",IMLIB_TEXT_TO_ANGLE);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_NONE",IMLIB_LOAD_ERROR_NONE);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_FILE_DOES_NOT_EXIST",IMLIB_LOAD_ERROR_FILE_DOES_NOT_EXIST);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_FILE_IS_DIRECTORY",IMLIB_LOAD_ERROR_FILE_IS_DIRECTORY);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PERMISSION_DENIED_TO_READ",IMLIB_LOAD_ERROR_PERMISSION_DENIED_TO_READ);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_NO_LOADER_FOR_FILE_FORMAT",IMLIB_LOAD_ERROR_NO_LOADER_FOR_FILE_FORMAT);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PATH_TOO_LONG",IMLIB_LOAD_ERROR_PATH_TOO_LONG);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PATH_COMPONENT_NON_EXISTANT",IMLIB_LOAD_ERROR_PATH_COMPONENT_NON_EXISTANT);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PATH_COMPONENT_NOT_DIRECTORY",IMLIB_LOAD_ERROR_PATH_COMPONENT_NOT_DIRECTORY);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PATH_POINTS_OUTSIDE_ADDRESS_SPACE",IMLIB_LOAD_ERROR_PATH_POINTS_OUTSIDE_ADDRESS_SPACE);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_TOO_MANY_SYMBOLIC_LINKS",IMLIB_LOAD_ERROR_TOO_MANY_SYMBOLIC_LINKS);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_OUT_OF_MEMORY",IMLIB_LOAD_ERROR_OUT_OF_MEMORY);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_OUT_OF_FILE_DESCRIPTORS",IMLIB_LOAD_ERROR_OUT_OF_FILE_DESCRIPTORS);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_PERMISSION_DENIED_TO_WRITE",IMLIB_LOAD_ERROR_PERMISSION_DENIED_TO_WRITE);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_OUT_OF_DISK_SPACE",IMLIB_LOAD_ERROR_OUT_OF_DISK_SPACE);
  tolua_constant(tolua_S,"IMLIB_LOAD_ERROR_UNKNOWN",IMLIB_LOAD_ERROR_UNKNOWN);
  tolua_constant(tolua_S,"IMLIB_TTF_ENCODING_ISO_8859_1",IMLIB_TTF_ENCODING_ISO_8859_1);
  tolua_constant(tolua_S,"IMLIB_TTF_ENCODING_ISO_8859_2",IMLIB_TTF_ENCODING_ISO_8859_2);
  tolua_constant(tolua_S,"IMLIB_TTF_ENCODING_ISO_8859_3",IMLIB_TTF_ENCODING_ISO_8859_3);
  tolua_constant(tolua_S,"IMLIB_TTF_ENCODING_ISO_8859_4",IMLIB_TTF_ENCODING_ISO_8859_4);
  tolua_constant(tolua_S,"IMLIB_TTF_ENCODING_ISO_8859_5",IMLIB_TTF_ENCODING_ISO_8859_5);
  tolua_function(tolua_S,"imlib_context_new",tolua_imlib2_imlib_context_new00);
  tolua_function(tolua_S,"imlib_context_free",tolua_imlib2_imlib_context_free00);
  tolua_function(tolua_S,"imlib_context_push",tolua_imlib2_imlib_context_push00);
  tolua_function(tolua_S,"imlib_context_pop",tolua_imlib2_imlib_context_pop00);
  tolua_function(tolua_S,"imlib_context_get",tolua_imlib2_imlib_context_get00);
  tolua_function(tolua_S,"imlib_context_set_display",tolua_imlib2_imlib_context_set_display00);
  tolua_function(tolua_S,"imlib_context_disconnect_display",tolua_imlib2_imlib_context_disconnect_display00);
  tolua_function(tolua_S,"imlib_context_set_visual",tolua_imlib2_imlib_context_set_visual00);
  tolua_function(tolua_S,"imlib_context_set_colormap",tolua_imlib2_imlib_context_set_colormap00);
  tolua_function(tolua_S,"imlib_context_set_drawable",tolua_imlib2_imlib_context_set_drawable00);
  tolua_function(tolua_S,"imlib_context_set_mask",tolua_imlib2_imlib_context_set_mask00);
  tolua_function(tolua_S,"imlib_context_set_dither_mask",tolua_imlib2_imlib_context_set_dither_mask00);
  tolua_function(tolua_S,"imlib_context_set_mask_alpha_threshold",tolua_imlib2_imlib_context_set_mask_alpha_threshold00);
  tolua_function(tolua_S,"imlib_context_set_anti_alias",tolua_imlib2_imlib_context_set_anti_alias00);
  tolua_function(tolua_S,"imlib_context_set_dither",tolua_imlib2_imlib_context_set_dither00);
  tolua_function(tolua_S,"imlib_context_set_blend",tolua_imlib2_imlib_context_set_blend00);
  tolua_function(tolua_S,"imlib_context_set_color_modifier",tolua_imlib2_imlib_context_set_color_modifier00);
  tolua_function(tolua_S,"imlib_context_set_operation",tolua_imlib2_imlib_context_set_operation00);
  tolua_function(tolua_S,"imlib_context_set_font",tolua_imlib2_imlib_context_set_font00);
  tolua_function(tolua_S,"imlib_context_set_direction",tolua_imlib2_imlib_context_set_direction00);
  tolua_function(tolua_S,"imlib_context_set_angle",tolua_imlib2_imlib_context_set_angle00);
  tolua_function(tolua_S,"imlib_context_set_color",tolua_imlib2_imlib_context_set_color00);
  tolua_function(tolua_S,"imlib_context_set_color_hsva",tolua_imlib2_imlib_context_set_color_hsva00);
  tolua_function(tolua_S,"imlib_context_set_color_hlsa",tolua_imlib2_imlib_context_set_color_hlsa00);
  tolua_function(tolua_S,"imlib_context_set_color_cmya",tolua_imlib2_imlib_context_set_color_cmya00);
  tolua_function(tolua_S,"imlib_context_set_color_range",tolua_imlib2_imlib_context_set_color_range00);
  tolua_function(tolua_S,"imlib_context_set_progress_function",tolua_imlib2_imlib_context_set_progress_function00);
  tolua_function(tolua_S,"imlib_context_set_progress_granularity",tolua_imlib2_imlib_context_set_progress_granularity00);
  tolua_function(tolua_S,"imlib_context_set_image",tolua_imlib2_imlib_context_set_image00);
  tolua_function(tolua_S,"imlib_context_set_cliprect",tolua_imlib2_imlib_context_set_cliprect00);
  tolua_function(tolua_S,"imlib_context_set_TTF_encoding",tolua_imlib2_imlib_context_set_TTF_encoding00);
  tolua_function(tolua_S,"imlib_context_get_display",tolua_imlib2_imlib_context_get_display00);
  tolua_function(tolua_S,"imlib_context_get_visual",tolua_imlib2_imlib_context_get_visual00);
  tolua_function(tolua_S,"imlib_context_get_colormap",tolua_imlib2_imlib_context_get_colormap00);
  tolua_function(tolua_S,"imlib_context_get_drawable",tolua_imlib2_imlib_context_get_drawable00);
  tolua_function(tolua_S,"imlib_context_get_mask",tolua_imlib2_imlib_context_get_mask00);
  tolua_function(tolua_S,"imlib_context_get_dither_mask",tolua_imlib2_imlib_context_get_dither_mask00);
  tolua_function(tolua_S,"imlib_context_get_anti_alias",tolua_imlib2_imlib_context_get_anti_alias00);
  tolua_function(tolua_S,"imlib_context_get_mask_alpha_threshold",tolua_imlib2_imlib_context_get_mask_alpha_threshold00);
  tolua_function(tolua_S,"imlib_context_get_dither",tolua_imlib2_imlib_context_get_dither00);
  tolua_function(tolua_S,"imlib_context_get_blend",tolua_imlib2_imlib_context_get_blend00);
  tolua_function(tolua_S,"imlib_context_get_color_modifier",tolua_imlib2_imlib_context_get_color_modifier00);
  tolua_function(tolua_S,"imlib_context_get_operation",tolua_imlib2_imlib_context_get_operation00);
  tolua_function(tolua_S,"imlib_context_get_font",tolua_imlib2_imlib_context_get_font00);
  tolua_function(tolua_S,"imlib_context_get_angle",tolua_imlib2_imlib_context_get_angle00);
  tolua_function(tolua_S,"imlib_context_get_direction",tolua_imlib2_imlib_context_get_direction00);
  tolua_function(tolua_S,"imlib_context_get_color",tolua_imlib2_imlib_context_get_color00);
  tolua_function(tolua_S,"imlib_context_get_color_hsva",tolua_imlib2_imlib_context_get_color_hsva00);
  tolua_function(tolua_S,"imlib_context_get_color_hlsa",tolua_imlib2_imlib_context_get_color_hlsa00);
  tolua_function(tolua_S,"imlib_context_get_color_cmya",tolua_imlib2_imlib_context_get_color_cmya00);
  tolua_function(tolua_S,"imlib_context_get_imlib_color",tolua_imlib2_imlib_context_get_imlib_color00);
  tolua_function(tolua_S,"imlib_context_get_color_range",tolua_imlib2_imlib_context_get_color_range00);
  tolua_function(tolua_S,"imlib_context_get_progress_function",tolua_imlib2_imlib_context_get_progress_function00);
  tolua_function(tolua_S,"imlib_context_get_progress_granularity",tolua_imlib2_imlib_context_get_progress_granularity00);
  tolua_function(tolua_S,"imlib_context_get_image",tolua_imlib2_imlib_context_get_image00);
  tolua_function(tolua_S,"imlib_context_get_cliprect",tolua_imlib2_imlib_context_get_cliprect00);
  tolua_function(tolua_S,"imlib_context_get_TTF_encoding",tolua_imlib2_imlib_context_get_TTF_encoding00);
  tolua_function(tolua_S,"imlib_get_cache_size",tolua_imlib2_imlib_get_cache_size00);
  tolua_function(tolua_S,"imlib_set_cache_size",tolua_imlib2_imlib_set_cache_size00);
  tolua_function(tolua_S,"imlib_get_color_usage",tolua_imlib2_imlib_get_color_usage00);
  tolua_function(tolua_S,"imlib_set_color_usage",tolua_imlib2_imlib_set_color_usage00);
  tolua_function(tolua_S,"imlib_flush_loaders",tolua_imlib2_imlib_flush_loaders00);
  tolua_function(tolua_S,"imlib_get_visual_depth",tolua_imlib2_imlib_get_visual_depth00);
  tolua_function(tolua_S,"imlib_get_best_visual",tolua_imlib2_imlib_get_best_visual00);
  tolua_function(tolua_S,"imlib_load_image",tolua_imlib2_imlib_load_image00);
  tolua_function(tolua_S,"imlib_load_image_immediately",tolua_imlib2_imlib_load_image_immediately00);
  tolua_function(tolua_S,"imlib_load_image_without_cache",tolua_imlib2_imlib_load_image_without_cache00);
  tolua_function(tolua_S,"imlib_load_image_immediately_without_cache",tolua_imlib2_imlib_load_image_immediately_without_cache00);
  tolua_function(tolua_S,"imlib_load_image_with_error_return",tolua_imlib2_imlib_load_image_with_error_return00);
  tolua_function(tolua_S,"imlib_free_image",tolua_imlib2_imlib_free_image00);
  tolua_function(tolua_S,"imlib_free_image_and_decache",tolua_imlib2_imlib_free_image_and_decache00);
  tolua_function(tolua_S,"imlib_image_get_width",tolua_imlib2_imlib_image_get_width00);
  tolua_function(tolua_S,"imlib_image_get_height",tolua_imlib2_imlib_image_get_height00);
  tolua_function(tolua_S,"imlib_image_get_filename",tolua_imlib2_imlib_image_get_filename00);
  tolua_function(tolua_S,"imlib_image_get_data",tolua_imlib2_imlib_image_get_data00);
  tolua_function(tolua_S,"imlib_image_get_data_for_reading_only",tolua_imlib2_imlib_image_get_data_for_reading_only00);
  tolua_function(tolua_S,"imlib_image_put_back_data",tolua_imlib2_imlib_image_put_back_data00);
  tolua_function(tolua_S,"imlib_image_has_alpha",tolua_imlib2_imlib_image_has_alpha00);
  tolua_function(tolua_S,"imlib_image_set_changes_on_disk",tolua_imlib2_imlib_image_set_changes_on_disk00);
  tolua_function(tolua_S,"imlib_image_get_border",tolua_imlib2_imlib_image_get_border00);
  tolua_function(tolua_S,"imlib_image_set_border",tolua_imlib2_imlib_image_set_border00);
  tolua_function(tolua_S,"imlib_image_set_format",tolua_imlib2_imlib_image_set_format00);
  tolua_function(tolua_S,"imlib_image_set_irrelevant_format",tolua_imlib2_imlib_image_set_irrelevant_format00);
  tolua_function(tolua_S,"imlib_image_set_irrelevant_border",tolua_imlib2_imlib_image_set_irrelevant_border00);
  tolua_function(tolua_S,"imlib_image_set_irrelevant_alpha",tolua_imlib2_imlib_image_set_irrelevant_alpha00);
  tolua_function(tolua_S,"imlib_image_format",tolua_imlib2_imlib_image_format00);
  tolua_function(tolua_S,"imlib_image_set_has_alpha",tolua_imlib2_imlib_image_set_has_alpha00);
  tolua_function(tolua_S,"imlib_image_query_pixel",tolua_imlib2_imlib_image_query_pixel00);
  tolua_function(tolua_S,"imlib_image_query_pixel_hsva",tolua_imlib2_imlib_image_query_pixel_hsva00);
  tolua_function(tolua_S,"imlib_image_query_pixel_hlsa",tolua_imlib2_imlib_image_query_pixel_hlsa00);
  tolua_function(tolua_S,"imlib_image_query_pixel_cmya",tolua_imlib2_imlib_image_query_pixel_cmya00);
  tolua_function(tolua_S,"imlib_render_pixmaps_for_whole_image",tolua_imlib2_imlib_render_pixmaps_for_whole_image00);
  tolua_function(tolua_S,"imlib_render_pixmaps_for_whole_image_at_size",tolua_imlib2_imlib_render_pixmaps_for_whole_image_at_size00);
  tolua_function(tolua_S,"imlib_free_pixmap_and_mask",tolua_imlib2_imlib_free_pixmap_and_mask00);
  tolua_function(tolua_S,"imlib_render_image_on_drawable",tolua_imlib2_imlib_render_image_on_drawable00);
  tolua_function(tolua_S,"imlib_render_image_on_drawable_at_size",tolua_imlib2_imlib_render_image_on_drawable_at_size00);
  tolua_function(tolua_S,"imlib_render_image_part_on_drawable_at_size",tolua_imlib2_imlib_render_image_part_on_drawable_at_size00);
  tolua_function(tolua_S,"imlib_render_get_pixel_color",tolua_imlib2_imlib_render_get_pixel_color00);
  tolua_function(tolua_S,"imlib_blend_image_onto_image",tolua_imlib2_imlib_blend_image_onto_image00);
  tolua_function(tolua_S,"imlib_create_image",tolua_imlib2_imlib_create_image00);
  tolua_function(tolua_S,"imlib_create_image_using_data",tolua_imlib2_imlib_create_image_using_data00);
  tolua_function(tolua_S,"imlib_create_image_using_copied_data",tolua_imlib2_imlib_create_image_using_copied_data00);
  tolua_function(tolua_S,"imlib_create_image_from_drawable",tolua_imlib2_imlib_create_image_from_drawable00);
  tolua_function(tolua_S,"imlib_create_image_from_ximage",tolua_imlib2_imlib_create_image_from_ximage00);
  tolua_function(tolua_S,"imlib_create_scaled_image_from_drawable",tolua_imlib2_imlib_create_scaled_image_from_drawable00);
  tolua_function(tolua_S,"imlib_copy_drawable_to_image",tolua_imlib2_imlib_copy_drawable_to_image00);
  tolua_function(tolua_S,"imlib_clone_image",tolua_imlib2_imlib_clone_image00);
  tolua_function(tolua_S,"imlib_create_cropped_image",tolua_imlib2_imlib_create_cropped_image00);
  tolua_function(tolua_S,"imlib_create_cropped_scaled_image",tolua_imlib2_imlib_create_cropped_scaled_image00);
  tolua_function(tolua_S,"imlib_updates_clone",tolua_imlib2_imlib_updates_clone00);
  tolua_function(tolua_S,"imlib_update_append_rect",tolua_imlib2_imlib_update_append_rect00);
  tolua_function(tolua_S,"imlib_updates_merge",tolua_imlib2_imlib_updates_merge00);
  tolua_function(tolua_S,"imlib_updates_merge_for_rendering",tolua_imlib2_imlib_updates_merge_for_rendering00);
  tolua_function(tolua_S,"imlib_updates_free",tolua_imlib2_imlib_updates_free00);
  tolua_function(tolua_S,"imlib_updates_get_next",tolua_imlib2_imlib_updates_get_next00);
  tolua_function(tolua_S,"imlib_updates_get_coordinates",tolua_imlib2_imlib_updates_get_coordinates00);
  tolua_function(tolua_S,"imlib_updates_set_coordinates",tolua_imlib2_imlib_updates_set_coordinates00);
  tolua_function(tolua_S,"imlib_render_image_updates_on_drawable",tolua_imlib2_imlib_render_image_updates_on_drawable00);
  tolua_function(tolua_S,"imlib_updates_init",tolua_imlib2_imlib_updates_init00);
  tolua_function(tolua_S,"imlib_updates_append_updates",tolua_imlib2_imlib_updates_append_updates00);
  tolua_function(tolua_S,"imlib_image_flip_horizontal",tolua_imlib2_imlib_image_flip_horizontal00);
  tolua_function(tolua_S,"imlib_image_flip_vertical",tolua_imlib2_imlib_image_flip_vertical00);
  tolua_function(tolua_S,"imlib_image_flip_diagonal",tolua_imlib2_imlib_image_flip_diagonal00);
  tolua_function(tolua_S,"imlib_image_orientate",tolua_imlib2_imlib_image_orientate00);
  tolua_function(tolua_S,"imlib_image_blur",tolua_imlib2_imlib_image_blur00);
  tolua_function(tolua_S,"imlib_image_sharpen",tolua_imlib2_imlib_image_sharpen00);
  tolua_function(tolua_S,"imlib_image_tile_horizontal",tolua_imlib2_imlib_image_tile_horizontal00);
  tolua_function(tolua_S,"imlib_image_tile_vertical",tolua_imlib2_imlib_image_tile_vertical00);
  tolua_function(tolua_S,"imlib_image_tile",tolua_imlib2_imlib_image_tile00);
  tolua_function(tolua_S,"imlib_load_font",tolua_imlib2_imlib_load_font00);
  tolua_function(tolua_S,"imlib_free_font",tolua_imlib2_imlib_free_font00);
  tolua_function(tolua_S,"imlib_insert_font_into_fallback_chain",tolua_imlib2_imlib_insert_font_into_fallback_chain00);
  tolua_function(tolua_S,"imlib_remove_font_from_fallback_chain",tolua_imlib2_imlib_remove_font_from_fallback_chain00);
  tolua_function(tolua_S,"imlib_get_prev_font_in_fallback_chain",tolua_imlib2_imlib_get_prev_font_in_fallback_chain00);
  tolua_function(tolua_S,"imlib_get_next_font_in_fallback_chain",tolua_imlib2_imlib_get_next_font_in_fallback_chain00);
  tolua_function(tolua_S,"imlib_text_draw",tolua_imlib2_imlib_text_draw00);
  tolua_function(tolua_S,"imlib_text_draw_with_return_metrics",tolua_imlib2_imlib_text_draw_with_return_metrics00);
  tolua_function(tolua_S,"imlib_get_text_size",tolua_imlib2_imlib_get_text_size00);
  tolua_function(tolua_S,"imlib_get_text_advance",tolua_imlib2_imlib_get_text_advance00);
  tolua_function(tolua_S,"imlib_get_text_inset",tolua_imlib2_imlib_get_text_inset00);
  tolua_function(tolua_S,"imlib_add_path_to_font_path",tolua_imlib2_imlib_add_path_to_font_path00);
  tolua_function(tolua_S,"imlib_remove_path_from_font_path",tolua_imlib2_imlib_remove_path_from_font_path00);
  tolua_function(tolua_S,"imlib_list_font_path",tolua_imlib2_imlib_list_font_path00);
  tolua_function(tolua_S,"imlib_text_get_index_and_location",tolua_imlib2_imlib_text_get_index_and_location00);
  tolua_function(tolua_S,"imlib_text_get_location_at_index",tolua_imlib2_imlib_text_get_location_at_index00);
  tolua_function(tolua_S,"imlib_list_fonts",tolua_imlib2_imlib_list_fonts00);
  tolua_function(tolua_S,"imlib_free_font_list",tolua_imlib2_imlib_free_font_list00);
  tolua_function(tolua_S,"imlib_get_font_cache_size",tolua_imlib2_imlib_get_font_cache_size00);
  tolua_function(tolua_S,"imlib_set_font_cache_size",tolua_imlib2_imlib_set_font_cache_size00);
  tolua_function(tolua_S,"imlib_flush_font_cache",tolua_imlib2_imlib_flush_font_cache00);
  tolua_function(tolua_S,"imlib_get_font_ascent",tolua_imlib2_imlib_get_font_ascent00);
  tolua_function(tolua_S,"imlib_get_font_descent",tolua_imlib2_imlib_get_font_descent00);
  tolua_function(tolua_S,"imlib_get_maximum_font_ascent",tolua_imlib2_imlib_get_maximum_font_ascent00);
  tolua_function(tolua_S,"imlib_get_maximum_font_descent",tolua_imlib2_imlib_get_maximum_font_descent00);
  tolua_function(tolua_S,"imlib_create_color_modifier",tolua_imlib2_imlib_create_color_modifier00);
  tolua_function(tolua_S,"imlib_free_color_modifier",tolua_imlib2_imlib_free_color_modifier00);
  tolua_function(tolua_S,"imlib_modify_color_modifier_gamma",tolua_imlib2_imlib_modify_color_modifier_gamma00);
  tolua_function(tolua_S,"imlib_modify_color_modifier_brightness",tolua_imlib2_imlib_modify_color_modifier_brightness00);
  tolua_function(tolua_S,"imlib_modify_color_modifier_contrast",tolua_imlib2_imlib_modify_color_modifier_contrast00);
  tolua_function(tolua_S,"imlib_set_color_modifier_tables",tolua_imlib2_imlib_set_color_modifier_tables00);
  tolua_function(tolua_S,"imlib_get_color_modifier_tables",tolua_imlib2_imlib_get_color_modifier_tables00);
  tolua_function(tolua_S,"imlib_reset_color_modifier",tolua_imlib2_imlib_reset_color_modifier00);
  tolua_function(tolua_S,"imlib_apply_color_modifier",tolua_imlib2_imlib_apply_color_modifier00);
  tolua_function(tolua_S,"imlib_apply_color_modifier_to_rectangle",tolua_imlib2_imlib_apply_color_modifier_to_rectangle00);
  tolua_function(tolua_S,"imlib_image_draw_pixel",tolua_imlib2_imlib_image_draw_pixel00);
  tolua_function(tolua_S,"imlib_image_draw_line",tolua_imlib2_imlib_image_draw_line00);
  tolua_function(tolua_S,"imlib_image_draw_rectangle",tolua_imlib2_imlib_image_draw_rectangle00);
  tolua_function(tolua_S,"imlib_image_fill_rectangle",tolua_imlib2_imlib_image_fill_rectangle00);
  tolua_function(tolua_S,"imlib_image_copy_alpha_to_image",tolua_imlib2_imlib_image_copy_alpha_to_image00);
  tolua_function(tolua_S,"imlib_image_copy_alpha_rectangle_to_image",tolua_imlib2_imlib_image_copy_alpha_rectangle_to_image00);
  tolua_function(tolua_S,"imlib_image_scroll_rect",tolua_imlib2_imlib_image_scroll_rect00);
  tolua_function(tolua_S,"imlib_image_copy_rect",tolua_imlib2_imlib_image_copy_rect00);
  tolua_function(tolua_S,"imlib_polygon_new",tolua_imlib2_imlib_polygon_new00);
  tolua_function(tolua_S,"imlib_polygon_free",tolua_imlib2_imlib_polygon_free00);
  tolua_function(tolua_S,"imlib_polygon_add_point",tolua_imlib2_imlib_polygon_add_point00);
  tolua_function(tolua_S,"imlib_image_draw_polygon",tolua_imlib2_imlib_image_draw_polygon00);
  tolua_function(tolua_S,"imlib_image_fill_polygon",tolua_imlib2_imlib_image_fill_polygon00);
  tolua_function(tolua_S,"imlib_polygon_get_bounds",tolua_imlib2_imlib_polygon_get_bounds00);
  tolua_function(tolua_S,"imlib_polygon_contains_point",tolua_imlib2_imlib_polygon_contains_point00);
  tolua_function(tolua_S,"imlib_image_draw_ellipse",tolua_imlib2_imlib_image_draw_ellipse00);
  tolua_function(tolua_S,"imlib_image_fill_ellipse",tolua_imlib2_imlib_image_fill_ellipse00);
  tolua_function(tolua_S,"imlib_create_color_range",tolua_imlib2_imlib_create_color_range00);
  tolua_function(tolua_S,"imlib_free_color_range",tolua_imlib2_imlib_free_color_range00);
  tolua_function(tolua_S,"imlib_add_color_to_color_range",tolua_imlib2_imlib_add_color_to_color_range00);
  tolua_function(tolua_S,"imlib_image_fill_color_range_rectangle",tolua_imlib2_imlib_image_fill_color_range_rectangle00);
  tolua_function(tolua_S,"imlib_image_fill_hsva_color_range_rectangle",tolua_imlib2_imlib_image_fill_hsva_color_range_rectangle00);
  tolua_function(tolua_S,"imlib_image_attach_data_value",tolua_imlib2_imlib_image_attach_data_value00);
  tolua_function(tolua_S,"imlib_image_get_attached_data",tolua_imlib2_imlib_image_get_attached_data00);
  tolua_function(tolua_S,"imlib_image_get_attached_value",tolua_imlib2_imlib_image_get_attached_value00);
  tolua_function(tolua_S,"imlib_image_remove_attached_data_value",tolua_imlib2_imlib_image_remove_attached_data_value00);
  tolua_function(tolua_S,"imlib_image_remove_and_free_attached_data_value",tolua_imlib2_imlib_image_remove_and_free_attached_data_value00);
  tolua_function(tolua_S,"imlib_save_image",tolua_imlib2_imlib_save_image00);
  tolua_function(tolua_S,"imlib_save_image_with_error_return",tolua_imlib2_imlib_save_image_with_error_return00);
  tolua_function(tolua_S,"imlib_create_rotated_image",tolua_imlib2_imlib_create_rotated_image00);
  tolua_function(tolua_S,"imlib_rotate_image_from_buffer",tolua_imlib2_imlib_rotate_image_from_buffer00);
  tolua_function(tolua_S,"imlib_blend_image_onto_image_at_angle",tolua_imlib2_imlib_blend_image_onto_image_at_angle00);
  tolua_function(tolua_S,"imlib_blend_image_onto_image_skewed",tolua_imlib2_imlib_blend_image_onto_image_skewed00);
  tolua_function(tolua_S,"imlib_render_image_on_drawable_skewed",tolua_imlib2_imlib_render_image_on_drawable_skewed00);
  tolua_function(tolua_S,"imlib_render_image_on_drawable_at_angle",tolua_imlib2_imlib_render_image_on_drawable_at_angle00);
  tolua_function(tolua_S,"imlib_image_filter",tolua_imlib2_imlib_image_filter00);
  tolua_function(tolua_S,"imlib_create_filter",tolua_imlib2_imlib_create_filter00);
  tolua_function(tolua_S,"imlib_context_set_filter",tolua_imlib2_imlib_context_set_filter00);
  tolua_function(tolua_S,"imlib_context_get_filter",tolua_imlib2_imlib_context_get_filter00);
  tolua_function(tolua_S,"imlib_free_filter",tolua_imlib2_imlib_free_filter00);
  tolua_function(tolua_S,"imlib_filter_set",tolua_imlib2_imlib_filter_set00);
  tolua_function(tolua_S,"imlib_filter_set_alpha",tolua_imlib2_imlib_filter_set_alpha00);
  tolua_function(tolua_S,"imlib_filter_set_red",tolua_imlib2_imlib_filter_set_red00);
  tolua_function(tolua_S,"imlib_filter_set_green",tolua_imlib2_imlib_filter_set_green00);
  tolua_function(tolua_S,"imlib_filter_set_blue",tolua_imlib2_imlib_filter_set_blue00);
  tolua_function(tolua_S,"imlib_filter_constants",tolua_imlib2_imlib_filter_constants00);
  tolua_function(tolua_S,"imlib_filter_divisors",tolua_imlib2_imlib_filter_divisors00);
  tolua_function(tolua_S,"imlib_image_clear",tolua_imlib2_imlib_image_clear00);
  tolua_function(tolua_S,"imlib_image_clear_color",tolua_imlib2_imlib_image_clear_color00);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_imlib2 (lua_State* tolua_S) {
 return tolua_imlib2_open(tolua_S);
};
#endif

