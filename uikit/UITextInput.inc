{ Parsed from UIKit.framework (iPhoneOS8.2) UITextInput.h }
{ Created on Fri Mar 20 2:11:41 2015 }


{$ifdef TYPES}
type
  UIDictationPhrasePtr = ^UIDictationPhrase;
  UITextPositionPtr = ^UITextPosition;
  UITextRangePtr = ^UITextRange;
  UITextSelectionRectPtr = ^UITextSelectionRect;
  UITextInputStringTokenizerPtr = ^UITextInputStringTokenizer;
  UITextInputModePtr = ^UITextInputMode;
  UIKeyInputProtocolPtr = ^UIKeyInputProtocol;
  UITextInputProtocolPtr = ^UITextInputProtocol;
  UITextInputDelegateProtocolPtr = ^UITextInputDelegateProtocol;
  UITextInputTokenizerProtocolPtr = ^UITextInputTokenizerProtocol;
{$endif}

{$ifdef PROTOCOLS}

type
  UIKeyInputProtocol = objcprotocol external name 'UIKeyInput' (UITextInputTraitsProtocol)
    function hasText: boolean; message 'hasText';
    procedure insertText (text: NSString); message 'insertText:';
    procedure deleteBackward; message 'deleteBackward';
  end;
{$endif}

{$ifdef TYPES}
type
  UITextStorageDirection = NSInteger;
  UITextStorageDirectionPtr = ^UITextStorageDirection;

const
  UITextStorageDirectionForward = 0;
  UITextStorageDirectionBackward = 1;

type
  UITextLayoutDirection = NSInteger;
  UITextLayoutDirectionPtr = ^UITextLayoutDirection;

const
  UITextLayoutDirectionRight = 2;
  UITextLayoutDirectionLeft = 3;
  UITextLayoutDirectionUp = 4;
  UITextLayoutDirectionDown = 5;

type
  UITextDirection = NSInteger;
  UITextDirectionPtr = ^UITextDirection;
  UITextWritingDirection = NSInteger;
  UITextWritingDirectionPtr = ^UITextWritingDirection;

const
  UITextWritingDirectionNatural = -1;
  UITextWritingDirectionLeftToRight = 0;
  UITextWritingDirectionRightToLeft = 1;

type
  UITextGranularity = NSInteger;
  UITextGranularityPtr = ^UITextGranularity;

const
  UITextGranularityCharacter = 0;
  UITextGranularityWord = 1;
  UITextGranularitySentence = 2;
  UITextGranularityParagraph = 3;
  UITextGranularityLine = 4;
  UITextGranularityDocument = 5;
{$endif}

{$ifdef CLASSES}

type
  UIDictationPhrase = objcclass external (NSObject)
  private
    _text: NSString;
    _alternativeInterpretations: NSArray;
  public
    function text: NSString; message 'text';
    function alternativeInterpretations: NSArray; message 'alternativeInterpretations';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextInputProtocol = objcprotocol external name 'UITextInput' (UIKeyInputProtocol)
  required
    function textInRange (range: UITextRange): NSString; message 'textInRange:';
    procedure replaceRange_withText (range: UITextRange; text: NSString); message 'replaceRange:withText:';
    procedure setSelectedTextRange(newValue: UITextRange); message 'setSelectedTextRange:';
    function selectedTextRange: UITextRange; message 'selectedTextRange';
    function markedTextRange: UITextRange; message 'markedTextRange';
    procedure setMarkedTextStyle(newValue: NSDictionary); message 'setMarkedTextStyle:';
    function markedTextStyle: NSDictionary; message 'markedTextStyle';
    procedure setMarkedText_selectedRange (markedText: NSString; selectedRange: NSRange); message 'setMarkedText:selectedRange:';
    procedure unmarkText; message 'unmarkText';
    function beginningOfDocument: UITextPosition; message 'beginningOfDocument';
    function endOfDocument: UITextPosition; message 'endOfDocument';
    function textRangeFromPosition_toPosition (fromPosition: UITextPosition; toPosition: UITextPosition): UITextRange; message 'textRangeFromPosition:toPosition:';
    function positionFromPosition_offset (position: UITextPosition; offset: NSInteger): UITextPosition; message 'positionFromPosition:offset:';
    function positionFromPosition_inDirection_offset (position: UITextPosition; direction: UITextLayoutDirection; offset: NSInteger): UITextPosition; message 'positionFromPosition:inDirection:offset:';
    function comparePosition_toPosition (position: UITextPosition; other: UITextPosition): NSComparisonResult; message 'comparePosition:toPosition:';
    function offsetFromPosition_toPosition (from: UITextPosition; toPosition: UITextPosition): NSInteger; message 'offsetFromPosition:toPosition:';
    procedure setInputDelegate(newValue: UITextInputDelegateProtocol); message 'setInputDelegate:';
    function inputDelegate: UITextInputDelegateProtocol; message 'inputDelegate';
    function tokenizer: UITextInputTokenizerProtocol; message 'tokenizer';
    function positionWithinRange_farthestInDirection (range: UITextRange; direction: UITextLayoutDirection): UITextPosition; message 'positionWithinRange:farthestInDirection:';
    function characterRangeByExtendingPosition_inDirection (position: UITextPosition; direction: UITextLayoutDirection): UITextRange; message 'characterRangeByExtendingPosition:inDirection:';
    function baseWritingDirectionForPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): UITextWritingDirection; message 'baseWritingDirectionForPosition:inDirection:';
    procedure setBaseWritingDirection_forRange (writingDirection: UITextWritingDirection; range: UITextRange); message 'setBaseWritingDirection:forRange:';
    function firstRectForRange (range: UITextRange): CGRect; message 'firstRectForRange:';
    function caretRectForPosition (position: UITextPosition): CGRect; message 'caretRectForPosition:';
    function selectionRectsForRange (range: UITextRange): NSArray; message 'selectionRectsForRange:'; { available in 6_0 }
    function closestPositionToPoint (point: CGPoint): UITextPosition; message 'closestPositionToPoint:';
    function closestPositionToPoint_withinRange (point: CGPoint; range: UITextRange): UITextPosition; message 'closestPositionToPoint:withinRange:';
    function characterRangeAtPoint (point: CGPoint): UITextRange; message 'characterRangeAtPoint:';
  optional
    function shouldChangeTextInRange_replacementText (range: UITextRange; text: NSString): boolean; message 'shouldChangeTextInRange:replacementText:'; { available in 6_0 }
    function textStylingAtPosition_inDirection (position: UITextPosition; direction: UITextStorageDirection): NSDictionary; message 'textStylingAtPosition:inDirection:';
    function positionWithinRange_atCharacterOffset (range: UITextRange; offset: NSInteger): UITextPosition; message 'positionWithinRange:atCharacterOffset:';
    function characterOffsetOfPosition_withinRange (position: UITextPosition; range: UITextRange): NSInteger; message 'characterOffsetOfPosition:withinRange:';
    function textInputView: UIView; message 'textInputView';
    procedure setSelectionAffinity(newValue: UITextStorageDirection); message 'setSelectionAffinity:';
    function selectionAffinity: UITextStorageDirection; message 'selectionAffinity';
    procedure insertDictationResult (dictationResult: NSArray); message 'insertDictationResult:';
    procedure dictationRecordingDidEnd; message 'dictationRecordingDidEnd';
    procedure dictationRecognitionFailed; message 'dictationRecognitionFailed';
    function insertDictationResultPlaceholder: id; message 'insertDictationResultPlaceholder';
    function frameForDictationResultPlaceholder (placeholder: id): CGRect; message 'frameForDictationResultPlaceholder:';
    procedure removeDictationResultPlaceholder_willInsertResult (placeholder: id; willInsertResult: boolean); message 'removeDictationResultPlaceholder:willInsertResult:';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITextInputTextBackgroundColorKey: NSString deprecated 'in 3_2, 8_0, "Use NSBackgroundColorAttributeName instead"'; cvar; external;
  UITextInputTextColorKey: NSString deprecated 'in 3_2, 8_0, "Use NSForegroundColorAttributeName instead"'; cvar; external;
  UITextInputTextFontKey: NSString { available in 3_2 }; cvar; external;
{$endif}

{$ifdef CLASSES}

type
  UITextPosition = objcclass external (NSObject)
  end;

type
  UITextRange = objcclass external (NSObject)
  public
    function isEmpty: boolean; message 'isEmpty';
    function start: UITextPosition; message 'start';
    function end_: UITextPosition; message 'end';
  end;

type
  UITextSelectionRect = objcclass external (NSObject)
  public
    function rect: CGRect; message 'rect';
    function writingDirection: UITextWritingDirection; message 'writingDirection';
    function containsStart: boolean; message 'containsStart';
    function containsEnd: boolean; message 'containsEnd';
    function isVertical: boolean; message 'isVertical';
  end;
{$endif}

{$ifdef PROTOCOLS}

type
  UITextInputDelegateProtocol = objcprotocol external name 'UITextInputDelegate' (NSObjectProtocol)
    procedure selectionWillChange (textInput: UITextInputProtocol); message 'selectionWillChange:';
    procedure selectionDidChange (textInput: UITextInputProtocol); message 'selectionDidChange:';
    procedure textWillChange (textInput: UITextInputProtocol); message 'textWillChange:';
    procedure textDidChange (textInput: UITextInputProtocol); message 'textDidChange:';
  end;

type
  UITextInputTokenizerProtocol = objcprotocol external name 'UITextInputTokenizer' (NSObjectProtocol)
  required
    function rangeEnclosingPosition_withGranularity_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): UITextRange; message 'rangeEnclosingPosition:withGranularity:inDirection:';
    function isPosition_atBoundary_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): boolean; message 'isPosition:atBoundary:inDirection:';
    function positionFromPosition_toBoundary_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): UITextPosition; message 'positionFromPosition:toBoundary:inDirection:';
    function isPosition_withinTextUnit_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): boolean; message 'isPosition:withinTextUnit:inDirection:';
  end;
{$endif}

{$ifdef CLASSES}

type
  UITextInputStringTokenizer = objcclass external (NSObject, UITextInputTokenizerProtocol)
  public
    function initWithTextInput (textInput: UITextInputProtocol): instancetype; message 'initWithTextInput:';

    { Adopted protocols }
    function isPosition_atBoundary_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): boolean; message 'isPosition:atBoundary:inDirection:';
    function isPosition_withinTextUnit_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): boolean; message 'isPosition:withinTextUnit:inDirection:';
    function positionFromPosition_toBoundary_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): UITextPosition; message 'positionFromPosition:toBoundary:inDirection:';
    function rangeEnclosingPosition_withGranularity_inDirection (position: UITextPosition; granularity: UITextGranularity; direction: UITextDirection): UITextRange; message 'rangeEnclosingPosition:withGranularity:inDirection:';
  end;

type
  UITextInputMode = objcclass external (NSObject, NSSecureCodingProtocol)
  public
    function primaryLanguage: NSString; message 'primaryLanguage';
    class function currentInputMode: UITextInputMode; message 'currentInputMode'; deprecated 'in 4_2, 7_0';
    class function activeInputModes: NSArray; message 'activeInputModes';

    { Adopted protocols }
    procedure encodeWithCoder (aCoder: NSCoder); message 'encodeWithCoder:';
    function initWithCoder (aDecoder: NSCoder): id; message 'initWithCoder:';
    class function supportsSecureCoding: boolean; message 'supportsSecureCoding';
  end;
{$endif}

{$ifdef EXTERNAL_SYMBOLS}
var
  UITextInputCurrentInputModeDidChangeNotification: NSString { available in 4_2 }; cvar; external;
{$endif}

