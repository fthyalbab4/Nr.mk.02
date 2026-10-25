# Reference GML fixtures

These small, authored regression inputs exercise the typed GML VM and native dispatcher. They are authored in this repository, are not copied from the Windows executable, and are not evidence of full GameMaker compatibility.

Each `*.gml` has a neighboring `*.expected.json` snapshot. Run `python3 tools/run_reference_fixtures.py` to compile and compare actual output. Snapshot changes must be reviewed and must not be regenerated just to make a failing test pass. The runner's `--update-snapshots` mode is for intentional, reviewed updates only.

Current eight cases cover variable assignment, arithmetic/string dispatch, `if/else`, `while`, `for`, `do/until`, `repeat`, and `break/continue`. Missing coverage includes full GMK resource parity, all events/actions, complete GML scopes/built-ins/grammar, real Windows differential tests, and import/export round-trip.
