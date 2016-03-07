##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Picareta
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\FACOMP\git\PicaretadoMinecraft\Workspace"
ProjectPath            := "C:\Users\FACOMP\git\PicaretadoMinecraft\Workspace\Picareta"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=FACOMP
Date                   :=07/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
SharedObjectLinkerName :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe -shared -fPIC
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Picareta.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
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
AR       := C:/cygwin64/bin/x86_64-pc-cygwin-ar.exe rcu
CXX      := C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/x86_64-pc-cygwin-as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix) $(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix) $(IntermediateDirectory)/Spell.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix) $(IntermediateDirectory)/Espada.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix): Bloco.cpp $(IntermediateDirectory)/Bloco.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Bloco.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Bloco.cpp$(DependSuffix): Bloco.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Bloco.cpp$(DependSuffix) -MM "Bloco.cpp"

$(IntermediateDirectory)/Bloco.cpp$(PreprocessSuffix): Bloco.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Bloco.cpp$(PreprocessSuffix) "Bloco.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp $(IntermediateDirectory)/Data.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(DependSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Data.cpp$(DependSuffix) -MM "Data.cpp"

$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix): Mapa.cpp $(IntermediateDirectory)/Mapa.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Mapa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mapa.cpp$(DependSuffix): Mapa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Mapa.cpp$(DependSuffix) -MM "Mapa.cpp"

$(IntermediateDirectory)/Mapa.cpp$(PreprocessSuffix): Mapa.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mapa.cpp$(PreprocessSuffix) "Mapa.cpp"

$(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix): Picareta.cpp $(IntermediateDirectory)/Picareta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Picareta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Picareta.cpp$(DependSuffix): Picareta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Picareta.cpp$(DependSuffix) -MM "Picareta.cpp"

$(IntermediateDirectory)/Picareta.cpp$(PreprocessSuffix): Picareta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Picareta.cpp$(PreprocessSuffix) "Picareta.cpp"

$(IntermediateDirectory)/Spell.cpp$(ObjectSuffix): Spell.cpp $(IntermediateDirectory)/Spell.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Spell.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Spell.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Spell.cpp$(DependSuffix): Spell.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Spell.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Spell.cpp$(DependSuffix) -MM "Spell.cpp"

$(IntermediateDirectory)/Spell.cpp$(PreprocessSuffix): Spell.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Spell.cpp$(PreprocessSuffix) "Spell.cpp"

$(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix): Ferramenta.cpp $(IntermediateDirectory)/Ferramenta.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Ferramenta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ferramenta.cpp$(DependSuffix): Ferramenta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Ferramenta.cpp$(DependSuffix) -MM "Ferramenta.cpp"

$(IntermediateDirectory)/Ferramenta.cpp$(PreprocessSuffix): Ferramenta.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ferramenta.cpp$(PreprocessSuffix) "Ferramenta.cpp"

$(IntermediateDirectory)/Espada.cpp$(ObjectSuffix): Espada.cpp $(IntermediateDirectory)/Espada.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/git/PicaretadoMinecraft/Workspace/Picareta/Espada.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Espada.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Espada.cpp$(DependSuffix): Espada.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Espada.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Espada.cpp$(DependSuffix) -MM "Espada.cpp"

$(IntermediateDirectory)/Espada.cpp$(PreprocessSuffix): Espada.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Espada.cpp$(PreprocessSuffix) "Espada.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


