#define uObjC_NATIVE_TYPE UIControl
#define uObjC_UNO_TYPE_IS_SEALED 0
#define uObjC_UNO_TYPE ::app::iOS::UIKit::UIControl*
#define uObjC_UNO_TYPE_OBJECT ::app::iOS::UIKit::UIControl__typeof()

#include <UIKit/UIKit.h>
#include <uObjC.Wrapper.h>
#include <uObjC.Proxy.h>

#if !uObjC_UNO_TYPE_IS_SEALED
@implementation uObjC_PROXY




































- (void) addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->addTargetActionForControlEvents((::id)target, (uObjC::Selector)action, ::uUInt(controlEvents));
}



- (void) removeTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents
{
    uObjC_PROXY_FUNCTION_PROLOGUE
    __this->removeTargetActionForControlEvents((::id)target, (uObjC::Selector)action, ::uUInt(controlEvents));
}





























































































































































@end
#endif // !uObjC_UNO_TYPE_IS_SEALED
