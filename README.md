# Visual Studio project zoo

This repo contains a zoo of projects and solutions that I created in order to have a reference of those projects as created by Visual Studio.

My need for these files arises from work on `premake4`.

# Summary

Solution files (`.sln`) start with a UTF-8 BOM and then use Windows line endings (CRLF) throughout.

On newer VS versions you can instruct MSBuild to emit the intermediate MSBuild project generated from the `.sln`. Simply set the environment variable `MSBUILDEMITSOLUTION=1` and MSBuild will drop at least one additional `*.*proj` file into the folder in which the `.sln` resides.

As far as I am aware VS 2010 is the first version in which the C/C++ projects -- whose extension is now `.vcxproj` instead of `.vcproj` previously -- are proper MSBuild files. However, much of the MSBuild tasks is contained in proprietary XML files and DLLs provided when you install Visual Studio. So even though MSBuild is now open source, you still need VS to make sense of the XML.

## Visual Studio 2005

### Solution (`.sln`) file

UTF-8, BOM, CRLF

```
Microsoft Visual Studio Solution File, Format Version 9.00
# Visual Studio 2005
```

### C/C++ (`.vcproj`) file

Windows 1252 (etc.), CRLF

```
<?xml version="1.0" encoding="Windows-1252"?>
<VisualStudioProject
	ProjectType="Visual C++"
	Version="8.00"
	Name="..."
	ProjectGUID="{...}"
	RootNamespace="..."
	Keyword="{AtlProj,AtlPSProj,Win32Proj}"
	>
	<Platforms>
		<Platform Name="..." />
	</Platforms>
	<Configurations>
		<Tool ... />
	</Configurations>
	<References>
	</References>
	<Files>
		<Filter ...>
			<File ...>
			</File>
		</Filter>
	</Files>
	<Globals>
	</Globals>
</VisualStudioProject>
```

## Visual Studio 2008

### Solution (`.sln`) file

UTF-8, BOM, CRLF

```
Microsoft Visual Studio Solution File, Format Version 10.00
# Visual Studio 2008
```

### C/C++ (`.vcproj`) file

Windows 1252 (etc.), CRLF

```
<?xml version="1.0" encoding="Windows-1252"?>
<VisualStudioProject
	ProjectType="Visual C++"
	Version="9.00"
	Name="..."
	ProjectGUID="{...}"
	RootNamespace="..."
	Keyword="Win32Proj"
	TargetFrameworkVersion="..."
	>
	<Platforms>
		<Platform Name="..." />
	</Platforms>
	<Configurations>
		<Tool ... />
	</Configurations>
	<References>
	</References>
	<Files>
		<Filter ...>
			<File ...>
			</File>
		</Filter>
	</Files>
	<Globals>
	</Globals>
</VisualStudioProject>
```

## Visual Studio 2010

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 11.00
# Visual Studio 2010
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```


## Visual Studio 2012

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio 2012
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```

### Solution (`.sln`) file

## Visual Studio 2013

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio 2013
VisualStudioVersion = 12.0.40629.0
MinimumVisualStudioVersion = 10.0.40219.1
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="12.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```

## Visual Studio 2015

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio 14
VisualStudioVersion = 14.0.25420.1
MinimumVisualStudioVersion = 10.0.40219.1
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="14.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```

## Visual Studio 2017

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio 15
VisualStudioVersion = 15.0.28307.1800
MinimumVisualStudioVersion = 10.0.40219.1
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" ToolsVersion="15.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```

## Visual Studio 2019

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio Version 16
VisualStudioVersion = 16.0.32126.315
MinimumVisualStudioVersion = 10.0.40219.1
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```

## Visual Studio 2022

### Solution (`.sln`) file

```
Microsoft Visual Studio Solution File, Format Version 12.00
# Visual Studio Version 17
VisualStudioVersion = 17.1.32210.238
MinimumVisualStudioVersion = 10.0.40219.1
```

### C/C++ (`.vcxproj`) file (MSBuild-based)

```
<?xml version="1.0" encoding="utf-8"?>
<Project DefaultTargets="Build" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
<!-- MSBuild properties, targets, tasks -->
</Project>
```
