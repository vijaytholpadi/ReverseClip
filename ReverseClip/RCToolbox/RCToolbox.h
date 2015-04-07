// Originally forked from mikaelhellqvist/ReverseClip
// Please contact me if you use this code. Would be glad to know if it has helped you :)
// vijay@thegeekprojekt.com
// Thanks,
// Vijay Tholpadi

#import <Foundation/Foundation.h>
#import "RCExporter.h"
#import "RCImageSequencer.h"
#import "RCComposer.h"

#import "RCFileHandler.h"

@interface RCToolbox : NSObject

@property(nonatomic,retain) RCExporter *exporterTool;
@property(nonatomic,retain) RCImageSequencer *imageSequencerTool;
@property(nonatomic,retain) RCComposer *compositionTool;
@property(nonatomic,retain) RCFileHandler *fileHandler;

+ (RCToolbox *)sharedToolbox;

@end
