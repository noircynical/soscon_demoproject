// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.11.3/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#ifndef __APP_FUSE_CONTROLS_IMAGE_H__
#define __APP_FUSE_CONTROLS_IMAGE_H__

#include <app/Fuse.Animations.IResize.h>
#include <app/Fuse.Controls.Panel.h>
#include <app/Fuse.IActualPlacement.h>
#include <app/Fuse.Navigation.INavigationPanel.h>
#include <app/Fuse.Scripting.INameScope.h>
#include <app/Fuse.Triggers.Actions.ICollapse.h>
#include <app/Fuse.Triggers.Actions.IHide.h>
#include <app/Fuse.Triggers.Actions.IShow.h>
#include <app/Fuse.Triggers.IAddRemove__Fuse_Node.h>
#include <app/Uno.Float4.h>
#include <Uno.h>
namespace app { namespace Fuse { namespace Internal { struct ImageContainer; } } }
namespace app { namespace Fuse { namespace Resources { struct ImageSource; } } }
namespace app { namespace Fuse { namespace Resources { struct MemoryPolicy; } } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing; } }
namespace app { namespace Fuse { struct StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy; } }
namespace app { namespace Uno { namespace UX { struct FileSource; } } }

namespace app {
namespace Fuse {
namespace Controls {

struct Image;

extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_Alignment*> Image__ContentAlignmentProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Resources_MemoryPolicy*> Image__MemoryPolicyProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchDirection*> Image__StretchDirectionProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchMode*> Image__StretchModeProperty;
extern ::uStaticStrong< ::app::Fuse::StyleProperty__Fuse_Controls_Image__Fuse_Elements_StretchSizing*> Image__StretchSizingProperty;

struct Image__uType : ::app::Fuse::Controls::Panel__uType
{
};

Image__uType* Image__typeof();

void Image___ObjInit_4(Image* __this);
void Image___TypeInit_4(::uStatic* __this);
void Image__add_ParamChanged(Image* __this, ::uDelegate* value);
void Image__add_SourceChanged(Image* __this, ::uDelegate* value);
::app::Uno::Float4 Image__get_Color(Image* __this);
::app::Fuse::Internal::ImageContainer* Image__get_Container(Image* __this);
int Image__get_ContentAlignment(Image* __this);
::app::Uno::UX::FileSource* Image__get_File(Image* __this);
::app::Uno::Float4 Image__get_Scale9Margin(Image* __this);
::app::Fuse::Resources::ImageSource* Image__get_Source(Image* __this);
int Image__get_StretchDirection(Image* __this);
int Image__get_StretchMode(Image* __this);
int Image__get_StretchSizing(Image* __this);
int Image__GetContentAlignment(::uStatic* __this, Image* img);
::app::Fuse::Resources::MemoryPolicy* Image__GetMemoryPolicy(::uStatic* __this, Image* img);
int Image__GetStretchDirection(::uStatic* __this, Image* img);
int Image__GetStretchMode(::uStatic* __this, Image* img);
int Image__GetStretchSizing(::uStatic* __this, Image* img);
void Image__OnContainerParamChanged(Image* __this, ::uObject* s, ::uObject* a);
void Image__OnContainerSourceChanged(Image* __this, ::uObject* s, ::uObject* a);
void Image__OnIsVisibleChanged_1(Image* __this, ::uObject* s, ::uObject* a);
void Image__OnParamChanged(Image* __this);
void Image__OnRooted(Image* __this);
void Image__OnSourceChanged(Image* __this);
void Image__OnUnrooted(Image* __this);
void Image__remove_ParamChanged(Image* __this, ::uDelegate* value);
void Image__remove_SourceChanged(Image* __this, ::uDelegate* value);
void Image__set_Color(Image* __this, ::app::Uno::Float4 value);
void Image__set_ContentAlignment(Image* __this, int value);
void Image__set_File(Image* __this, ::app::Uno::UX::FileSource* value);
void Image__set_Scale9Margin(Image* __this, ::app::Uno::Float4 value);
void Image__set_Source(Image* __this, ::app::Fuse::Resources::ImageSource* value);
void Image__set_StretchDirection(Image* __this, int value);
void Image__set_StretchMode(Image* __this, int value);
void Image__set_StretchSizing(Image* __this, int value);
void Image__SetContentAlignment(::uStatic* __this, Image* img, int v);
void Image__SetMemoryPolicy(::uStatic* __this, Image* img, ::app::Fuse::Resources::MemoryPolicy* v);
void Image__SetStretchDirection(::uStatic* __this, Image* img, int v);
void Image__SetStretchMode(::uStatic* __this, Image* img, int v);
void Image__SetStretchSizing(::uStatic* __this, Image* img, int v);
void Image__UpdateParam(::uStatic* __this, Image* img);

struct Image : ::app::Fuse::Controls::Panel
{
    ::uStrong< ::app::Fuse::Internal::ImageContainer*> _container;
    ::app::Uno::Float4 _color;
    ::app::Uno::Float4 _scale9Margin;
    bool _hasScale9Margin;
    ::uStrong< ::uDelegate*> ParamChanged;
    ::uStrong< ::uDelegate*> SourceChanged;

    void _ObjInit_4() { Image___ObjInit_4(this); }
    void add_ParamChanged(::uDelegate* value) { Image__add_ParamChanged(this, value); }
    void add_SourceChanged(::uDelegate* value) { Image__add_SourceChanged(this, value); }
    ::app::Uno::Float4 Color() { return Image__get_Color(this); }
    ::app::Fuse::Internal::ImageContainer* Container() { return Image__get_Container(this); }
    int ContentAlignment() { return Image__get_ContentAlignment(this); }
    ::app::Uno::UX::FileSource* File() { return Image__get_File(this); }
    ::app::Uno::Float4 Scale9Margin() { return Image__get_Scale9Margin(this); }
    ::app::Fuse::Resources::ImageSource* Source() { return Image__get_Source(this); }
    int StretchDirection() { return Image__get_StretchDirection(this); }
    int StretchMode() { return Image__get_StretchMode(this); }
    int StretchSizing() { return Image__get_StretchSizing(this); }
    void OnContainerParamChanged(::uObject* s, ::uObject* a) { Image__OnContainerParamChanged(this, s, a); }
    void OnContainerSourceChanged(::uObject* s, ::uObject* a) { Image__OnContainerSourceChanged(this, s, a); }
    void OnIsVisibleChanged_1(::uObject* s, ::uObject* a) { Image__OnIsVisibleChanged_1(this, s, a); }
    void OnParamChanged() { Image__OnParamChanged(this); }
    void OnSourceChanged() { Image__OnSourceChanged(this); }
    void remove_ParamChanged(::uDelegate* value) { Image__remove_ParamChanged(this, value); }
    void remove_SourceChanged(::uDelegate* value) { Image__remove_SourceChanged(this, value); }
    void Color(::app::Uno::Float4 value) { Image__set_Color(this, value); }
    void ContentAlignment(int value) { Image__set_ContentAlignment(this, value); }
    void File(::app::Uno::UX::FileSource* value) { Image__set_File(this, value); }
    void Scale9Margin(::app::Uno::Float4 value) { Image__set_Scale9Margin(this, value); }
    void Source(::app::Fuse::Resources::ImageSource* value) { Image__set_Source(this, value); }
    void StretchDirection(int value) { Image__set_StretchDirection(this, value); }
    void StretchMode(int value) { Image__set_StretchMode(this, value); }
    void StretchSizing(int value) { Image__set_StretchSizing(this, value); }
};

}}}


#endif
