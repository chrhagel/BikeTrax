//
//  BTDelegate.h
//  BikeTrax
//
//  Created by blair on 4/1/16.
//  Copyright © 2016 Blair, Rick. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "blueToothHandler.h"
#import "DeviceSelectTableViewController.h"
#import "SensorTagData.h"


@interface BTDelegate : NSObject < bluetoothHandlerDelegate,deviceSelectTableViewControllerDelegate>



@property (nonatomic, strong) bluetoothHandler *handler;
@property (nonatomic, strong) NSMutableArray *services;
@property (nonatomic, assign) BOOL connected;
@property (nonatomic, strong) NSString *MQTTStringLive;
@property (nonatomic, strong) DeviceSelectTableViewController *deviceSelect;
@property (nonatomic, strong) SensorTagData *currentData;
@property (nonatomic, strong) NSString *currentRun;
//

+(NSString *) encodeJSONString:(NSString *)name value:(NSString *)value;

-(void) newDeviceWasSelected:(NSUUID *)identifier;
-(NSString *) startRecordingWithRunName:(NSString * ) runName;
-(NSString *) stopRecording;


@end
