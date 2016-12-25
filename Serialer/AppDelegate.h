#import <Cocoa/Cocoa.h>
#import "Serial.h"

@interface AppDelegate : NSObject <NSApplicationDelegate, SerialDelegate>

@property (weak)   IBOutlet NSComboBox    *portsBox;
@property (weak)   IBOutlet NSComboBox    *baudPopUp;
@property (weak)   IBOutlet NSPopUpButton *modePopUp;
@property (assign) IBOutlet NSTextView    *outputView;
@property (weak)   IBOutlet NSTextField   *sendTextField;
@property (weak)   IBOutlet NSPopUpButton *sendKindBox;
@property (weak)   IBOutlet NSScrollView  *scrollView;

- (IBAction)search:(NSButton *)sender;
- (IBAction)send:(NSButton *)sender;
- (IBAction)startOrStop:(NSButton *)sender;
- (IBAction)clear:(NSButton *)sender;

@end

