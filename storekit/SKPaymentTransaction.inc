{ Parsed from StoreKit.framework (iPhoneOS8.2) SKPaymentTransaction.h }
{ Created on Fri Mar 20 2:11:20 2015 }


{$ifdef TYPES}
type
  SKPaymentTransactionPtr = ^SKPaymentTransaction;
{$endif}

{$ifdef TYPES}
type
  SKPaymentTransactionState = NSInteger;
  SKPaymentTransactionStatePtr = ^SKPaymentTransactionState;

const
  SKPaymentTransactionStatePurchasing = 0;
  SKPaymentTransactionStatePurchased = 1;
  SKPaymentTransactionStateFailed = 2;
  SKPaymentTransactionStateRestored = 3;
  SKPaymentTransactionStateDeferred = 4 { available in 8_0 };
{$endif}

{$ifdef CLASSES}

type
  SKPaymentTransaction = objcclass external (NSObject)
  private
    _internal: id;
  public
    function error: NSError; message 'error';
    function originalTransaction: SKPaymentTransaction; message 'originalTransaction';
    function payment: SKPayment; message 'payment';
    function downloads: NSArray; message 'downloads';
    function transactionDate: NSDate; message 'transactionDate';
    function transactionIdentifier: NSString; message 'transactionIdentifier';
    function transactionReceipt: NSData; message 'transactionReceipt';
    function transactionState: SKPaymentTransactionState; message 'transactionState';
  end;
{$endif}

