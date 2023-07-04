#!/bin/bash

printf "\033c"
source /opt/ros/noetic/setup.bash
rm -rf /tmp/prerelease_job
mkdir -p /tmp/prerelease_job
pushd /tmp/prerelease_job

generate_prerelease_script.py \
          https://raw.githubusercontent.com/ros-infrastructure/ros_buildfarm_config/production/index.yaml \
          noetic default ubuntu focal amd64 \
          --custom-repo \
            sick_scan_xd:git:https://github.com/SICKAG/sick_scan_xd:feature/bloom_pretest \
            msgpack11:git:https://github.com/SICKAG/msgpack11:master \
            libsick_ldmrs:git:https://github.com/SICKAG/libsick_ldmrs:master \
          --level 1 \
          --output-dir ./        

rm -rf ~/.ccache ; mkdir -p ~/.ccache ; ./prerelease.sh
popd

