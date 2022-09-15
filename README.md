## Summary
CYNet is a wrapper project around the manufacturer's driver for CYNet cameras(New YFOSC controller of 2.4m Telescope. YunNan OBS). Used by libccd as part of the LCO instrument stack.

## Dependencies

## Build

cynet is built using Maven and the Nar plugin. The useful products are:

* rpm (architecture specific) that contains a shared object to be installed to /lco/libccd

### Use the buildenv project to build for a target host

The [buildenv](https://github.com/LCOGT/buildenv) project provides wrappers around jenkins build swarm nodes allowing a developer to test compilations
or to build one-off projects such as an RPM for a target machine.

Steps:
* check out buildenv
* build your target environment
* build artefact for target

So to build the soem rpm for centos7:

```console
$ cd ~/
$ git clone git@github.com:LCOGT/buildenv.git
$ cd buildenv
$ ./makeenv c7
$ cd ~/workspace/cynet
$ ~/buildenv/buildenv c7
$ mvn clean install
```

Replace c7 with r8 for rocky 8.


## Manual Build & Deploy
### Parent Project
Many LCO projects share a common parent project to define global dependencies. The parent project is
https://github.com/LCOGT/lcogt-pom and must be built first. Follow the Manual Build instructions in 
the project README.
### Manual Build
    mvn clean install
### Manual Deploy
    sudo yum localinstall target/cynet-*.rpm 
    
## Deploy
The rpm must be added to the LCO yum repository, so it can be installed by puppet
* Find buildcentos6-32 and buildcentos7-64 build logs in Jenkins, e.g. http://buildsba:8080/job/cynet/
* View console log for both builds
* Fine rpm generation line on last page, e.g. Writing target file: /home/eng/jenkins/workspace/cynet/label/buildcentos6-32/target/cynet-*.rpm
* scp rpm file to fsfs:/data/repos/lcogt/6 and fsfs:/data/repos/lcogt/7 (as root)
* run  lcogt.bash script in fsfs:/data/repos to add to yum (as root)

## Post deploy
The instrument agents in End-to-End tests use https://github.com/LCOGT/instrument-base-image to generate the base
docker image. This will need to be rebuilt when a new version of cynet is generated.


## Additional information

The cynet driver manual can be found [here](https://www.cynetccd.com/index.php?m=content&c=index&a=show&catid=127&id=167)

