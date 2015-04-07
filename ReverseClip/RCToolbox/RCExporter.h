// Originally forked from mikaelhellqvist/ReverseClip
// Please contact me if you use this code. Would be glad to know if it has helped you :)
// vijay@thegeekprojekt.com
// Thanks,
// Vijay Tholpadi

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>

#import "RCImageSequencer.h"

@protocol RCExporterDelegate <NSObject>

- (void)imageSequenceExportProgressAt:(Float64)percentage;

@end


@interface RCExporter : NSObject<ImageSequencerDelegate> {
    NSString *currentFileExportName;
}

@property (nonatomic,weak)id <RCExporterDelegate>delegate;

-(void)exportCompositionWithAsset:(AVURLAsset*)urlAsset
                       exportName:(NSString*)exportFileName
               shouldBeReversed:(BOOL)shouldBeReversed;

@end
