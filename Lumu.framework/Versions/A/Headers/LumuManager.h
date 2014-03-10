//
//  LumuManager.h
//  Lumu
//
//  Created by Benjamin Polovič on 27. 04. 13.
//
//


#import <Foundation/Foundation.h>

/*
 * LumuManagerDelegate
 */

@protocol LumuManagerDelegate <NSObject>
@optional
-(void)lumuManagerDidNotGetRecordPermission;
-(void)lumuManagerDidRecognizeLumu;
-(void)lumuManagerDidNotRecognizeLumu;
-(void)lumuManagerDidReceiveData: (double)value;
-(void)lumuManagerDidStartLumu;
-(void)lumuManagerDidStopLumu;
-(void)lumuManagerDidRecognizeVolumeButtonPressed;
@end

@interface LumuManager : NSObject

/*
 * The delegate property. When the delegate is set, the Lumu starts running and sending data.
 * When the delegate is set to nil, Lumu stops working.
 */

@property (nonatomic, weak) id <LumuManagerDelegate> delegate;

/*
 * This property defines if the LumuManager tries to automatically recognize Lumu 
 * when Lumu is attached, and stops it on Audio interrupts. If set to NO, you have to manually
 * start LumuManager.
 * The default value is YES.
 */

@property BOOL shouldRecognizeLumu;

/*
 * Shared instance.
*/

+ (LumuManager *)sharedManager;

/*
 * Tries to start Lumu. If Lumu is already running, or there is a problem with Audio session,
 * or the device is not attched this method returns NO. If successful it returns YES.
 */

- (BOOL)startLumuManager;

/*
 * Stop Lumu manager.
 */

- (void)stopLumuManager;



@end