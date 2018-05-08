#!/usr/bin/env sh
set -x

cp package.json build/package.json && \
tar -czf package.tgz build && \
scp -o "StrictHostKeyChecking no" -i ~/.ssh/idrsa package.tgz deploy@167.99.0.204:/srv/www/bywhale.me && \
ssh -o "StrictHostKeyChecking no" -i ~/.ssh/idrsa deploy@167.99.0.204 'bash -s' < ./scripts/untar.sh