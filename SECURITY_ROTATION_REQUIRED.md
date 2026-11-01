# Security rotation required

A private APK-signing key was previously committed in bundled web assets. It has been removed from the working tree and APK signing now requires a private key and matching certificate supplied explicitly by the owner. The legacy identity must be treated as compromised.

Before any production release, the project owner must generate or select a new signing identity, store it only in an approved secret manager or Play App Signing, and update the release CI configuration. This repository change does not rewrite existing Git history or rotate credentials held outside this checkout.

Development builds rely on Android Gradle Plugin's local, generated debug keystore; no debug keystore is tracked by this project.
