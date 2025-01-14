// Copyright 2018-present 650 Industries. All rights reserved.

#import <ABI45_0_0React/ABI45_0_0RCTViewManager.h>

#import <ABI45_0_0ExpoModulesCore/ABI45_0_0EXViewManager.h>

// ABI45_0_0EXViewManagerAdapter is an RN wrapper around ExpoModulesCore's ABI45_0_0EXViewManager.
// For each exported view manager is it subclassed so that ABI45_0_0React Native
// can get proper module name (which is returned by a class method).
//
// Instead of instantiating the subclass by yourself,
// use ABI45_0_0EXViewManagerAdapterClassesRegistry's
// viewManagerAdapterClassForViewManager:.

@interface ABI45_0_0EXViewManagerAdapter : ABI45_0_0RCTViewManager

@end
