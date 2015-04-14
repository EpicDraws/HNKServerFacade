//
//  HNKServer.h
//  HNKServerFacade
//
// Copyright (c) 2015 Harlan Kellaway
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#import <Foundation/Foundation.h>

@interface HNKServer : NSObject

/**
 *  The base URL for the Server
 */
+ (NSString *)baseURLString;

#pragma mark - Initialization

/**
 *  Sets up Server with provided base URL
 *
 *  @param baseURLString Base URL for the Server
 *
 *  @warning The base URL for the Server cannot be reset once setup
 *  @warning baseURLString cannot be nil
 */
+ (void)setupWithBaseUrl:(NSString *)baseURLString;

#pragma mark - Requests

/**
 *  Performs a GET request to the Server
 *
 *  @param path       Path to GET from
 *  @param parameters Request parameters
 *  @param completion A block to be executed when the request finishes
 */
+ (void)GET:(NSString *)path
    parameters:(NSDictionary *)parameters
    completion:(void (^)(id responseObject, NSError *error))completion;

@end