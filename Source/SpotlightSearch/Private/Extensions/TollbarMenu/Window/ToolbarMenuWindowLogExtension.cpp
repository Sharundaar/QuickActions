﻿// Copyright Out-of-the-Box Plugins 2018-2023. All Rights Reserved.

#include "ToolbarMenuWindowLogExtension.h"

#include "Styling/SlateIconFinder.h"

TArray<FQuickCommandEntry> UToolbarMenuWindowLogExtension::GetCommands()
{
	TArray<FQuickCommandEntry> OutCommands;

	FQuickCommandEntry DeviceOutputLog;
	DeviceOutputLog.Title = NSLOCTEXT("OutputLog", "DeviceOutputLogTab", "Device Output Log");
	DeviceOutputLog.Tooltip = NSLOCTEXT("OutputLog", "DeviceOutputLogTooltipText", "Open the Device Output Log tab.");
	DeviceOutputLog.Icon = FSlateIcon(FName("OutputLogStyle"), "Log.TabIcon");
	DeviceOutputLog.ExecuteCallback = FSimpleDelegate::CreateLambda(
		[]()
		{
			FGlobalTabmanager::Get()->TryInvokeTab(FTabId(TEXT("DeviceOutputLog")));
		}
	);
	OutCommands.Add(DeviceOutputLog);

	FQuickCommandEntry InterchangeResultsBrowser;
	InterchangeResultsBrowser.Title = NSLOCTEXT("InterchangeResultsBrowser", "InterchangeResultsBrowser", "Interchange Results Browser");
	InterchangeResultsBrowser.Tooltip = NSLOCTEXT("InterchangeResultsBrowser", "InterchangeResultsBrowserTooltipText", "Open the Interchange Results Browser tab.");
	InterchangeResultsBrowser.Icon = FSlateIconFinder::FindIcon("InterchangeResultsBrowser.TabIcon");
	InterchangeResultsBrowser.ExecuteCallback = FSimpleDelegate::CreateLambda(
		[]()
		{
			FGlobalTabmanager::Get()->TryInvokeTab(FTabId(TEXT("InterchangeResults")));
		}
	);
	OutCommands.Add(InterchangeResultsBrowser);

	FQuickCommandEntry MessageLog;
	MessageLog.Title = NSLOCTEXT("UnrealEditor", "MessageLogTab", "Message Log");
	MessageLog.Tooltip = NSLOCTEXT("UnrealEditor", "MessageLogTooltipText", "Open the Message Log tab.");
	MessageLog.Icon = FSlateIcon(FAppStyle::GetAppStyleSetName(), "MessageLog.TabIcon");
	MessageLog.ExecuteCallback = FSimpleDelegate::CreateLambda(
		[]()
		{
			FGlobalTabmanager::Get()->TryInvokeTab(FTabId(TEXT("MessageLog")));
		}
	);
	OutCommands.Add(MessageLog);

	FQuickCommandEntry OutputLog;
	OutputLog.Title = NSLOCTEXT("OutputLog", "OutputLogTab", "Output Log");
	OutputLog.Tooltip = NSLOCTEXT("OutputLog", "OutputLogTooltipText", "Open the Output Log tab.");
	OutputLog.Icon = FSlateIcon(FName("OutputLogStyle"), "Log.TabIcon");
	OutputLog.ExecuteCallback = FSimpleDelegate::CreateLambda(
		[]()
		{
			FGlobalTabmanager::Get()->TryInvokeTab(FTabId(TEXT("OutputLog")));
		}
	);
	OutCommands.Add(OutputLog);

	return OutCommands;
}