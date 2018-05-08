#!/usr/bin/env sh
set -x

tar -czf package.tgz build && \
scp -o "StrictHostKeyChecking no" package.tgz deploy@167.99.0.204:/srv/www/bywhale.me/ && \
ssh -o "StrictHostKeyChecking no" ${REMOTE_USER}@${REMOTE_HOST} 'bash -s' < ./scripts/untar.sh