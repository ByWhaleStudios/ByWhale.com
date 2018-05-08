#!/usr/bin/env sh
set -x

tar -czf package.tgz build && \
scp package.tgz deploy@167.99.0.204:/srv/www/bywhale.me/ && \
ssh ${REMOTE_USER}@${REMOTE_HOST} 'bash -s' < ./scripts/untar.sh