##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Picareta
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Tiago\Desktop\GIT\PicaretadoMinecraft\Workspace"
ProjectPath            := "C:\Users\Tiago\Desktop\GIT\PicaretadoMinecraft\Workspace\Picareta"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Tiago
Date                   :=11/03/2016
CodeLitePath           :="D:\D\Program Files (x86)\CodeLite"
LinkerName             :="D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/bin/link.exe" -nologo
SharedObjectLinkerName :="D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/bin/link.exe" -DLL -nologo
ObjectSuffix           :=.obj
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=/Zi 
IncludeSwitch          :=/I
LibrarySwitch          := 
OutputSwitch           :=/OUT:
LibraryPathSwitch      :=/LIBPATH:
PreprocessorSwitch     :=/D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=/Fo
ArchiveOutputSwitch    :=/OUT:
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Picareta.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            := $(IncludeSwitch)"D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/include"  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                :=$(LibraryPathSwitch)"D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/lib"  $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/bin/lib.exe" -nologo
CXX      := "D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/bin/cl.exe" -nologo -FC -EHs
CC       := "D:/D/Program Files (x86)/Microsoft Visual Studio 11.0/VC/bin/cl.exe" -nologo -FC
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=D:\D\Program Files (x86)\CodeLite
Objects0=$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix) $(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix) $(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix) $(IntermediateDirectory)/Spell.cpp$(ObjectSuffix) $(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix) $(IntermediateDirectory)/PicaretaDiamante.cpp$(ObjectSuffix) $(IntermediateDirectory)/PicaretaPedra.cpp$(ObjectSuffix) $(IntermediateDirectory)/Player.cpp$(ObjectSuffix) \
	



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
$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix): Bloco.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Bloco.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Bloco.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Bloco.cpp$(PreprocessSuffix): Bloco.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Bloco.cpp$(PreprocessSuffix) "Bloco.cpp"

$(IntermediateDirectory)/Data.cpp$(ObjectSuffix): Data.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Data.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Data.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Data.cpp$(PreprocessSuffix): Data.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Data.cpp$(PreprocessSuffix) "Data.cpp"

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix): Mapa.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Mapa.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mapa.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Mapa.cpp$(PreprocessSuffix): Mapa.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Mapa.cpp$(PreprocessSuffix) "Mapa.cpp"

$(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix): Picareta.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Picareta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Picareta.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Picareta.cpp$(PreprocessSuffix): Picareta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Picareta.cpp$(PreprocessSuffix) "Picareta.cpp"

$(IntermediateDirectory)/Spell.cpp$(ObjectSuffix): Spell.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Spell.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Spell.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Spell.cpp$(PreprocessSuffix): Spell.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Spell.cpp$(PreprocessSuffix) "Spell.cpp"

$(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix): Ferramenta.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Ferramenta.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Ferramenta.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Ferramenta.cpp$(PreprocessSuffix): Ferramenta.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Ferramenta.cpp$(PreprocessSuffix) "Ferramenta.cpp"

$(IntermediateDirectory)/PicaretaDiamante.cpp$(ObjectSuffix): PicaretaDiamante.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/PicaretaDiamante.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PicaretaDiamante.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PicaretaDiamante.cpp$(PreprocessSuffix): PicaretaDiamante.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PicaretaDiamante.cpp$(PreprocessSuffix) "PicaretaDiamante.cpp"

$(IntermediateDirectory)/PicaretaPedra.cpp$(ObjectSuffix): PicaretaPedra.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/PicaretaPedra.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PicaretaPedra.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PicaretaPedra.cpp$(PreprocessSuffix): PicaretaPedra.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PicaretaPedra.cpp$(PreprocessSuffix) "PicaretaPedra.cpp"

$(IntermediateDirectory)/Player.cpp$(ObjectSuffix): Player.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Tiago/Desktop/GIT/PicaretadoMinecraft/Workspace/Picareta/Player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Player.cpp$(PreprocessSuffix): Player.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Player.cpp$(PreprocessSuffix) "Player.cpp"

##
## Clean
##
clean:
	$(RM) -r ./Debug/


