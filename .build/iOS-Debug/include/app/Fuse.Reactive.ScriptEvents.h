// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Reactive/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_REACTIVE_SCRIPT_EVENTS_H__
#define __APP_FUSE_REACTIVE_SCRIPT_EVENTS_H__

#include <Uno.h>
namespace app { namespace Fuse { struct Node; } }
namespace app { namespace Fuse { struct PropertyHandle; } }

namespace app {
namespace Fuse {
namespace Reactive {

extern ::uStaticStrong< ::app::Fuse::PropertyHandle*> ScriptEvents___propHandle;

struct ScriptEvents__uType : ::uClassType
{
};

ScriptEvents__uType* ScriptEvents__typeof();

void ScriptEvents___TypeInit(::uStatic* __this);
void ScriptEvents__AddListener(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* handler);
void ScriptEvents__RemoveListener(::uStatic* __this, ::app::Fuse::Node* n, ::uDelegate* handler);

}}}


#endif
