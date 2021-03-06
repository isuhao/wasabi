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

#include "../../../studio/api.h"
#include "../objcontroller.h"
#include "h_edit.h"

H_Edit::H_Edit(ScriptObject *o) : H_GuiObject(o) {
  inited=0;
  H_hook(o);
}

H_Edit::H_Edit() {
  inited=0;
}

void H_Edit::H_hook(ScriptObject *o) {
  ASSERT(!inited);
  ScriptObjectController *controller = o->vcpu_getController();
  obj = controller->cast(o, editGuid);
  if (obj != o && obj != NULL)
    o = obj;
  else
    obj = NULL;

  addMonitorObject(o, &editGuid);
  if (loaded == 0) {
    onenter_id= api->maki_addDlfRef(o->vcpu_getController(), "onEnter", this);
    onabort_id= api->maki_addDlfRef(o->vcpu_getController(), "onAbort", this);
    onidleeditupdate_id= api->maki_addDlfRef(o->vcpu_getController(), "onIdleEditUpdate", this);
    oneditupdate_id= api->maki_addDlfRef(o->vcpu_getController(), "onEditUpdate", this);
    loaded = 1;
  }
  inited=1;
}

H_Edit::~H_Edit() {
  if (!inited) return;
  api->maki_remDlfRef(this);
}

ScriptObject *H_Edit::getHookedObject() {
  if (obj != NULL) return obj;
  return H_EDIT_PARENT::getHookedObject();
}

int H_Edit::eventCallback(ScriptObject *object, int dlfid, scriptVar **params, int nparams) {
  if (object != getHookedObject()) return 0;
  if (H_EDIT_PARENT::eventCallback(object, dlfid, params, nparams)) return 1;
  if (dlfid == onenter_id) { hook_onEnter(); return 1; }
  if (dlfid == onabort_id) { hook_onAbort(); return 1; }
  if (dlfid == onidleeditupdate_id) { hook_onIdleEditUpdate(); return 1; }
  if (dlfid == oneditupdate_id) { hook_onEditUpdate(); return 1; }
  return 0;
}

int H_Edit::onenter_id=0;
int H_Edit::onabort_id=0;
int H_Edit::onidleeditupdate_id=0;
int H_Edit::oneditupdate_id=0;
int H_Edit::loaded=0;
