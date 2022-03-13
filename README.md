# Visual Studio project zoo

This repo contains a zoo of projects and solutions that I created in order to have a reference of those projects as created by Visual Studio.

My need for these files arises from work on `premake4`.

# Future research

Aside from the DLLs which are evidently used in conjunction with Visual Studio and MSBuild -- MSBuild itself is meanwhile open-source -- there are a number of files of interest which can be used to deduce a lot of information regarding the defaults used for projects.

* `%Program Files(x86)%\MSBuild\Microsoft.Cpp\v4.0`
  * **NB:** I think this is the "root location" for the original MSBuild-based `.vcxproj` versions. This particular item seems to be identical to VS2010.
  * **Also note:** the `.props` and `.targets` files in this folder and the respective `v110`, `v120`, `v140` subfolders _appear_ to correspond to the defaults used during project generation.
  * `.\1033` (locale ID for US-English in decimal)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
  * `.\V110\1033` (v110 == VS2012)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
  * `.\V120\1033` (v110 == VS2013)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
  * `.\V140\1033` (v110 == VS2015)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
* `%Program Files(x86)%\Microsoft Visual Studio\2017\$Edition` (`$Edition` == `{Community,Professional,Enterprise}`)
  * `.\Common7\IDE\VC\VCTargets\1033` (locale ID for US-English in decimal)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
* `%Program Files(x86)%\Microsoft Visual Studio\2019\$Edition` (`$Edition` == `{Community,Professional,Enterprise}`)
  * `.\MSBuild\Microsoft\VC\v160\1033` (locale ID for US-English in decimal, `v160` == VS2019)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
* `%Program Files%\Microsoft Visual Studio\2022\$Edition` (`$Edition` == `{Community,Professional,Enterprise}`)
  * **NB:** Apparently the below structure facilitates using the older toolset choices from within VS2022.
  * `.\MSBuild\Microsoft\VC\v150\1033` (`v150` == VS2017)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
  * `.\MSBuild\Microsoft\VC\v160\1033` (`v160` == VS2019)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.
  * `.\MSBuild\Microsoft\VC\v170\1033` (`v170` == VS2022)
    * `cl.xml` (for the compiler), `link.xml` (for the linker), etc.

NB: this assumes a 64-bit (x86-64 to be precise) system, otherwise you may have to alter the above locations to match your actual setup.

# Summary

Solution files (`.sln`) start with a UTF-8 BOM and then use Windows line endings (CRLF) throughout.

On newer VS versions you can instruct MSBuild to emit the intermediate MSBuild project generated from the `.sln`. Simply set the environment variable `MSBUILDEMITSOLUTION=1` and MSBuild will drop at least one additional `*.*proj` file into the folder in which the `.sln` resides.

As far as I am aware VS 2010 is the first version in which the C/C++ projects -- whose extension is now `.vcxproj` instead of `.vcproj` previously -- are proper MSBuild files. However, much of the MSBuild tasks is contained in proprietary XML files and DLLs provided when you install Visual Studio. So even though MSBuild is now open source, you still need VS to make sense of the XML.

## Visual Studio 2005 (v80)

Adds `x64` as platform value, supporting `Win32` (x86-32) and `x64` (x86-64).

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

## Visual Studio 2008 (v90)

Supports: `Win32` (x86-32) and `x64` (x86-64).

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

## Visual Studio 2010 (v100)

Supports: `Win32` (x86-32) and `x64` (x86-64).

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


## Visual Studio 2012 (v110)

Adds `ARM` as platform value, supporting `ARM` (32-bit ARM), `Win32` (x86-32) and `x64` (x86-64).

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

Supports: `ARM` (32-bit ARM), `Win32` (x86-32) and `x64`  (x86-64).

## Visual Studio 2013 (v120)

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

## Visual Studio 2015 (v140)

Adds `Itanium` as platform value, supporting `ARM` (32-bit ARM), `Itanium`, `Win32` (x86-32) and `x64` (x86-64).

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

First version to add `<WindowsTargetPlatformVersion>8.1</WindowsTargetPlatformVersion>` right after `<RootNamespace>...</RootNamespace>` in the project file. The property governs the selection of the Windows SDK from installed Windows Kits.

## Visual Studio 2017 (v150)

Adds `ARM64` as platform value, supporting `ARM` (32-bit ARM), `ARM64` (64-bit ARM), `Itanium`, `Win32` (x86-32) and `x64` (x86-64).

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

First version to reference Windows 10 with `<WindowsTargetPlatformVersion>10.0.17763.0</WindowsTargetPlatformVersion>` right after `<RootNamespace>...</RootNamespace>` in the project file. The property governs the selection of the Windows SDK from installed Windows Kits.

## Visual Studio 2019 (v160)

Supports: `ARM` (32-bit ARM), `ARM64` (64-bit ARM), `Itanium`, `Win32` (x86-32) and `x64` (x86-64).

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

Starting with this version the choice of Windows 10 gets more generic with `<WindowsTargetPlatformVersion>10.0</WindowsTargetPlatformVersion>` right after `<RootNamespace>...</RootNamespace>` in the project file. Supposedly this generic `10.0` choice will automatically pick the earliest or latest available Windows SDK within the given range. Note that the Windows SDK for Windows 11 still carries a major version 10.

## Visual Studio 2022 (v170)

Supports: `ARM` (32-bit ARM), `ARM64` (64-bit ARM), `Itanium`, `Win32` (x86-32) and `x64` (x86-64).

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

Continues to carry `<WindowsTargetPlatformVersion>10.0</WindowsTargetPlatformVersion>` right after `<RootNamespace>...</RootNamespace>` in the project file.