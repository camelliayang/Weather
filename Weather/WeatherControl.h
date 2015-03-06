//
//  WeatherControl.h
//  Weather
//
//  Created by yanglu on 3/2/15.
//  Copyright (c) 2015 _Camellia_. All rights reserved.
//

@import Foundation;
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>
#import "WeatherCondition.h"
@interface WeatherControl : NSObject <CLLocationManagerDelegate>

+ (instancetype)sharedManager;

//Only managers can change the properties.
@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WeatherCondition *currentCondition;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void)findCurrentLocation;


@end
