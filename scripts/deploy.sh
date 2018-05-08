#!/usr/bin/env sh
set -x

tar -czf package.tgz build && \
scp -o "StrictHostKeyChecking no" package.tgz deploy@167.99.0.204:/srv/www/bywhale.me && \
ssh -o "StrictHostKeyChecking no" deploy@167.99.0.204 'bash -s' < ./scripts/untar.sh