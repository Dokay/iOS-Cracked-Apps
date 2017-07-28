//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ONEHomeContentAware.h"
#import "ONESBaseMapEntranceDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class DCFloatLayerModel, DCSourceModel, DDMap, NSDictionary, NSNumber, NSString, TRTopNavgationView, UIButton, UIImageView, UIView;

@interface DCBaseViewController : UIViewController <ONESBaseMapEntranceDelegate, UIGestureRecognizerDelegate, ONEHomeContentAware>
{
    _Bool _showNavBarInit;
    _Bool _showMap;
    long long _pageFromType;
    DDMap *_map;
    double _centerOffsetY;
    id <DCFloatLayer> _currentFloatLayer;
    UIButton *_backButton;
    struct CGRect _contentRect;
}

+ (id)compPropertiesForClass:(Class)arg1;
+ (id)dc_parasPropertyWithClass:(id)arg1 stop:(CDUnknownBlockType)arg2;
+ (id)dc_componentPropertiesWithClass:(Class)arg1;
+ (id)dc_getComponentPropertiesWithClass:(Class)arg1;
+ (_Bool)isHomeVCClass:(Class)arg1;
+ (void)hookLifeCycleMethod;
+ (void)gotoHomePageWhenLoginWithUserID:(id)arg1 role:(long long)arg2 addParametersDict:(id)arg3;
+ (void)gotoHomePageWhenLoginWithUserID:(id)arg1 role:(long long)arg2 sceneMsg:(id)arg3 sourceType:(long long)arg4;
+ (void)hookInit;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <DCFloatLayer> currentFloatLayer; // @synthesize currentFloatLayer=_currentFloatLayer;
@property(nonatomic) double centerOffsetY; // @synthesize centerOffsetY=_centerOffsetY;
@property(nonatomic) struct CGRect contentRect; // @synthesize contentRect=_contentRect;
@property(retain, nonatomic) DDMap *map; // @synthesize map=_map;
@property(nonatomic) long long pageFromType; // @synthesize pageFromType=_pageFromType;
@property(nonatomic) _Bool showMap; // @synthesize showMap=_showMap;
@property(nonatomic) _Bool showNavBarInit; // @synthesize showNavBarInit=_showNavBarInit;
- (void).cxx_destruct;
- (_Bool)needPostIMPush;
- (_Bool)showIMBtn;
- (void)backButtonClicked:(id)arg1;
- (void)setNavigationTitle:(id)arg1;
- (void)setNavigationRightView:(id)arg1;
- (void)setShowBackButton:(_Bool)arg1;
- (void)setContentFrame:(struct CGRect)arg1;
- (void)appDidBecomeActive;
- (void)enterForeground;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)setupSubViews_mapView;
@property(readonly, nonatomic) TRTopNavgationView *topNavgationView;
@property(readonly, nonatomic) NSDictionary *params;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) __weak UIView *floatLayerBaseView; // @dynamic floatLayerBaseView;
@property(copy, nonatomic) NSNumber *page_from;
@property(retain, nonatomic) UIImageView *redPacketView;
@property(retain, nonatomic) DCFloatLayerModel *floatAdModel;
@property(nonatomic) _Bool hasShownFloatLayer; // @dynamic hasShownFloatLayer;
- (id)currentFloatLayerView;
- (void)dismissFloatLayerSuccessForModel:(id)arg1;
- (void)dismissCurrentFloatLayerWithAnimation:(_Bool)arg1;
- (void)showFloatLayerSuccess:(_Bool)arg1;
- (void)showFloatLayerWithPageType:(long long)arg1;
- (void)showFloatLayerWithPageType:(long long)arg1 params:(id)arg2;
- (void)showFloatLayerWithFloatModel:(id)arg1;
- (void)hideRedPacketView;
- (void)tapGestureAction:(id)arg1;
- (void)showFloatAdViewWithFrame:(struct CGRect)arg1 dataModel:(id)arg2;
- (void)showFloatLayer;
- (_Bool)disableGuesture;
- (_Bool)isShowingFloatLayers;
- (_Bool)shouldShowFloatLayers;
- (_Bool)canShowFloatLayer;
- (id)paramsCreateFloatLayerForModel:(id)arg1;
- (id)floatLayerModel;
- (void)showCarOwnerAuthWebViewController;
- (id)paramsForComp:(id)arg1;
@property(nonatomic) int pageType; // @dynamic pageType;
- (void)sendMsgToAllProperties:(SEL)arg1;
- (void)loadComProperty:(id)arg1;
- (void)loadComponentProperty:(id)arg1;
- (void)autoLoadProperties;
- (void)dcc_viewDidDisappear:(_Bool)arg1;
- (void)dcc_viewWillDisappear:(_Bool)arg1;
- (void)dcc_viewDidAppear:(_Bool)arg1;
- (void)dcc_viewWillAppear:(_Bool)arg1;
- (void)dcc_viewDidLoad;
- (id)createComByType:(int)arg1;
- (void)setIsVCFirstShow_source:(_Bool)arg1;
- (_Bool)isVCFirstShow_source;
- (void)setSourceModel:(id)arg1;
@property(readonly, nonatomic) DCSourceModel *sourceModel;
- (void)insertToViewWillDisappear;
- (void)insertToViewWillAppear;
- (void)hook_viewWillDisappear:(_Bool)arg1;
- (void)hook_viewWillAppear:(_Bool)arg1;
- (void)insertToViewDidLoad;
- (void)hook_viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
