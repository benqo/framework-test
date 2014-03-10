<p align="center">
  <a href="http://lu.mu/"><img src="http://lu.mu/images/logo.png" alt="Lumu" title="Lumu" width="200px" /></a>
</p>

## Lumu iOS Framework

The Lumu framework helps you connect [Lumu](http://lu.mu/) to your iOS application. It provides the essential methods for managing the connection with Lumu and receiving data.

Lumu is a light meter for iOS devices that helps you take great photos. For more information about Lumu please visit our [website](http://lu.mu/).

## Installation

1. Add the ``Lumu.framework`` to your project
2. Link the ``AVFoundation.framework``, ``MediaPlayer.framework`` and ``AudioToolbox.framework`` to your project
3. Import ``LumuManager.h`` to your class
4. Start measuring!

## Usage

To start receiving data from Lumu in your class, you have to complete the following steps:

1. Conform to the ``LumuManagerDelegate`` protocol
2. Get the shared instance of LumuManager: ``LumuManager *lumu = [LumuManager sharedManager];``
3. Set your class as the delegate for Lumu
4. Implement the optional protocol methods, to receive data from Lumu

LumuManager provides the next optional protocol methods: 
```objectivec
 -(void)lumuManagerDidRecognizeLumu;
 -(void)lumuManagerDidReceiveData: (NSNumber *)value;
 -(void)lumuManagerDidReceiveFirstData: (NSNumber *)value;
 -(void)lumuManagerDidStartLumu;
 -(void)lumuManagerDidStopLumu;
 -(void)lumuManagerDidRecognizeVolumeButtonPressed;
```

By default, the LumuManager will try to start Lumu as soon as you set the delegate property. It will also automatically stop and start Lumu when you detach/attach it. 
If you would like to manually start and stop Lumu you have to set the ``shouldRecognizeLumu`` property to ``NO``, before you set the delegate property. Then you have to use ``startLumuManager`` and ``stopLumuManager`` methods.

## Example

The example project uses the Lumu framework to receive data from Lumu and to simply display this value on a Label.
It stops the LumuManager when the App stops being active, and starts it when the App is in the foreground again.


## FAQ

### Can I use Lumu framework without a Lumu?

No. In order to get light measurements and a response from the framework you need Lumu. You can order one from [our website](http://lu.mu/).

## Feedback

If you have any questions, troubles or comments, please send us an email to support@lu.mu and we will help you.
