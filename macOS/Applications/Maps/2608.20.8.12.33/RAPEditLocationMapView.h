//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MKMapViewDelegatePrivate-Protocol.h"

@class BlurredBackgroundLabel, MKMapView, MKMarkerAnnotationView, MapViewModeSelector, NSLayoutAnchor, NSLayoutYAxisAnchor, NSObject, NSString;
@protocol RAPEditLocationMapViewDelegate;

__attribute__((visibility("hidden")))
@interface RAPEditLocationMapView : UIView <MKMapViewDelegatePrivate>
{
    BOOL _userInteracted;
    BOOL _crosshairEnabled;
    MKMapView *_mapView;
    NSString *_prompt;
    NSObject<RAPEditLocationMapViewDelegate> *_delegate;
    MapViewModeSelector *_mapModeSegmentedControl;
    UIView *_floatingControlsView;
    BlurredBackgroundLabel *_descriptionView;
    MKMarkerAnnotationView *_crosshairAnnotationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MKMarkerAnnotationView *crosshairAnnotationView; // @synthesize crosshairAnnotationView=_crosshairAnnotationView;
@property(retain, nonatomic) BlurredBackgroundLabel *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *floatingControlsView; // @synthesize floatingControlsView=_floatingControlsView;
@property(retain, nonatomic) MapViewModeSelector *mapModeSegmentedControl; // @synthesize mapModeSegmentedControl=_mapModeSegmentedControl;
@property(nonatomic) __weak NSObject<RAPEditLocationMapViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) BOOL crosshairEnabled; // @synthesize crosshairEnabled=_crosshairEnabled;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(readonly, nonatomic) NSLayoutAnchor *trailingContentGuide;
@property(readonly, nonatomic) NSLayoutAnchor *leadingContentGuide;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomContentGuide;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(BOOL)arg5 tiltDirection:(long long)arg6;
- (struct CGPoint)mapView:(id)arg1 focusPointForPoint:(struct CGPoint)arg2 gesture:(long long)arg3;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(nonatomic) long long viewMode;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)selectedMapModeDidChange:(id)arg1;
- (void)updateAttributionInsets;
- (void)layoutSubviews;
- (void)updateCrosshairPosition;
- (void)setupConstraints;
- (void)setupDescriptionViewAndAdditionalConstraints;
- (id)initWithMapRect:(CDStruct_02837cd9)arg1 viewMode:(long long)arg2 markerViewAttributes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

