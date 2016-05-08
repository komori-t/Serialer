#import <Foundation/Foundation.h>
#import <termios.h>

extern NSString * const SerialException;

@protocol SerialDelegate <NSObject>

- (void)readData:(NSData *)data;

@end

@interface Serial : NSObject

+ (NSArray *)availableDevices;
- (id)initWithBSDPath:(NSString *)path;
- (void)openWithBaud:(speed_t)baud delegate:(id <SerialDelegate>)delegate;
- (void)sendData:(NSData *)data;
- (void)close;

@property (readonly) NSString *path;

@end
