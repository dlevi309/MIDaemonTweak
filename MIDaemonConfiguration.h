#import <MobileInstallation/MIGlobalConfiguration.h>

@interface MIDaemonConfiguration : MIGlobalConfiguration {

	BOOL _codeSigningEnforcementIsDisabled;
	BOOL _isInternalImageType;
	BOOL _skipDeviceFamilyCheck;
	BOOL _skipThinningCheck;
	BOOL _allowPatchWithoutSinf;
	unsigned _installQOSOverride;
	long long _nSimultaneousInstallations;

}

@property (nonatomic,readonly) unsigned installQOSOverride;                             //@synthesize installQOSOverride=_installQOSOverride - In the implementation block
@property (nonatomic,readonly) BOOL skipDeviceFamilyCheck;                              //@synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck - In the implementation block
@property (nonatomic,readonly) BOOL skipThinningCheck;                                  //@synthesize skipThinningCheck=_skipThinningCheck - In the implementation block
@property (nonatomic,readonly) BOOL allowPatchWithoutSinf;                              //@synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf - In the implementation block
@property (nonatomic,readonly) BOOL codeSigningEnforcementIsDisabled;                   //@synthesize codeSigningEnforcementIsDisabled=_codeSigningEnforcementIsDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isInternalImageType;                                //@synthesize isInternalImageType=_isInternalImageType - In the implementation block
@property (nonatomic,readonly) long long nSimultaneousInstallations;                    //@synthesize nSimultaneousInstallations=_nSimultaneousInstallations - In the implementation block
@property (assign,nonatomic) BOOL haveUpdatedPluginContainersWithParentID; 
+(id)sharedInstance;
-(id)init;
-(BOOL)haveUpdatedPluginContainersWithParentID;
-(void)setHaveUpdatedPluginContainersWithParentID:(BOOL)arg1 ;
-(BOOL)isInternalImageType;
-(long long)nSimultaneousInstallations;
-(unsigned)installQOSOverride;
-(BOOL)codeSigningEnforcementIsDisabled;
-(BOOL)skipDeviceFamilyCheck;
-(BOOL)skipThinningCheck;
-(BOOL)allowPatchWithoutSinf;
@end

