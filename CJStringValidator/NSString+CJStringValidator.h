//
//  NSString+CJStringValidator.h
//
//  Created by Jeremy Chaufourier on 29/08/12.
//  Copyright (c) 2012-2013 Jeremy Chaufourier
//

#import <Foundation/Foundation.h>

@interface NSString (CJStringValidator)

+ (BOOL)isNilOrEmpty:(NSString *)input;
- (BOOL)isEmail;
- (BOOL)isPhoneNumber;
- (BOOL)isDigit;
- (BOOL)isNumeric;
- (BOOL)isAlphanumeric;
- (BOOL)hasBothCases;
- (BOOL)isUrl;
- (BOOL)isMinLength:(NSUInteger)length;
- (BOOL)isMaxLength:(NSUInteger)length;
- (BOOL)isMinLength:(NSUInteger)min andMaxLength:(NSUInteger)max;
- (BOOL)isEmpty;

@end
