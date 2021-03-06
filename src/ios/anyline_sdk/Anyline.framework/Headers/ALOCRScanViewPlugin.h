//
//  ALOCRScanViewPlugin.h
//  Anyline
//
//  Created by Daniel Albertini on 18/10/2017.
//  Copyright © 2017 9Yards GmbH. All rights reserved.
//

#import "ALAbstractScanViewPlugin.h"
#import "ALOCRScanPlugin.h"

@interface ALOCRScanViewPlugin : ALAbstractScanViewPlugin

@property (nullable, nonatomic, strong) ALOCRScanPlugin *ocrScanPlugin;

- (_Nullable instancetype)initWithFrame:(CGRect)frame scanPlugin:(ALOCRScanPlugin *_Nonnull)ocrScanPlugin;

@end
