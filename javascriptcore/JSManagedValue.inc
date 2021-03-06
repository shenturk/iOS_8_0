{ Parsed from JavaScriptCore.framework (iPhoneOS8.2) JSManagedValue.h }
{ Created on Fri Mar 20 2:11:17 2015 }


{$ifdef TYPES}
type
  JSManagedValuePtr = ^JSManagedValue;
{$endif}

{$ifndef JSManagedValue_h}

{$if defined(JSC_OBJC_API_ENABLED)}
{$ifdef CLASSES}

type
  JSManagedValue = objcclass external (NSObject)
  public
    class function managedValueWithValue (value: JSValue): JSManagedValue; message 'managedValueWithValue:';
    class function managedValueWithValue_andOwner (value: JSValue; owner: id): JSManagedValue; message 'managedValueWithValue:andOwner:'; { available in 10_10, 8_0 }
    function initWithValue (value: JSValue): instancetype; message 'initWithValue:';
    function value: JSValue; message 'value';
  end;
{$endif}

{$endif}
{$endif}
