{ Parsed from SystemConfiguration.framework (iPhoneOS8.2) SCSchemaDefinitions.h }
{ Created on Fri Mar 20 2:11:34 2015 }

{$ifndef _SCSCHEMADEFINITIONS_H}

{$ifdef USE_SYSTEMCONFIGURATION_PRIVATE_HEADERS}

{$else}

{$if defined(__NULL_MACRO__)}
{$ifdef EXTERNAL_SYMBOLS}
var
  kSCResvLink: CFStringRef; cvar; external;
  kSCResvInactive: CFStringRef; cvar; external;
  kSCPropInterfaceName: CFStringRef; cvar; external;
  kSCPropMACAddress: CFStringRef; cvar; external;
  kSCPropUserDefinedName: CFStringRef; cvar; external;
  kSCPropVersion: CFStringRef; cvar; external;
  kSCPrefCurrentSet: CFStringRef; cvar; external;
  kSCPrefNetworkServices: CFStringRef; cvar; external;
  kSCPrefSets: CFStringRef; cvar; external;
  kSCPrefSystem: CFStringRef; cvar; external;
  kSCCompNetwork: CFStringRef; cvar; external;
  kSCCompService: CFStringRef; cvar; external;
  kSCCompGlobal: CFStringRef; cvar; external;
  kSCCompHostNames: CFStringRef; cvar; external;
  kSCCompInterface: CFStringRef; cvar; external;
  kSCCompSystem: CFStringRef; cvar; external;
  kSCCompUsers: CFStringRef; cvar; external;
  kSCCompAnyRegex: CFStringRef; cvar; external;
  kSCEntNetAirPort: CFStringRef; cvar; external;
  kSCEntNetAppleTalk: CFStringRef; cvar; external;
  kSCEntNetDHCP: CFStringRef; cvar; external;
  kSCEntNetDNS: CFStringRef; cvar; external;
  kSCEntNetEthernet: CFStringRef; cvar; external;
  kSCEntNetFireWire: CFStringRef; cvar; external;
  kSCEntNetInterface: CFStringRef; cvar; external;
  kSCEntNetIPSec: CFStringRef; cvar; external;
  kSCEntNetIPv4: CFStringRef; cvar; external;
  kSCEntNetIPv6: CFStringRef; cvar; external;
  kSCEntNetL2TP: CFStringRef; cvar; external;
  kSCEntNetLink: CFStringRef; cvar; external;
  kSCEntNetModem: CFStringRef; cvar; external;
  kSCEntNetNetInfo: CFStringRef; cvar; external;
  kSCEntNetPPP: CFStringRef; cvar; external;
  kSCEntNetPPPoE: CFStringRef; cvar; external;
  kSCEntNetPPPSerial: CFStringRef; cvar; external;
  kSCEntNetPPTP: CFStringRef; cvar; external;
  kSCEntNetProxies: CFStringRef; cvar; external;
  kSCEntNetSMB: CFStringRef; cvar; external;
  kSCEntNet6to4: CFStringRef; cvar; external;
  kSCPropNetOverridePrimary: CFStringRef; cvar; external;
  kSCPropNetServiceOrder: CFStringRef; cvar; external;
  kSCPropNetPPPOverridePrimary: CFStringRef; cvar; external;
  kSCPropNetInterfaces: CFStringRef; cvar; external;
  kSCPropNetLocalHostName: CFStringRef; cvar; external;
  kSCPropNetAirPortAllowNetCreation: CFStringRef; cvar; external;
  kSCPropNetAirPortAuthPassword: CFStringRef; cvar; external;
  kSCPropNetAirPortAuthPasswordEncryption: CFStringRef; cvar; external;
  kSCPropNetAirPortJoinMode: CFStringRef; cvar; external;
  kSCPropNetAirPortPowerEnabled: CFStringRef; cvar; external;
  kSCPropNetAirPortPreferredNetwork: CFStringRef; cvar; external;
  kSCPropNetAirPortSavePasswords: CFStringRef; cvar; external;
  kSCValNetAirPortJoinModeAutomatic: CFStringRef; cvar; external;
  kSCValNetAirPortJoinModePreferred: CFStringRef; cvar; external;
  kSCValNetAirPortJoinModeRanked: CFStringRef; cvar; external;
  kSCValNetAirPortJoinModeRecent: CFStringRef; cvar; external;
  kSCValNetAirPortJoinModeStrongest: CFStringRef; cvar; external;
  kSCValNetAirPortAuthPasswordEncryptionKeychain: CFStringRef; cvar; external;
  kSCPropNetAppleTalkComputerName: CFStringRef; cvar; external;
  kSCPropNetAppleTalkComputerNameEncoding: CFStringRef; cvar; external;
  kSCPropNetAppleTalkConfigMethod: CFStringRef; cvar; external;
  kSCPropNetAppleTalkDefaultZone: CFStringRef; cvar; external;
  kSCPropNetAppleTalkNetworkID: CFStringRef; cvar; external;
  kSCPropNetAppleTalkNetworkRange: CFStringRef; cvar; external;
  kSCPropNetAppleTalkNodeID: CFStringRef; cvar; external;
  kSCPropNetAppleTalkSeedNetworkRange: CFStringRef; cvar; external;
  kSCPropNetAppleTalkSeedZones: CFStringRef; cvar; external;
  kSCValNetAppleTalkConfigMethodNode: CFStringRef; cvar; external;
  kSCValNetAppleTalkConfigMethodRouter: CFStringRef; cvar; external;
  kSCValNetAppleTalkConfigMethodSeedRouter: CFStringRef; cvar; external;
  kSCPropNetDNSDomainName: CFStringRef; cvar; external;
  kSCPropNetDNSOptions: CFStringRef; cvar; external;
  kSCPropNetDNSSearchDomains: CFStringRef; cvar; external;
  kSCPropNetDNSSearchOrder: CFStringRef; cvar; external;
  kSCPropNetDNSServerAddresses: CFStringRef; cvar; external;
  kSCPropNetDNSServerPort: CFStringRef; cvar; external;
  kSCPropNetDNSServerTimeout: CFStringRef; cvar; external;
  kSCPropNetDNSSortList: CFStringRef; cvar; external;
  kSCPropNetDNSSupplementalMatchDomains: CFStringRef; cvar; external;
  kSCPropNetDNSSupplementalMatchOrders: CFStringRef; cvar; external;
  kSCPropNetEthernetMediaSubType: CFStringRef; cvar; external;
  kSCPropNetEthernetMediaOptions: CFStringRef; cvar; external;
  kSCPropNetEthernetMTU: CFStringRef; cvar; external;
  kSCPropNetInterfaceDeviceName: CFStringRef; cvar; external;
  kSCPropNetInterfaceHardware: CFStringRef; cvar; external;
  kSCPropNetInterfaceType: CFStringRef; cvar; external;
  kSCPropNetInterfaceSubType: CFStringRef; cvar; external;
  kSCPropNetInterfaceSupportsModemOnHold: CFStringRef; cvar; external;
  kSCValNetInterfaceTypeEthernet: CFStringRef; cvar; external;
  kSCValNetInterfaceTypeFireWire: CFStringRef; cvar; external;
  kSCValNetInterfaceTypePPP: CFStringRef; cvar; external;
  kSCValNetInterfaceType6to4: CFStringRef; cvar; external;
  kSCValNetInterfaceTypeIPSec: CFStringRef; cvar; external;
  kSCValNetInterfaceSubTypePPPoE: CFStringRef; cvar; external;
  kSCValNetInterfaceSubTypePPPSerial: CFStringRef; cvar; external;
  kSCValNetInterfaceSubTypePPTP: CFStringRef; cvar; external;
  kSCValNetInterfaceSubTypeL2TP: CFStringRef; cvar; external;
  kSCPropNetIPSecAuthenticationMethod: CFStringRef; cvar; external;
  kSCPropNetIPSecLocalCertificate: CFStringRef; cvar; external;
  kSCPropNetIPSecLocalIdentifier: CFStringRef; cvar; external;
  kSCPropNetIPSecLocalIdentifierType: CFStringRef; cvar; external;
  kSCPropNetIPSecSharedSecret: CFStringRef; cvar; external;
  kSCPropNetIPSecSharedSecretEncryption: CFStringRef; cvar; external;
  kSCPropNetIPSecConnectTime: CFStringRef; cvar; external;
  kSCPropNetIPSecRemoteAddress: CFStringRef; cvar; external;
  kSCPropNetIPSecStatus: CFStringRef; cvar; external;
  kSCPropNetIPSecXAuthEnabled: CFStringRef; cvar; external;
  kSCPropNetIPSecXAuthName: CFStringRef; cvar; external;
  kSCPropNetIPSecXAuthPassword: CFStringRef; cvar; external;
  kSCPropNetIPSecXAuthPasswordEncryption: CFStringRef; cvar; external;
  kSCValNetIPSecAuthenticationMethodSharedSecret: CFStringRef; cvar; external;
  kSCValNetIPSecAuthenticationMethodCertificate: CFStringRef; cvar; external;
  kSCValNetIPSecAuthenticationMethodHybrid: CFStringRef; cvar; external;
  kSCValNetIPSecLocalIdentifierTypeKeyID: CFStringRef; cvar; external;
  kSCValNetIPSecSharedSecretEncryptionKeychain: CFStringRef; cvar; external;
  kSCValNetIPSecXAuthPasswordEncryptionKeychain: CFStringRef; cvar; external;
  kSCValNetIPSecXAuthPasswordEncryptionPrompt: CFStringRef; cvar; external;
  kSCPropNetIPv4Addresses: CFStringRef; cvar; external;
  kSCPropNetIPv4ConfigMethod: CFStringRef; cvar; external;
  kSCPropNetIPv4DHCPClientID: CFStringRef; cvar; external;
  kSCPropNetIPv4Router: CFStringRef; cvar; external;
  kSCPropNetIPv4SubnetMasks: CFStringRef; cvar; external;
  kSCPropNetIPv4DestAddresses: CFStringRef; cvar; external;
  kSCPropNetIPv4BroadcastAddresses: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodAutomatic: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodBOOTP: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodDHCP: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodINFORM: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodLinkLocal: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodManual: CFStringRef; cvar; external;
  kSCValNetIPv4ConfigMethodPPP: CFStringRef; cvar; external;
  kSCPropNetIPv6Addresses: CFStringRef; cvar; external;
  kSCPropNetIPv6ConfigMethod: CFStringRef; cvar; external;
  kSCPropNetIPv6DestAddresses: CFStringRef; cvar; external;
  kSCPropNetIPv6Flags: CFStringRef; cvar; external;
  kSCPropNetIPv6PrefixLength: CFStringRef; cvar; external;
  kSCPropNetIPv6Router: CFStringRef; cvar; external;
  kSCValNetIPv6ConfigMethodAutomatic: CFStringRef; cvar; external;
  kSCValNetIPv6ConfigMethodLinkLocal: CFStringRef; cvar; external;
  kSCValNetIPv6ConfigMethodManual: CFStringRef; cvar; external;
  kSCValNetIPv6ConfigMethodRouterAdvertisement: CFStringRef; cvar; external;
  kSCValNetIPv6ConfigMethod6to4: CFStringRef; cvar; external;
  kSCPropNet6to4Relay: CFStringRef; cvar; external;
  kSCPropNetLinkActive: CFStringRef; cvar; external;
  kSCPropNetLinkDetaching: CFStringRef; cvar; external;
  kSCPropNetModemAccessPointName: CFStringRef; cvar; external;
  kSCPropNetModemConnectionPersonality: CFStringRef; cvar; external;
  kSCPropNetModemConnectionScript: CFStringRef; cvar; external;
  kSCPropNetModemConnectSpeed: CFStringRef; cvar; external;
  kSCPropNetModemDataCompression: CFStringRef; cvar; external;
  kSCPropNetModemDeviceContextID: CFStringRef; cvar; external;
  kSCPropNetModemDeviceModel: CFStringRef; cvar; external;
  kSCPropNetModemDeviceVendor: CFStringRef; cvar; external;
  kSCPropNetModemDialMode: CFStringRef; cvar; external;
  kSCPropNetModemErrorCorrection: CFStringRef; cvar; external;
  kSCPropNetModemHoldCallWaitingAudibleAlert: CFStringRef; cvar; external;
  kSCPropNetModemHoldDisconnectOnAnswer: CFStringRef; cvar; external;
  kSCPropNetModemHoldEnabled: CFStringRef; cvar; external;
  kSCPropNetModemHoldReminder: CFStringRef; cvar; external;
  kSCPropNetModemHoldReminderTime: CFStringRef; cvar; external;
  kSCPropNetModemNote: CFStringRef; cvar; external;
  kSCPropNetModemPulseDial: CFStringRef; cvar; external;
  kSCPropNetModemSpeaker: CFStringRef; cvar; external;
  kSCPropNetModemSpeed: CFStringRef; cvar; external;
  kSCValNetModemDialModeIgnoreDialTone: CFStringRef; cvar; external;
  kSCValNetModemDialModeManual: CFStringRef; cvar; external;
  kSCValNetModemDialModeWaitForDialTone: CFStringRef; cvar; external;
  kSCPropNetNetInfoBindingMethods: CFStringRef; cvar; external;
  kSCPropNetNetInfoServerAddresses: CFStringRef; cvar; external;
  kSCPropNetNetInfoServerTags: CFStringRef; cvar; external;
  kSCPropNetNetInfoBroadcastServerTag: CFStringRef; cvar; external;
  kSCValNetNetInfoBindingMethodsBroadcast: CFStringRef; cvar; external;
  kSCValNetNetInfoBindingMethodsDHCP: CFStringRef; cvar; external;
  kSCValNetNetInfoBindingMethodsManual: CFStringRef; cvar; external;
  kSCValNetNetInfoDefaultServerTag: CFStringRef; cvar; external;
  kSCPropNetPPPACSPEnabled: CFStringRef; cvar; external;
  kSCPropNetPPPConnectTime: CFStringRef; cvar; external;
  kSCPropNetPPPDeviceLastCause: CFStringRef; cvar; external;
  kSCPropNetPPPDialOnDemand: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectOnFastUserSwitch: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectOnIdle: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectOnIdleTimer: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectOnLogout: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectOnSleep: CFStringRef; cvar; external;
  kSCPropNetPPPDisconnectTime: CFStringRef; cvar; external;
  kSCPropNetPPPIdleReminderTimer: CFStringRef; cvar; external;
  kSCPropNetPPPIdleReminder: CFStringRef; cvar; external;
  kSCPropNetPPPLastCause: CFStringRef; cvar; external;
  kSCPropNetPPPLogfile: CFStringRef; cvar; external;
  kSCPropNetPPPPlugins: CFStringRef; cvar; external;
  kSCPropNetPPPRetryConnectTime: CFStringRef; cvar; external;
  kSCPropNetPPPSessionTimer: CFStringRef; cvar; external;
  kSCPropNetPPPStatus: CFStringRef; cvar; external;
  kSCPropNetPPPUseSessionTimer: CFStringRef; cvar; external;
  kSCPropNetPPPVerboseLogging: CFStringRef; cvar; external;
  kSCPropNetPPPAuthEAPPlugins: CFStringRef; cvar; external;
  kSCPropNetPPPAuthName: CFStringRef; cvar; external;
  kSCPropNetPPPAuthPassword: CFStringRef; cvar; external;
  kSCPropNetPPPAuthPasswordEncryption: CFStringRef; cvar; external;
  kSCPropNetPPPAuthPrompt: CFStringRef; cvar; external;
  kSCPropNetPPPAuthProtocol: CFStringRef; cvar; external;
  kSCValNetPPPAuthPasswordEncryptionKeychain: CFStringRef; cvar; external;
  kSCValNetPPPAuthPasswordEncryptionToken: CFStringRef; cvar; external;
  kSCValNetPPPAuthPromptBefore: CFStringRef; cvar; external;
  kSCValNetPPPAuthPromptAfter: CFStringRef; cvar; external;
  kSCValNetPPPAuthProtocolCHAP: CFStringRef; cvar; external;
  kSCValNetPPPAuthProtocolEAP: CFStringRef; cvar; external;
  kSCValNetPPPAuthProtocolMSCHAP1: CFStringRef; cvar; external;
  kSCValNetPPPAuthProtocolMSCHAP2: CFStringRef; cvar; external;
  kSCValNetPPPAuthProtocolPAP: CFStringRef; cvar; external;
  kSCPropNetPPPCommAlternateRemoteAddress: CFStringRef; cvar; external;
  kSCPropNetPPPCommConnectDelay: CFStringRef; cvar; external;
  kSCPropNetPPPCommDisplayTerminalWindow: CFStringRef; cvar; external;
  kSCPropNetPPPCommRedialCount: CFStringRef; cvar; external;
  kSCPropNetPPPCommRedialEnabled: CFStringRef; cvar; external;
  kSCPropNetPPPCommRedialInterval: CFStringRef; cvar; external;
  kSCPropNetPPPCommRemoteAddress: CFStringRef; cvar; external;
  kSCPropNetPPPCommTerminalScript: CFStringRef; cvar; external;
  kSCPropNetPPPCommUseTerminalScript: CFStringRef; cvar; external;
  kSCPropNetPPPCCPEnabled: CFStringRef; cvar; external;
  kSCPropNetPPPCCPMPPE40Enabled: CFStringRef; cvar; external;
  kSCPropNetPPPCCPMPPE128Enabled: CFStringRef; cvar; external;
  kSCPropNetPPPIPCPCompressionVJ: CFStringRef; cvar; external;
  kSCPropNetPPPIPCPUsePeerDNS: CFStringRef; cvar; external;
  kSCPropNetPPPLCPEchoEnabled: CFStringRef; cvar; external;
  kSCPropNetPPPLCPEchoFailure: CFStringRef; cvar; external;
  kSCPropNetPPPLCPEchoInterval: CFStringRef; cvar; external;
  kSCPropNetPPPLCPCompressionACField: CFStringRef; cvar; external;
  kSCPropNetPPPLCPCompressionPField: CFStringRef; cvar; external;
  kSCPropNetPPPLCPMRU: CFStringRef; cvar; external;
  kSCPropNetPPPLCPMTU: CFStringRef; cvar; external;
  kSCPropNetPPPLCPReceiveACCM: CFStringRef; cvar; external;
  kSCPropNetPPPLCPTransmitACCM: CFStringRef; cvar; external;
  kSCPropNetL2TPIPSecSharedSecret: CFStringRef; cvar; external;
  kSCPropNetL2TPIPSecSharedSecretEncryption: CFStringRef; cvar; external;
  kSCPropNetL2TPTransport: CFStringRef; cvar; external;
  kSCValNetL2TPIPSecSharedSecretEncryptionKeychain: CFStringRef; cvar; external;
  kSCValNetL2TPTransportIP: CFStringRef; cvar; external;
  kSCValNetL2TPTransportIPSec: CFStringRef; cvar; external;
  kSCPropNetProxiesExceptionsList: CFStringRef; cvar; external;
  kSCPropNetProxiesExcludeSimpleHostnames: CFStringRef; cvar; external;
  kSCPropNetProxiesFTPEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesFTPPassive: CFStringRef; cvar; external;
  kSCPropNetProxiesFTPPort: CFStringRef; cvar; external;
  kSCPropNetProxiesFTPProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesGopherEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesGopherPort: CFStringRef; cvar; external;
  kSCPropNetProxiesGopherProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPPort: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPSEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPSPort: CFStringRef; cvar; external;
  kSCPropNetProxiesHTTPSProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesRTSPEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesRTSPPort: CFStringRef; cvar; external;
  kSCPropNetProxiesRTSPProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesSOCKSEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesSOCKSPort: CFStringRef; cvar; external;
  kSCPropNetProxiesSOCKSProxy: CFStringRef; cvar; external;
  kSCPropNetProxiesProxyAutoConfigEnable: CFStringRef; cvar; external;
  kSCPropNetProxiesProxyAutoConfigJavaScript: CFStringRef; cvar; external;
  kSCPropNetProxiesProxyAutoConfigURLString: CFStringRef; cvar; external;
  kSCPropNetProxiesProxyAutoDiscoveryEnable: CFStringRef; cvar; external;
  kSCPropNetSMBNetBIOSName: CFStringRef; cvar; external;
  kSCPropNetSMBNetBIOSNodeType: CFStringRef; cvar; external;
  kSCPropNetSMBNetBIOSScope: CFStringRef; cvar; external;
  kSCPropNetSMBWINSAddresses: CFStringRef; cvar; external;
  kSCPropNetSMBWorkgroup: CFStringRef; cvar; external;
  kSCValNetSMBNetBIOSNodeTypeBroadcast: CFStringRef; cvar; external;
  kSCValNetSMBNetBIOSNodeTypePeer: CFStringRef; cvar; external;
  kSCValNetSMBNetBIOSNodeTypeMixed: CFStringRef; cvar; external;
  kSCValNetSMBNetBIOSNodeTypeHybrid: CFStringRef; cvar; external;
  kSCEntUsersConsoleUser: CFStringRef; cvar; external;
  kSCPropSystemComputerName: CFStringRef; cvar; external;
  kSCPropSystemComputerNameEncoding: CFStringRef; cvar; external;
  kSCDynamicStoreDomainFile: CFStringRef; cvar; external;
  kSCDynamicStoreDomainPlugin: CFStringRef; cvar; external;
  kSCDynamicStoreDomainSetup: CFStringRef; cvar; external;
  kSCDynamicStoreDomainState: CFStringRef; cvar; external;
  kSCDynamicStoreDomainPrefs: CFStringRef; cvar; external;
  kSCDynamicStorePropSetupCurrentSet: CFStringRef; cvar; external;
  kSCDynamicStorePropSetupLastUpdated: CFStringRef; cvar; external;
  kSCDynamicStorePropNetInterfaces: CFStringRef; cvar; external;
  kSCDynamicStorePropNetPrimaryInterface: CFStringRef; cvar; external;
  kSCDynamicStorePropNetPrimaryService: CFStringRef; cvar; external;
  kSCDynamicStorePropNetServiceIDs: CFStringRef; cvar; external;
  kSCPropUsersConsoleUserName: CFStringRef; cvar; external;
  kSCPropUsersConsoleUserUID: CFStringRef; cvar; external;
  kSCPropUsersConsoleUserGID: CFStringRef; cvar; external;
{$endif}

{$endif}

{$endif}
{$endif}