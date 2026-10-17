# GAPS_HONEST

## Closed this pass
- Evaluator string literals for file/ini paths
- show_debug_message, show_message, randomize, random_set_seed
- Room bounds clamp (prior)
- Dynamic sprite origin (`origin_x`, `origin_y`) and scale (`image_xscale`, `image_yscale`) calculation in `gml_get_bbox_*`
- Pixel-precise bitmask collision inspection (`precise_mask_overlap`) integrated into `gml_place_meeting`
- Removed duplicate unreachable `bbox_*` code in `gm82_gml_eval.c`

## Open
- Complete GMK Begin/End event decode tables
- Full GML / arrays / with-blocks fidelity in C parser
- Physical Android hardware playtest (touch input + OpenSLES audio latency)

No 100% claim. Current Honest Weighted Parity: 37.80% (Host Verified). Remaining Gap: 62.20%.
