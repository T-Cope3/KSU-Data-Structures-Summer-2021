##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Part_2
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/CS_3305
ProjectPath            :=D:/CS_3305/Part_2
IntermediateDirectory  :=../build-$(ConfigurationName)/Part_2
OutDir                 :=../build-$(ConfigurationName)/Part_2
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Troy Cope
Date                   :=15/06/2021
CodeLitePath           :=D:/CodeLite
LinkerName             :=D:/ming_32/bin/g++.exe
SharedObjectLinkerName :=D:/ming_32/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=D:/ming_32/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := D:/ming_32/bin/ar.exe rcu
CXX      := D:/ming_32/bin/g++.exe
CC       := D:/ming_32/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := D:/ming_32/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=D:\CodeLite
Objects0=../build-$(ConfigurationName)/Part_2/bank_account.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Part_2/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Part_2/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Part_2" mkdir "..\build-$(ConfigurationName)\Part_2"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Part_2" mkdir "..\build-$(ConfigurationName)\Part_2"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Part_2/.d:
	@if not exist "..\build-$(ConfigurationName)\Part_2" mkdir "..\build-$(ConfigurationName)\Part_2"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Part_2/bank_account.cpp$(ObjectSuffix): bank_account.cpp ../build-$(ConfigurationName)/Part_2/bank_account.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CS_3305/Part_2/bank_account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bank_account.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Part_2/bank_account.cpp$(DependSuffix): bank_account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Part_2/bank_account.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Part_2/bank_account.cpp$(DependSuffix) -MM bank_account.cpp

../build-$(ConfigurationName)/Part_2/bank_account.cpp$(PreprocessSuffix): bank_account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Part_2/bank_account.cpp$(PreprocessSuffix) bank_account.cpp

../build-$(ConfigurationName)/Part_2/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Part_2/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CS_3305/Part_2/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Part_2/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Part_2/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Part_2/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Part_2/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Part_2/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/Part_2//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


