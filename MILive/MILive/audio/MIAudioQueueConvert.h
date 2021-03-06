//
//  MIAudioQueueConvert.h
//  MILive
//
//  Created by mediaios on 2019/5/20.
//  Copyright © 2019年 iosmediadev@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

NS_ASSUME_NONNULL_BEGIN

@interface MIAudioQueueConvert : NSObject

@property (nonatomic,assign) BOOL m_isRunning;
- (void)stopRecorder;
- (void)startRecorder;

- (void)encodePCMToAAC:(MIAudioQueueConvert *)convert;
- (size_t)copyPCMSamplesIntoBuffer:(AudioBufferList*)ioData;

@end

NS_ASSUME_NONNULL_END
