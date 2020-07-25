%group Daemon
%hook MIDaemonConfiguration
-(void)_skipDeviceFamilyCheck:(BOOL)arg1
{
    %orig(YES);
}
-(BOOL)skipDeviceFamilyCheck
{
    return YES;
}
%end
%end

%ctor
{
    {
        %init(Daemon);
    }
}
