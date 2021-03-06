//
//  SettingTableViewController.h
//  MobileShadowSocks
//
//  Created by Linus Yang on 13-1-31.
//  Copyright (c) 2013 Linus Yang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {kProxyPac, kProxySocks, kProxyNone} ProxyStatus;

@interface SettingTableViewController : UITableViewController <UITextFieldDelegate> {
    CGFloat _cellWidth;
    NSInteger _tableSectionNumber;
    NSArray *_tableRowNumber;
    NSArray *_tableSectionTitle;
    NSArray *_tableElements;
    NSInteger _tagNumber;
    NSInteger _pacFileCellTag;
    NSInteger _autoProxyCellTag;
    NSInteger _enableCellTag;
    NSMutableArray *_tagKey;
    NSMutableArray *_tagWillNotifyChange;
    NSString *_pacURL;
    BOOL _isEnabled;
    BOOL _isPrefChanged;
}

- (void)fixProxy;
- (BOOL)setProxy:(ProxyStatus)status;
- (void)setPrefChanged;
- (void)notifyChanged;
- (void)notifyChangedWhenRunning;
- (void)setBadge;

@end
