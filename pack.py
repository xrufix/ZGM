import os
import shutil
import subprocess
import sys

gitDir = os.path.dirname(os.path.realpath(__file__))
tempDir = gitDir + "\\_temp"
missionDir = gitDir + "\\xru_ZGM"
mapsDir = gitDir + "\\maps"

print("file:       " + __file__)
print("gitDir:     " + gitDir)
print("tempDir:    " + tempDir)
print("missionDir: " + missionDir)
print("mapsDir:    " + mapsDir)

def createTemp():
    global tempDir, gitDir
    os.makedirs(tempDir)
    for root, dirs, files in os.walk(missionDir):
        if "\\." not in root:
            for name in dirs:
                if "." not in name:
                    newDir = tempDir + os.path.join(root, name)[len(missionDir):]
                    os.makedirs(newDir)
            for name in files:
                if name not in ["mission.sqm", "default_loadouts.hpp"]:
                    target = tempDir + root[len(missionDir):] + "\\" + name
                    shutil.copyfile(os.path.join(root, name), target)
    subprocess.run([
        "C:\Steam\steamapps\common\Arma 3 Tools\CfgConvert\CfgConvert.exe",
        "-txt",
        "-dst",
        tempDir + "\\description.ext",
        missionDir + "\\description.ext"
    ], stdout = subprocess.PIPE)

def clearTemp():
    global tempDir
    shutil.rmtree(tempDir)

def getVersion():
    print ("Set version number:")
    major = input("Major: ")
    minor = input("Minor: ")
    version = "{}v{}".format(major,minor)
    print ("Version: " + version)
    return(version)

def packPBO(version):
    destDir = gitDir + "\\pbo\\" + version + "\\"
    os.makedirs(destDir)

    for root, dirs, files in os.walk(mapsDir):
        if root != mapsDir:
            mapName = root[len(mapsDir) + 1:]
            destFile = "[GrpW]_TvT128_xru_ZGM_{}.{}.pbo".format(version, mapName)

            print("destFile: " + destFile)
            print("destDir: " + destDir)

            for file in files:
                target = tempDir + "\\" + file
                shutil.copyfile(os.path.join(root, file), tempDir + "\\" + file)

            subprocess.run([
                "C:\\Program Files\\PBO Manager v.1.4 beta\\PBOConsole.exe",
                "-pack",
                tempDir,
                destDir + destFile
            ], stdout = subprocess.PIPE)

            os.remove(tempDir + "\\mission.sqm")
            os.remove(tempDir + "\\default_loadouts.hpp")

createTemp()
version = getVersion()
packPBO(version)
clearTemp()
print("Done!")
