//
//  WeatherData.h
//  Weather
//
//  Created by yanglu on 3/2/15.
//  Copyright (c) 2015 _Camellia_. All rights reserved.
//


@import CoreLocation;
@import Foundation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

@interface WeatherData : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
@end
