//
//  WeatherDaily.m
//  Weather
//
//  Created by yanglu on 3/2/15.
//  Copyright (c) 2015 _Camellia_. All rights reserved.
//

#import "WeatherDaily.h"

@implementation WeatherDaily
+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    
    return paths;
}
@end
