/*

  Nullsoft WASABI Source File License

  Copyright 1999-2001 Nullsoft, Inc.

    This software is provided 'as-is', without any express or implied
    warranty.  In no event will the authors be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not
       claim that you wrote the original software. If you use this software
       in a product, an acknowledgment in the product documentation would be
       appreciated but is not required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.


  Brennan Underwood
  brennan@nullsoft.com

*/

/* This file was generated by Maki Compiler, do not edit manually */

#ifndef __C_GROUPLIST_H
#define __C_GROUPLIST_H

#include "c_guiobject.h"

#define C_GROUPLIST_PARENT C_GuiObject

class COMEXP C_GroupList : public C_GROUPLIST_PARENT {
  public:

  C_GroupList(ScriptObject *object);
  virtual ~C_GroupList();

  virtual ScriptObject *instantiate(const char *group_id, int num_groups);
  virtual int getNumItems();
  virtual ScriptObject *enumItem(int num);
  virtual void removeAll();
  virtual void scrollToPercent(int percent);
  virtual void setRedraw(int redraw);

  private:

  static int instantiate_id;
  static int getnumitems_id;
  static int enumitem_id;
  static int removeall_id;
  static int scrolltopercent_id;
  static int setredraw_id;
  static int inited;
};

#endif
