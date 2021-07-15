##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Part_1
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=D:/CS_3305
ProjectPath            :=D:/CS_3305/Part_1
IntermediateDirectory  :=../build-$(ConfigurationName)/Part_1
OutDir                 :=../build-$(ConfigurationName)/Part_1
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Troy Cope
Date                   :=25/06/2021
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
Objects0=../build-$(ConfigurationName)/Part_1/sequence1.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Part_1/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Part_1" mkdir "..\build-$(ConfigurationName)\Part_1"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Part_1" mkdir "..\build-$(ConfigurationName)\Part_1"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Part_1/.d:
	@if not exist "..\build-$(ConfigurationName)\Part_1" mkdir "..\build-$(ConfigurationName)\Part_1"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Part_1/sequence1.cpp$(ObjectSuffix): sequence1.cpp ../build-$(ConfigurationName)/Part_1/sequence1.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CS_3305/Part_1/sequence1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence1.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Part_1/sequence1.cpp$(DependSuffix): sequence1.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Part_1/sequence1.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Part_1/sequence1.cpp$(DependSuffix) -MM sequence1.cpp

../build-$(ConfigurationName)/Part_1/sequence1.cpp$(PreprocessSuffix): sequence1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Part_1/sequence1.cpp$(PreprocessSuffix) sequence1.cpp

../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(ObjectSuffix): sequence_test.cpp ../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "D:/CS_3305/Part_1/sequence_test.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/sequence_test.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(DependSuffix): sequence_test.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(DependSuffix) -MM sequence_test.cpp

../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(PreprocessSuffix): sequence_test.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Part_1/sequence_test.cpp$(PreprocessSuffix) sequence_test.cpp


-include ../build-$(ConfigurationName)/Part_1//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


