// This file was generated based on '/Users/noirCynical/LuceteK/SOSCON_2015/Demo/soscon_demo/.cache/GeneratedCode/Sidebar.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP___STATS_H__
#define __APP___STATS_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Text.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <Uno.h>

namespace app {

struct Stats;

struct Stats__uType : ::app::Fuse::Controls::Text__uType
{
};

Stats__uType* Stats__typeof();

void Stats___ObjInit_7(Stats* __this);
void Stats__InitializeUX(Stats* __this);
Stats* Stats__New_3(::uStatic* __this);

struct Stats : ::app::Fuse::Controls::Text
{
    void _ObjInit_7() { Stats___ObjInit_7(this); }
    void InitializeUX() { Stats__InitializeUX(this); }
};

}


#endif
